#include <u.h>
#include <libc.h>
#include <bio.h>
#include <ctype.h>
#define Extern extern
#include "parl.h"
#include "globl.h"
#include "y.tab.h"

static int slot;

char	*itab[] =
{
	"XXX",
	"ADD",
	"ADDCC",
	"ADDX",
	"ADDXCC",
	"AND",
	"ANDCC",
	"ANDN",
	"ANDNCC",
	"BA",
	"BCC",
	"BCS",
	"BE",
	"BG",
	"BGE",
	"BGU",
	"BL",
	"BLE",
	"BLEU",
	"BN",
	"BNE",
	"BNEG",
	"BPOS",
	"BVC",
	"BVS",
	"CB0",
	"CB01",
	"CB012",
	"CB013",
	"CB02",
	"CB023",
	"CB03",
	"CB1",
	"CB12",
	"CB123",
	"CB13",
	"CB2",
	"CB23",
	"CB3",
	"CBA",
	"CBN",
	"CMP",
	"CPOP1",
	"CPOP2",
	"DATA",
	"DIV",
	"DIVL",
	"FABSD",
	"FABSF",
	"FABSX",
	"FADDD",
	"FADDF",
	"FADDX",
	"FBA",
	"FBE",
	"FBG",
	"FBGE",
	"FBL",
	"FBLE",
	"FBLG",
	"FBN",
	"FBNE",
	"FBO",
	"FBU",
	"FBUE",
	"FBUG",
	"FBUGE",
	"FBUL",
	"FBULE",
	"FCMPD",
	"FCMPED",
	"FCMPEF",
	"FCMPEX",
	"FCMPF",
	"FCMPX",
	"FDIVD",
	"FDIVF",
	"FDIVX",
	"FMOVD",
	"FMOVDF",
	"FMOVDW",
	"FMOVDX",
	"FMOVF",
	"FMOVFD",
	"FMOVFW",
	"FMOVFX",
	"FMOVWD",
	"FMOVWF",
	"FMOVWX",
	"FMOVX",
	"FMOVXD",
	"FMOVXF",
	"FMOVXW",
	"FMULD",
	"FMULF",
	"FMULX",
	"FNEGD",
	"FNEGF",
	"FNEGX",
	"FSQRTD",
	"FSQRTF",
	"FSQRTX",
	"FSUBD",
	"FSUBF",
	"FSUBX",
	"GLOBL",
	"GOK",
	"HISTORY",
	"IFLUSH",
	"JMPL",
	"JMP",
	"MOD",
	"MODL",
	"MOVB",
	"MOVBU",
	"MOVD",
	"MOVH",
	"MOVHU",
	"MOVW",
	"MUL",
	"MULSCC",
	"NAME",
	"NOP",
	"OR",
	"ORCC",
	"ORN",
	"ORNCC",
	"RESTORE",
	"RETT",
	"RETURN",
	"SAVE",
	"SLL",
	"SRA",
	"SRL",
	"SUB",
	"SUBCC",
	"SUBX",
	"SUBXCC",
	"SWAP",
	"TA",
	"TADDCC",
	"TADDCCTV",
	"TAS",
	"TCC",
	"TCS",
	"TE",
	"TEXT",
	"TG",
	"TGE",
	"TGU",
	"TL",
	"TLE",
	"TLEU",
	"TN",
	"TNE",
	"TNEG",
	"TPOS",
	"TSUBCC",
	"TSUBCCTV",
	"TVC",
	"TVS",
	"UNIMP",
	"WORD",
	"XNOR",
	"XNORCC",
	"XOR",
	"XORCC",
	"END",
	"DYNT",
	"INIT",
	"LAST",
};

char rcmap[256] =
{
	['\0'] 'z',
	['\n'] 'n',
	['\r'] 'r',
	['\t'] 't',
	['\b'] 'b',
	['\f'] 'f',
	['\a'] 'a',
	['\v'] 'v',
	['\\'] '\\',
	['"']  '"',
};

void
vwrite(Biobuf *b, Inst *i, int sf, int st)
{
	char io[100], *bp;

	io[0] = i->op;
	if(i->reg == Nreg)
		io[1] = NREG;
	else 
		io[1] = i->reg;

	io[2] = i->lineno;
	io[3] = i->lineno>>8;
	io[4] = i->lineno>>16;
	io[5] = i->lineno>>24;

	bp = vaddr(io+6, &i->src1, sf);
	bp = vaddr(bp, &i->dst, st);

	Bwrite(b, io, bp-io);
}

