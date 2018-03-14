
typedef union 
{
	Node	*node;
	Sym	*sym;
	Type	*type;
	ulong	ival;
	double	fval;
	int	clas;
	String	*string;
	Tysym	ltype;
}	YYSTYPE;
extern	YYSTYPE	yylval;
#define	Tvasgn	57346
#define	Taddeq	57347
#define	Tsubeq	57348
#define	Tmuleq	57349
#define	Tdiveq	57350
#define	Tmodeq	57351
#define	Trsheq	57352
#define	Tlsheq	57353
#define	Tandeq	57354
#define	Toreq	57355
#define	Txoreq	57356
#define	Toror	57357
#define	Tandand	57358
#define	Teq	57359
#define	Tneq	57360
#define	Tleq	57361
#define	Tgeq	57362
#define	Titer	57363
#define	Tlsh	57364
#define	Trsh	57365
#define	Tdec	57366
#define	Tinc	57367
#define	Tcomm	57368
#define	Tindir	57369
#define	Ttypename	57370
#define	Tid	57371
#define	Tconst	57372
#define	Tsname	57373
#define	Tfconst	57374
#define	Tstring	57375
#define	Tint	57376
#define	Tuint	57377
#define	Tsint	57378
#define	Tsuint	57379
#define	Tuchar	57380
#define	Tchar	57381
#define	Tfloat	57382
#define	Tchannel	57383
#define	Tvoid	57384
#define	Tcase	57385
#define	Tcheck	57386
#define	Tbreak	57387
#define	Taggregate	57388
#define	Tunion	57389
#define	Tstorage	57390
#define	Treturn	57391
#define	Tswitch	57392
#define	Twhile	57393
#define	Tfor	57394
#define	Tpar	57395
#define	Telse	57396
#define	Tdo	57397
#define	Tadt	57398
#define	Ttask	57399
#define	Tprocess	57400
#define	Tselect	57401
#define	Tif	57402
#define	Traise	57403
#define	Tset	57404
#define	Trescue	57405
#define	Tintern	57406
#define	Textern	57407
#define	Tdefault	57408
#define	Tcontinue	57409
#define	Tnewtype	57410
#define	Tgoto	57411
#define	Tnil	57412
#define	Talloc	57413
#define	Tunalloc	57414
#define	Tguard	57415
#define	Tprivate	57416
#define	Ttuple	57417
#define	Tbecome	57418
#define	Tzerox	57419
#define	Ttypeof	57420
