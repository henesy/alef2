/*
 * Alef portable globals and prototypes
 */

#define CPP	"/bin/cpp"
/* #define nil	((void*)0) */

#pragma	varargck type "a" Adres *
#pragma	varargck type "m" Adres *
#pragma	varargck type "B" Bits
#pragma	varargck type "i" Inst *
#pragma	varargck type "N" Node *
#pragma	varargck type "P" Node *
#pragma	varargck type "T" Type *
#pragma	varargck type "t" Type *
#pragma	varargck type "V" Type *
#pragma varargck type "A" int
#pragma varargck type "L" long
#pragma varargck type "R" int
#pragma varargck type "q" char*
#pragma varargck type "|" int

Extern int	Owarn;
Extern int	Scope;
Extern int	acid;
Extern Type*	adtbfun;
Extern int	agundecl;
Extern int	asm;
Extern Inst*	becomentry;
Extern Biobuf*	bin;
Extern Tinfo*	block[Sdepth];
Extern Node*	buildadt;
Extern Type*	builtype[Ntype];
Extern int	chks;
Extern Node*	curfunc;
Extern Hist*	ehist;
Extern char*	file;
Extern char	flag[256];
Extern ulong	frame;
Extern Inst*	funentry;
Extern Hist*	hist;
Extern int	iline;
Extern int	inbase;
Extern int	incrit;
Extern int	inpar;
Extern char	inverted[];
Extern Inst*	ipc;
Extern char*	itab[];
Extern long	line;
Extern ulong	maxframe;
Extern int	nerr;
Extern int	newflag;
Extern ulong	nopconv[];
Extern char	not[];
Extern ulong	params;
Extern Type*	parent;
Extern int	privreg;
Extern Inst*	proghead;
Extern Node*	rfun[Ntype];
Extern Node*	rnode;
Extern char*	sclass[];
Extern int	setbase;
Extern Node*	sfun[Ntype];
Extern Stats	stats;
Extern ulong	stmp;
Extern String*	strdat;
Extern char	symbol[1024];
Extern int	txtprof;
Extern ulong	typeasgn[];
Extern int	veccnt;
Extern char	wd[Strsize];
Extern Biobuf	ao;
Extern Altrec*	altrec;
Extern Sym*	polyptr;
Extern Sym*	polysig;
Extern Type*	polyshape;
Extern Node*	swstack;
Extern Dynt*	dynhash[NDYHASH];

/* Synthesized for runtime */
Extern Node*	procnode;
Extern Node*	allocnode;
Extern Node*	challocnode;
Extern Node*	chunallocnode;
Extern Node*	crcvnode;
Extern Node*	csndnode;
Extern Node*	doselect;
Extern Node*	varselect;
Extern Node*	exitnode;
Extern Node*	ginode;
Extern Node*	gonode;
Extern Node*	pdonenode;
Extern Node*	pexitnode;
Extern Node*	pforknode;
Extern Node*	selrecv;
Extern Node*	selsend;
Extern Node*	sendnode;
Extern Node*	tasknode;
Extern Node*	unallocnode;
Extern Node*	movenode;
Extern Node*	alefsig;
Extern Node*	checknode;

#define opt(s)		flag[s]

extern char*	treeop[];
extern char*	strtype[];