void
outhist(Biobuf *b)
{
	Hist *h;
	char *p, *q;
	Inst pg;
	int n;

	pg.op = AHISTORY;
	pg.src1.type = A_NONE;
	pg.dst.reg = Nreg;
	pg.reg = Nreg;
	for(h = hist; h != H; h = h->link) {
		p = h->name;
		while(p) {
			q = strchr(p, '/');
			if(q) {
				n = q-p;
				if(n == 0)
					n = 1;	/* leading "/" */
				q++;
			} else {
				n = strlen(p);
				q = 0;
			}
			if(n) {
				Bputc(b, ANAME);
				Bputc(b, D_FILE);
				Bputc(b, 1);
				Bputc(b, '<');
				Bwrite(b, p, n);
				Bputc(b, 0);
			}
			p = q;
		}
		pg.lineno = h->line;
		pg.dst.ival = h->offset;
		pg.dst.type = A_NONE;
		if(h->offset)
			pg.dst.type = A_CONST;

		vwrite(b, &pg, 0, 0);
	}
}

void
sfile(char *name)
{
	int f;
	Inst *i;
	Biobuf b;

	f = create(name, OWRITE|OTRUNC, 0666);
	if(f < 0) {
		diag(ZeroN, "cannot open %s: %r", name);
		return;
	}
	Binit(&b, f, OWRITE);

	for(i = proghead; i; i = i->next) {
		if(i->dst.type == A_BRANCH)
			i->dst.ival -= i->pc;

		Bprint(&b, "%i\n", i);
	}

	Bflush(&b);
	close(f);
}

void
objfile(char *name)
{
	Inst *i;
	Biobuf b;
	Inst end;
	int f, sfrom, sto;
	
	f = create(name, OWRITE|OTRUNC, 0666);
	if(f < 0) {
		diag(ZeroN, "cannot open %s: %r", name);
		return;
	}
	Binit(&b, f, OWRITE);
	Bseek(&b, 0L, 2);

	outhist(&b);

	memset(scache, 0, sizeof(scache));

	for(i = proghead; i; i = i->next) {
		sto = 0;
		sfrom = 0;
		do{
			switch(i->src1.type) {
			case A_CONST:
			case A_INDREG:
				if(i->src1.class)
					sfrom = vcache(&b, &i->src1);
			}
			switch(i->dst.type) {
			case A_CONST:
			case A_INDREG:
				if(i->dst.class)
					sto = vcache(&b, &i->dst);
			}
		}while(sfrom == sto && sfrom != 0);

		vwrite(&b, i, sfrom, sto);
	}

	end = zprog;
	end.op = AEND;
	vwrite(&b, &end, 0, 0);

	Bflush(&b);
	close(f);
}

int
vcache(Biobuf *b, Adres *a)
{
	Sym *s;
	Scache *c;

	s = a->sym;

	if(s->slot) {
		c = &scache[s->slot];
		if(c->s == s)
		if(c->class == a->class)
			return s->slot;
	}

	slot++;
	if(slot >= NSYM)
		slot = 1;

	c = &scache[slot];
	c->s = s;
	c->class = a->class;

	vname(b, a->class, s->name, slot);

	return slot;
}

void
vname(Biobuf *b, char class, char *name, int slot)
{
	char io[4];

	io[0] = ANAME;
	switch(class) {
	default:
		fatal("vcache %d", class);
	case Dfile:
		io[1] = D_FILE;
		break;
	case Internal:
		io[1] = D_STATIC;
		break;
	case External:
	case Global:
		io[1] = D_EXTERN;
		break;
	case Parameter:
		io[1] = D_PARAM;
		break;
	case Automatic:
		io[1] = D_AUTO;
		break;
	}
	io[2] = slot;

	Bwrite(b, io, 3);
	Bwrite(b, name, strlen(name)+1);
}

char*
vaddr(char *bp, Adres *a, int s)
{
	long l;
	Ieee e;

	bp[0] = D_NONE;
	bp[1] = NREG;
	bp[2] = 0;
	bp[3] = D_NONE;

	switch(a->type) {
	default:
		fatal("vaddr %a", a);

	case A_NONE:
		bp += 4;
		break;

	case A_CONST:
		bp[0] = D_CONST;
		if(a->reg != Nreg)
			bp[1] = a->reg;
		bp[2] = s;
		l = a->ival;
		switch(a->class) {
		default:
			bp[3] = D_NONE;
			break;
		case Internal:
			bp[3] = D_STATIC;
			break;
		case External:
		case Global:
			bp[3] = D_EXTERN;
			break;
		case Parameter:
			bp[3] = D_PARAM;
			break;
		case Automatic:
			bp[3] = D_AUTO;
			break;
		}
		bp[4] = l;
		bp[5] = l>>8;
		bp[6] = l>>16;
		bp[7] = l>>24;
		bp += 8;
		break;

	case A_FCONST:
		bp[0] = D_FCONST;
		ieeedtod(&e, a->fval);
		l = e.l;
		bp[4] = l;
		bp[5] = l>>8;
		bp[6] = l>>16;
		bp[7] = l>>24;
		l = e.h;
		bp[8] = l;
		bp[9] = l>>8;
		bp[10] = l>>16;
		bp[11] = l>>24;
		bp += 12;
		break;

	case A_REG:
		bp[0] = D_REG;
		bp[1] = a->reg;
		bp += 4;
		break;

	case A_FREG:
		bp[0] = D_FREG;
		bp[1] = a->reg;
		bp += 4;
		break;

	case A_INDREG:
		bp[0] = D_OREG;
		bp[2] = s;
		l = a->ival;
		switch(a->class) {
		default:
			bp[1] = a->reg;
			bp[3] = D_NONE;
			break;
		case Internal:
			bp[1] = NREG;
			bp[3] = D_STATIC;
			break;
		case External:
		case Global:
			bp[1] = NREG;
			bp[3] = D_EXTERN;
			break;
		case Parameter:
			bp[1] = NREG;
			bp[3] = D_PARAM;
			break;
		case Automatic:
			bp[1] = NREG;
			bp[3] = D_AUTO;
			break;
		}
		bp[4] = l;
		bp[5] = l>>8;
		bp[6] = l>>16;
		bp[7] = l>>24;
		bp += 8;
		break;

	case A_BRANCH:
		bp[0] = D_BRANCH;
		l = a->ival;
		bp[4] = l;
		bp[5] = l>>8;
		bp[6] = l>>16;
		bp[7] = l>>24;
		bp += 8;
		break;

	case A_STRING:
		bp[0] = D_SCONST;
		memmove(bp+4, a->str, NSNAME);
		bp += 4+NSNAME;
		break;
	}
	return bp;
}

/* Quoted string printer */
int
qconv(Fmt *f)
{
	char buf[64], *b;
	char *p;
	int i;

	p = va_arg(f->args, char *);
	b = buf;
	for(i = 0; i < 8; i++) {
		if(rcmap[*p]) {
			b[0] = '\\';
			b[1] = rcmap[*p++];
			b += 2;
		}
		else
			*b++ = *p++;
	}
	*b = '\0';
	fmtstrcpy(f, buf);
	return 0;
}

/* Instruction printer */
int
iconv(Fmt *f)
{
	Inst *i;
	char c, buf[128];

	i = va_arg(f->args, Inst *);

	if(i->op == ADATA || i->op == AINIT || i->op == ADYNT)
		sprint(buf, "\t%s\t%a/%d,%a", itab[i->op], &i->src1, i->reg, &i->dst);
	else
	if(i->reg == Nreg) {
		if(i->dst.type == A_NONE)
			sprint(buf, "\t%s\t%a", itab[i->op], &i->src1);
		else
			sprint(buf, "\t%s\t%a,%a", itab[i->op], &i->src1, &i->dst);
	}
	else {
		c = 'R';
		if(i->src1.type == A_FREG)
			c = 'F';
		sprint(buf, "\t%s\t%a,%c%d,%a", itab[i->op], 
					&i->src1, c, i->reg, &i->dst);
	}
	fmtstrcpy(f, buf);
	return 0;
}

int
mconv(Fmt *f)
{
	Adres *adr;
	char buf[128];

	adr = va_arg(f->args, Adres *);

	switch(adr->class) {
	default:
		sprint(buf, "Addr(%d/%ld)", adr->class, adr->ival);
		break;

	case External:
	case Global:
		sprint(buf, "%s+%ld(SB)", adr->sym->name, adr->ival);
		break;

	case Internal:
		sprint(buf, "%s<>+%ld(SB)", adr->sym->name, adr->ival);
		break;

	case Parameter:
		sprint(buf, "%s+%ld(FP)", adr->sym->name, adr->ival);
		break;

	case Automatic:
		sprint(buf, "%s%ld(SP)", adr->sym->name, adr->ival);
		break;
	}
	fmtstrcpy(f, buf);
	return 0;
}