int	Lconv(Fmt*);
int	VBconv(Fmt*);
Type*	abt(int);
void	addarg(Node*, Node*);
void	adtchk(Node*, Node*);
Node*	adtfunc(Tysym, Node*);
Type*	aguntype(Node*);
ulong	align(ulong, Type*);
char*	amap(char*);
Node*	an(int, Node*, Node*);
void	applytagtype(Type*, Node*);
void	applytype(Type*, Node*);
Node*	argproto(Type*, Node*, Node*);
Type*	at(int, Type*);
Tinfo*	ati(Type*, char);
Tinfo*	atinfo(Node*, Type*);
Type*	boundtype(Type*, Type*);
Type*	polybuild(Type*, Type*);
void	bstmnt(Node*);
void	buildtype(Node*);
void	chani(Type*, Node*);
int	chkchan(Node*, char*);
int	chklval(Node*);
void	compile(char*, char*);
Node*	con(int);
int	convisnop(Type*, Type*);
void	coverset(Node *n);
void	derivetype(Node*);
void	diadicpoly(Node*, char*);
void	diag(Node*, char*, ...);
void	doinit(Node*, Type*, Node*, int);
Node*	dupn(Node*);
void	dynt(Node*, Node*);
Sym*	enter(char*, int);
void	enterblock(void);
void	export(Type*);
void	fatal(char*, ...);
void	framesize(Node*);
void	fundecl(Type*, Node*, Node*);
void	fungen(Node*, Node*);
void	funproto(Node*, Node*);
void	gendata(Node*);
void	init(Node*, Node*);
Node*	invert(Node*);
int	ispow2(int);
int	issend(Node*);
void	iter(Node*, int);
void	kinit(void);
void	leaveblock(void);
void	linehist(char*, int);
void	listcount(Node*, Node**);
Sym*	lookup(char*);
Sym*	ltytosym(Type*);
Type*	mkcast(Type*, Node*);
void	mkdynt(Node*, Type*);
Node*	mkprtsym(char*, Node*);
int	mpatof(char*, double*);
void	newalt(void);
void	newtype(Type*, Node*, Node*);
int	nodeconv(Fmt*);
int	notunion(Type*);
int	numsym(char);
void	objfile(char*);
void	outinit(void);
void	packdepend(void);
void	packmk(ulong, Type*, int);
Node*	paramdep(Node*);
void	polyasgn(void);
int	polybox(Node*);
void	polysize(Node*);
void	polyswitch(Node*);
void	polytyp(Node*);
void	polyxerox(Node*);
void	popjmp(Jmps**);
void	prnagun(Type*, int);
int	promote(Node*, Node*);
int	protocmp(Node*, Node*);
int	protoconv(Fmt*);
void	ptree(Node*, int);
void	pushdcl(Node*, int);
void	pushjmp(Jmps**);
void	pushlab(Jmps**, Inst*);
void	reginit(void);
int	replio(void);
void	rewrite(Node*);
Node*	rtnode(char*, Type*, Type*);
void	selcode(Node*);
void	settype(Type*);
void	sfile(char*);
Node*	simpledecl(Type*, Node*);
void	stmnt(Node*);
Node*	strnode(String*, int);
void	strop(void);
int	tasgninit(Type*, Node*, int);
int	tconv(Fmt*);
Type*	tmcpy(Type*);
void	treeflat(Node*, Node**);
int	tupleasgn(Node*);
void	tupleof(Node*);
int	tyaddr(Node*);
int	tyalloc(Node*);
void	tyalt(Node*);
int	tyassert(Node*);
int	tycall(Node*);
int	tydot(Node*);
int	typechk(Node*, int);
int	typechk(Node*, int);
int	typecmp(Type*, Type*, int);
int	typeconv(Fmt*);
void	typeinit(void);
void	typerec(Node*, Type*);
ulong	typesig(Type*);
void	typesut(Type*);
int	typeval(ulong*, Type*, Type*);
void	typroc(Node*, Node*);
int	tyrecv(Node*);
int	tysend(Node*);
int	tyunalloc(Node*);
int	tyvasgn(Node*);
void	umap(char*);
void	unsettype(void);
Type*	unshape(Type*);
Node*	vargptr(void);
Type*	walktype(Type*, Node*, int*);
void	warn(Node*, char*, ...);
void	yyerror(char*, ...);
int	yylex(void);
int	yylex(void);
int	yyparse(void);
void	dupok(void);
int	vcmp(Type*, Type*);
String*	mkstring(char*, ...);
int	isnil(Node*);