/* Address syllable printer */
int
aconv(Fmt *f)
{
	char buf[128];
	Adres *adr;

	adr = va_arg(f->args, Adres *);
	switch(adr->type) {
	default:
		sprint(buf, "Addr(%d)", adr->type);
		break;

	case A_NONE:
		buf[0] = 0;
		break;

	case A_BRANCH:
		sprint(buf, "%ld(PC)", adr->ival);
		break;

	case A_STRING:
		sprint(buf, "$\"%q\"", adr->str);
		break;

	case A_CONST:
		if(adr->class)
			sprint(buf, "$%m", adr);
		else
		if(adr->reg != Nreg)
			sprint(buf, "$%ld(R%d)", adr->ival, adr->reg);
		else
			sprint(buf, "$%ld", adr->ival);
		break;

	case A_FCONST:
		sprint(buf, "$%#g", adr->fval);
		break;

	case A_REG:
		sprint(buf, "R%d", adr->reg);
		break;

	case A_FREG:
		sprint(buf, "F%d", adr->reg);
		break;

	case A_INDREG:
		if(adr->class)
			sprint(buf, "%m", adr);
		else
		if(adr->ival == 0)
			sprint(buf, "(R%d)", adr->reg);
		else
			sprint(buf, "%ld(R%d)", adr->ival, adr->reg);
		break;
	}
	fmtstrcpy(f, buf);
	return 0;
}

typedef struct runtime Runtime;
struct runtime
{
	char	*name;
	Node	**p;
}runtime[] = {
	"ALEF_proc", 		&procnode,
	"ALEF_task", 		&tasknode,
	"ALEF_send", 		&sendnode,
	"ALEF_exit", 		&exitnode,
	"ALEF_selrecv",		&selrecv,
	"ALEF_selsend",		&selsend,
	"ALEF_doselect",	&doselect,
	"ALEF_varselect",	&varselect,
	"ALEF_pfork",		&pforknode,
	"ALEF_pexit",		&pexitnode,
	"ALEF_pdone",		&pdonenode,
	"ALEF_csnd",		&csndnode,
	"ALEF_crcv",		&crcvnode,
	"ALEF_chana",		&challocnode,
	"ALEF_chanu",		&chunallocnode,
	"malloc",    		&allocnode,
	"free",    		&unallocnode,
	"ALEF_gin",		&ginode,
	"ALEF_gou",		&gonode,
	"memmove",		&movenode,
	"ALEFcheck",		&checknode,
	0,			0,
};

void
outinit(void)
{
	Node *n;
	Type *t;
	Runtime *rp;

	fmtinstall('i', iconv);		/* Instructions */
	fmtinstall('a', aconv);		/* Addresses */
	fmtinstall('q', qconv);		/* Data */
	fmtinstall('m', mconv);		/* Memory addresses */
	fmtinstall('B', Bconv);		/* Memory addresses */

	for(rp = runtime; rp->name; rp++) {
		n = an(ONAME, nil, nil);
		n->sym = enter(rp->name, Tid);

		t = builtype[TVOID];
		if(rp->p == &allocnode)
			t = at(TIND, t);
		t = at(TFUNC, t);
		t->proto = an(ONAME, an(OVARARG, nil, nil), nil);
		t->proto->sym = n->sym;
		if(rp->p == &checknode)
			t = at(TIND, t);

		n->t = t;
		n->ti = ati(t, Global);
		sucalc(n);
		*(rp->p) = n;
	}

	zprog.next = 0;
	zprog.src1.type = A_NONE;
	zprog.dst.type = A_NONE;
	zprog.op = AGOK;
	zprog.reg = Nreg;
}

void
ieeedtod(Ieee *ieee, double native)
{
	double fr, ho, f;
	int exp;

	if(native < 0) {
		ieeedtod(ieee, -native);
		ieee->h |= 0x80000000L;
		return;
	}
	if(native == 0) {
		ieee->l = 0;
		ieee->h = 0;
		return;
	}
	fr = frexp(native, &exp);
	f = 2097152L;		/* shouldnt use fp constants here */
	fr = modf(fr*f, &ho);
	ieee->h = ho;
	ieee->h &= 0xfffffL;
	ieee->h |= (exp+1022L) << 20;
	f = 65536L;
	fr = modf(fr*f, &ho);
	ieee->l = ho;
	ieee->l <<= 16;
	ieee->l |= (long)(fr*f);
}

void
init(Node *tab, Node *v)
{
	Inst *i;

	i = ai();
	i->op = AINIT;
	i->reg = builtype[TIND]->size;
	mkaddr(tab, &i->src1, 0);
	mkaddr(v, &i->dst, 0);
	ilink(i);
}

void
dynt(Node *tab, Node *ind)
{
	Inst *i;

	i = ai();
	i->op = ADYNT;
	if(tab)
		mkaddr(tab, &i->src1, 0);
	mkaddr(ind, &i->dst, 0);
	ilink(i);
}

void
dupok(void)
{
	if(ipc->reg == Nreg)
		ipc->reg = DUPOK;
	else
		ipc->reg |= DUPOK;
}
