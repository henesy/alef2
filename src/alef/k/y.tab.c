
#line	2	"/usr/seh/repos/alef2/src/alef/port/parl.y"
#include <u.h>
#include <libc.h>
#include <bio.h>
#include "parl.h"
#define Extern extern
#include "globl.h"

#line	10	"/usr/seh/repos/alef2/src/alef/port/parl.y"
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
} YYSTYPE;
extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
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
#define YYEOFCODE 1
#define YYERRCODE 2

#line	1141	"/usr/seh/repos/alef2/src/alef/port/parl.y"

short	yyexca[] =
{-1, 1,
	1, -1,
	-2, 0,
-1, 2,
	1, 1,
	-2, 246,
-1, 378,
	4, 142,
	98, 86,
	-2, 0,
-1, 381,
	4, 142,
	98, 90,
	-2, 0,
-1, 394,
	4, 142,
	-2, 0,
-1, 404,
	4, 142,
	-2, 0,
-1, 415,
	4, 142,
	-2, 0,
-1, 476,
	4, 142,
	-2, 0,
-1, 478,
	4, 142,
	-2, 0,
-1, 491,
	4, 142,
	60, 106,
	83, 106,
	98, 106,
	-2, 0,
-1, 494,
	4, 142,
	-2, 0,
-1, 500,
	4, 142,
	60, 105,
	83, 105,
	98, 105,
	-2, 0,
-1, 505,
	4, 142,
	-2, 0,
-1, 507,
	4, 142,
	60, 100,
	83, 100,
	98, 100,
	-2, 0,
-1, 510,
	4, 142,
	60, 99,
	83, 99,
	98, 99,
	-2, 0,
};
#define	YYNPROD	250
#define	YYPRIVATE 57344
#define	YYLAST	1649
short	yyact[] =
{
  91, 378, 385,  68, 457, 430, 441, 390,  15,  69,
  92,   4, 295,  80,  43, 236, 193,  31,  27, 360,
 153, 136, 230, 130,  47,  48,  49, 231, 389,  93,
   3, 192, 509, 504, 321,   8,   9, 483, 415, 150,
  86, 320,  79, 472, 415,  10, 303,  16, 497, 472,
 472,  11,  81,  13,  12, 235, 227,   6, 445, 317,
 150, 414,  84,  14, 332,  84, 473, 481,  63, 115,
 344, 498, 473, 473, 480, 131, 131,  67, 233,  56,
 505, 499, 129,  87, 321, 494, 495, 474, 470, 151,
 139, 320, 142, 143, 432, 194, 132, 149, 190, 134,
 133, 431, 116, 116, 336, 333, 330, 203, 204, 205,
 206, 207, 208, 209, 210, 211, 288, 214, 215,  87,
 141, 141, 141, 229, 141, 224, 125, 147, 469, 462,
 108, 157, 365,  84, 216, 212, 442, 223, 118,  44,
  44,  44,  44, 141, 124, 218, 426,  60, 141, 234,
 425,  84, 316, 255, 252, 338, 305, 232, 120, 256,
 257, 258, 259, 260, 261, 262, 263, 264, 265, 266,
 267, 268, 269, 270, 271, 272, 273, 274, 275,  87,
 277, 278, 279, 280, 281, 282, 283, 284, 285, 286,
 287, 249, 248, 121, 241, 289, 194, 296, 297,  46,
 221,  64, 141,  60, 225,  60,  20, 137, 351,  23,
 290, 383, 382, 377, 194, 375, 220, 301, 128, 298,
 300, 141,  60,  61, 477, 245, 242, 293, 155,  41,
  18, 251, 131, 120, 368,  34,  35,  36,  37, 367,
  38,  39,  42,  40,  60, 141, 155, 319, 219, 154,
 156, 325, 308,  59,  57,  58, 314, 315, 312, 437,
 312, 119,   8,   9, 307, 435, 349,  45,  46, 434,
 238, 127,  10, 364, 327, 362,  85, 328,  11, 355,
  13,  12,  78, 323,   6,  23, 145, 350,  13,  12,
  14, 194, 340, 306,  21,  22,  19, 313,  14, 329,
 304, 291, 299, 156, 138,  46,  54, 331,  33,  41,
 337, 341, 217,  60,  60,  34,  35,  36,  37, 346,
  38,  39,  42,  40, 220, 120, 342, 339, 343,  23,
 226, 123,  72, 345,  23, 354, 140,  66,  21,  55,
  19, 353, 312, 247,  52,  19, 116, 310, 246,  84,
  84,  76,  60, 356, 357,  87,  32,  71, 253, 359,
  84, 244, 202,  58, 363,  84, 137, 352, 361, 366,
 371, 371,  84, 144,  84, 381, 374, 254, 376, 243,
 379, 117, 200, 201, 380, 199, 198, 197, 196, 412,
  62, 178, 418, 296, 296,  23,  60, 422, 296, 296,
 429, 455, 334, 454, 334, 419, 420, 436, 439, 440,
 427, 428, 318,  41, 438, 450, 334, 443, 446,  34,
  35,  36,  37,  23,  38,  39,  42,  40, 449, 334,
 433, 451, 146, 276,  19, 334, 461, 458, 463, 444,
  51, 290,  44,  54,  44, 464, 322,  60, 238, 324,
 411,  51,   8,   9,  50,  51,  59, 228,  58, 126,
  70, 492,  10, 460, 158, 159, 160, 475,  11, 178,
  13,  12, 468, 482,   6,  44, 467, 466, 486, 485,
  14, 487, 388, 459, 465, 491, 489, 311, 453, 452,
 417, 416, 500, 240, 222,  65,  24, 502, 107, 506,
 413, 503, 373,  97, 484, 348, 507, 384, 508, 370,
 347, 510,  77,  98,  99,  96, 135,  74, 100, 102,
 106, 501, 152,  73,  94, 302, 387, 109, 111, 112,
 113, 239,   7, 189, 164, 163, 161, 162, 158, 159,
 160, 391, 410, 178,  25, 105, 401, 407, 403, 402,
 406, 447, 404,  75, 398, 397, 400, 405, 395, 479,
 394, 496, 488, 388, 409, 148, 396, 110, 392, 393,
 321, 292, 122, 399, 101, 408, 369, 320, 386, 107,
  17, 103, 104, 114,  97, 161, 162, 158, 159, 160,
 237, 424, 178, 421,  98,  99,  96, 471, 309, 100,
 102, 106,   5, 152, 294,  94,  95, 423, 109, 111,
 112, 113,   2,   1,  53,   0,   0,   0,   0,   0,
   0,   0, 391, 410,   0,   0, 105, 401, 407, 403,
 402, 406,   0, 404,   0, 398, 397, 400, 405, 395,
   0, 394,   0,   0,   0, 409,   0, 396, 110, 392,
 393, 321, 107,   0, 399, 101, 408,  97, 320,   0,
   0,   0, 103, 104, 114,   0,   0,  98,  99,  96,
   0,   0, 100, 102, 106,   0, 152,   0,  94,  41,
  46, 109, 111, 112, 113,  34,  35,  36,  37,   0,
  38,  39,  42,  40,   0,  41,   0,   0,  26, 105,
   0,  34,  35,  36,  37,   0,  38,  39,  42,  40,
   0,   0,   0,   0,   0,  28,  30,   0,   0,   0,
   0, 110, 191,   0, 107,  29,  70,   0, 101,  97,
   0, 195,   0,  13,  12, 103, 104, 114,   0,  98,
  99,  96, 372,  14, 100, 102, 106,   0, 152,   0,
  94,  41,  46, 109, 111, 112, 113,  34,  35,  36,
  37,   0,  38,  39,  42,  40,   8,   9,   0,   0,
   0, 105,   0,   0,   0,   0,  10,   0,   0,   0,
   0,   0,  11,   0,  13,  12,   0,   0,   6,   0,
   0,   0,   0, 110,  14,   0,   0,   0,  70,   0,
 101,   0,   0, 195,   0,   0,   0, 103, 104, 114,
 176, 177, 179, 180, 181, 182, 183, 184, 185, 186,
 187, 188,   0, 175, 174, 173, 172, 171, 169, 170,
 165, 166, 167, 168, 189, 164, 163, 161, 162, 158,
 159, 160,   0,   0, 178, 176, 177, 179, 180, 181,
 182, 183, 184, 185, 186, 187, 188,   0, 175, 174,
 173, 172, 171, 169, 170, 165, 166, 167, 168, 189,
 164, 163, 161, 162, 158, 159, 160,  41,   0, 178,
   0,   0,   0,  34,  35,  36,  37,   0,  38,  39,
  42,  40, 176, 177, 179, 180, 181, 182, 183, 184,
 185, 186, 187, 188, 490, 175, 174, 173, 172, 171,
 169, 170, 165, 166, 167, 168, 189, 164, 163, 161,
 162, 158, 159, 160,   0,   0, 178,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 358, 176,
 177, 179, 180, 181, 182, 183, 184, 185, 186, 187,
 188,   0, 175, 174, 173, 172, 171, 169, 170, 165,
 166, 167, 168, 189, 164, 163, 161, 162, 158, 159,
 160,   0,   0, 178,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0, 335, 176, 177, 179, 180,
 181, 182, 183, 184, 185, 186, 187, 188,   0, 175,
 174, 173, 172, 171, 169, 170, 165, 166, 167, 168,
 189, 164, 163, 161, 162, 158, 159, 160,   0,   0,
 178,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0, 250, 176, 177, 179, 180, 181, 182, 183,
 184, 185, 186, 187, 188,   0, 175, 174, 173, 172,
 171, 169, 170, 165, 166, 167, 168, 189, 164, 163,
 161, 162, 158, 159, 160,   0,   0, 178,   0,   0,
 432,   0,   0,   0,   0,   0,   0, 431, 176, 177,
 179, 180, 181, 182, 183, 184, 185, 186, 187, 188,
   0, 175, 174, 173, 172, 171, 169, 170, 165, 166,
 167, 168, 189, 164, 163, 161, 162, 158, 159, 160,
   0,   0, 178,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 493, 176, 177, 179, 180, 181, 182,
 183, 184, 185, 186, 187, 188,   0, 175, 174, 173,
 172, 171, 169, 170, 165, 166, 167, 168, 189, 164,
 163, 161, 162, 158, 159, 160, 107,   0, 178,   0,
   0,  97,   0,   0,   0,   0,   0,   0, 478,   0,
   0,  98,  99,  96,   0,   0, 100, 102, 106,   0,
  89,  88,  94,   0,  46, 109, 111, 112, 113, 107,
   0,   0,   0,   0,  97,   0,   0,   0,   0,   0,
   0,   0,   0, 105,  98,  99,  96,   0,   0, 100,
 102, 106,   0, 152, 476,  94,   0,  46, 109, 111,
 112, 113,   0,   0,   0, 110,   0,  82,   0,   0,
   0,   0, 101,   0,  83,  90, 105,  41,   0, 103,
 104, 114,   0,  34,  35,  36,  37,   0,  38,  39,
  42,  40,   0,   0,   0,   0,   0,   0, 110,   0,
   0, 107,   0,   0,   0, 101,  97,   0, 195,   0,
   0,   0, 103, 104, 114,   0,  98,  99,  96,   0,
   0, 100, 102, 106,  85, 152,   0,  94,   0,  46,
 109, 111, 112, 113, 107,   0,   0,   0,   0,  97,
   0,   0,   0,   0,   0,   0,   0,   0, 105,  98,
  99,  96,   0,   0, 100, 102, 106,   0, 152,   0,
  94,   0,  46, 109, 111, 112, 113,   0,   0,   0,
 110,   0,   0,   0,   0,   0,   0, 101,   0, 144,
 326, 105,  41,   0, 103, 104, 114,   0,  34,  35,
  36,  37,   0,  38,  39,  42,  40,   0,   0,   0,
   0,   0,   0, 110,   0,   0, 107,   0,   0,   0,
 101,  97,   0,   0,   0,   0,   0, 103, 104, 114,
   0,  98,  99,  96,   0,   0, 100, 102, 106,   0,
 152,   0, 213,   0,  46, 109, 111, 112, 113,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 105, 174, 173, 172, 171, 169, 170,
 165, 166, 167, 168, 189, 164, 163, 161, 162, 158,
 159, 160,   0,   0, 178, 110,   0,   0,   0,   0,
   0,   0, 101,   0,   0,   0,   0,   0,   0, 103,
 104, 114, 456,   0, 176, 177, 179, 180, 181, 182,
 183, 184, 185, 186, 187, 188,   0, 175, 174, 173,
 172, 171, 169, 170, 165, 166, 167, 168, 189, 164,
 163, 161, 162, 158, 159, 160,   0,   0, 178, 448,
 176, 177, 179, 180, 181, 182, 183, 184, 185, 186,
 187, 188,   0, 175, 174, 173, 172, 171, 169, 170,
 165, 166, 167, 168, 189, 164, 163, 161, 162, 158,
 159, 160,   0,   0, 178, 176, 177, 179, 180, 181,
 182, 183, 184, 185, 186, 187, 188,   0, 175, 174,
 173, 172, 171, 169, 170, 165, 166, 167, 168, 189,
 164, 163, 161, 162, 158, 159, 160,   0,   0, 178,
 173, 172, 171, 169, 170, 165, 166, 167, 168, 189,
 164, 163, 161, 162, 158, 159, 160,   0,   0, 178,
 172, 171, 169, 170, 165, 166, 167, 168, 189, 164,
 163, 161, 162, 158, 159, 160,   0,   0, 178, 171,
 169, 170, 165, 166, 167, 168, 189, 164, 163, 161,
 162, 158, 159, 160,   0,   0, 178, 169, 170, 165,
 166, 167, 168, 189, 164, 163, 161, 162, 158, 159,
 160,   0,   0, 178, 165, 166, 167, 168, 189, 164,
 163, 161, 162, 158, 159, 160,   0,   0, 178
};
short	yypact[] =
{
-1000,-1000, 703,-1000, 250, 492, 652, 264, 222, 222,
 222, 222,-1000,-1000,-1000, 450, 300, 295,-1000,-1000,
 209, 360, 348,-1000,-1000, 294, 491,-1000,-1000,-1000,
-1000,-1000, 293, 368,-1000,-1000,-1000,-1000,-1000,-1000,
-1000, 314, 288,-1000,-1000,-1000,-1000,-1000, 308,-1000,
-1000, 294,1192,-1000,1138,1192, 303, 339,-1000, 360,
-1000, 279, 153, 287, 412,-1000, 368,  30, 454, 174,
 207, 368, 368,   3,   2,-1000, 259,  -7,-1000, 437,
 240,-1000, 832,1297, 388, 207,-1000,-1000,1276, 204,
1138,1519,-1000,-1000, 634, 344,1276,1276,1276,1276,
1276,1276,1276,1276,1276,1348,1276,1276,-1000,-1000,
-1000,-1000,-1000,-1000,  84, 216,1276, 153, 303, 278,
-1000,-1000, 490,1192,  29,-1000, 368, 361, 360,-1000,
 -43, 452,  27, 703, 703, -19,  50,-1000,-1000, 153,
 489, 184,-1000,-1000, 337, 317, 360,-1000,-1000, 299,
1138, 933, 186,1276, 316, 335,-1000,  55,1276,1276,
1276,1276,1276,1276,1276,1276,1276,1276,1276,1276,
1276,1276,1276,1276,1276,1276,1276,1276, 427,1276,
1276,1276,1276,1276,1276,1276,1276,1276,1276,1276,
  20, 368, 205,-1000,1519,1171,1276,1276, 257, 257,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000, 706,-1000,-1000,-1000,-1000, -53,-1000,
-1000,  60,-1000, 197,-1000,-1000, 168,-1000, 368, 304,
 389,-1000, 199, 703,-1000, 259,  54,-1000, 406,  -6,
-1000,-1000, 331,-1000, 360, 303, 187, 360,-1000,-1000,
1243, 316,1519, 257,-1000,-1000, 351, 351, 351, 429,
 429, 552, 552, 503, 503, 503, 503,1608,1608,1593,
1576,1558,1539,1394,1519,1519,1276,1519,1519,1519,
1519,1519,1519,1519,1519,1519,1519, 503,1276,  10,
1171,-1000, -34, 436,   9, 430,1519, 886,-1000,-1000,
-1000,   8,  -6,-1000,  59, 283,-1000, 248,-1000,-1000,
1276, 222,-1000, 222, -28,-1000,-1000, 153,1276,-1000,
-1000,-1000, 170, 243, 112,1519,1138,-1000,1519,-1000,
1276,-1000,-1000,-1000,1276,-1000,-1000,-1000, 235,1192,
1192, 839,-1000,-1000, 222,-1000,1519,-1000,-1000, 231,
1192, 229,  34,-1000,1519,1192, 143, 138,-1000,-1000,
 650, 650,1192, 119,1192,-1000, 117,-1000,-1000,-1000,
-1000, 294, 207,-1000, 116,-1000, 115,-1000, 480, 446,
 294, 480,-1000,-1000, -37,-1000,-1000, -62, 487, 486,
-1000,1276,1276,1276, 561, 104, 100,1276,1276,1276,
   4,1276, 225, 221, 480, 215,  -6,1276,1276,  89,
  89,-1000, 435, -40,-1000, 480,-1000,-1000,1484, 424,
 411,-1000,-1000, -56, 485,-1000, 484, 399, 397,1448,
-1000,-1000,-1000, 479,1276,1276,  61,1276,-1000, 980,
1519, 473,-1000, 472,-1000,-1000,-1000, 468,  78,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000, -10, -11,-1000,
 463,1118, 180,1072,-1000, -23,-1000,-1000,-1000,-1000,
-1000,-1000,1276, -63,-1000,1276, 480,1276, 480,-1000,
-1000,-1000, 804,-1000, 457,-1000,1027,  14, -12, -17,
-1000, 480,1276,-1000, 480,-1000,-1000, 368, -67,-1000,
 480, -16,-1000,-1000,-1000, 480, -68, 480,-1000,-1000,
 480
};
short	yypgo[] =
{
   0, 614, 230,  40, 613, 612,  27,   8,  42,  14,
  13,  79, 201,   7,   1,   2,  28, 606, 604,  12,
 602,  22, 130,  19,  52, 598,   4, 597, 593, 591,
 590, 580, 578,   5,   0,  10,  29, 576,  15, 572,
  31,  16, 571, 565, 562, 561, 559, 553,  21, 551,
   3,   9,  11,  77, 544,  23, 532,   6,  20, 531,
 525, 523, 517, 516, 512, 510, 509, 507, 505, 502,
 500, 499, 484
};
short	yyr1[] =
{
   0,   4,   5,   5,   6,  59,   6,  60,   6,   6,
   6,   6,   6,  39,  39,  54,  54,  54,  54,  31,
  31,  61,  20,  62,  20,  63,  20,  64,  20,   9,
   9,   9,  47,  47,  48,  48,  48,  38,  38,  30,
  30,  30,  22,  21,  21,   7,   7,   7,   2,   1,
   1,   3,   3,   3,   3,   3,   3,   8,   8,   8,
   8,  11,  11,  12,  12,  10,  10,  10,  10,  10,
  24,  24,  24,  24,  24,  24,  24,  43,  43,  43,
  23,  23,  37,  37,  65,  66,  67,  13,  68,  69,
  70,  13,  14,  14,  46,  46,  44,  44,  71,  45,
  45,  33,  33,  26,  26,  27,  27,  28,  28,  29,
  29,  15,  15,  49,  49,  32,  32,  32,  32,  32,
  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
  32,  32,  32,  32,  32,  32,  72,  32,  32,  32,
  57,  57,  16,  16,  34,  34,  34,  34,  34,  34,
  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
  34,  34,  34,  34,  34,  34,  34,  35,  35,  35,
  50,  50,  50,  50,  36,  36,  36,  36,  36,  36,
  36,  36,  36,  36,  36,  36,  36,  42,  42,  41,
  41,  40,  40,  17,  17,  17,  17,  17,  17,  17,
  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
  17,  58,  58,  18,  18,  19,  19,  53,  53,  52,
  52,  52,  55,  55,  51,  51,  51,  51,  51,  51,
  51,  51,  51,  51,  25,  25,  56,  56,  56,  56
};
short	yyr2[] =
{
   0,   1,   0,   2,   3,   0,   7,   0,   7,   6,
   2,   5,   3,   0,   3,   1,   1,   1,   1,   3,
   4,   0,   7,   0,   7,   0,   8,   0,   6,   0,
   1,   1,   0,   3,   1,   1,   3,   1,   3,   0,
   1,   3,   1,   1,   2,   0,   1,   3,   2,   0,
   2,   1,   4,   3,   3,   6,   3,   2,   3,   8,
   9,   0,   4,   1,   2,   0,   1,   2,   2,   3,
   1,   3,   7,   8,   2,   2,   3,   1,   7,   2,
   0,   2,   3,   4,   0,   0,   0,   7,   0,   0,
   0,   7,   0,   2,   3,   3,   0,   2,   0,   5,
   3,   3,   3,   0,   2,   4,   3,   1,   2,   0,
   1,   1,   3,   0,   2,   2,   2,   1,   4,   3,
   3,   2,   3,   3,   3,   3,   3,   2,   3,   9,
   5,   6,   5,   7,   2,   3,   0,   4,   3,   3,
   0,   1,   0,   1,   1,   3,   3,   3,   3,   3,
   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
   3,   3,   3,   3,   3,   4,   3,   3,   3,   3,
   3,   3,   3,   3,   3,   3,   3,   1,   4,   5,
   1,   2,   7,   2,   1,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   0,   1,   1,
   3,   1,   3,   3,   4,   4,   4,   3,   4,   3,
   2,   2,   2,   1,   3,   1,   1,   1,   1,   1,
   2,   1,   1,   0,   1,   1,   3,   1,   3,   2,
   5,   4,   1,   3,   1,   1,   1,   1,   1,   1,
   1,   1,   4,   5,   0,   3,   0,   1,   1,   1
};
short	yychk[] =
{
-1000,  -4,  -5,  -6, -52, -20,  85, -56,  63,  64,
  73,  79,  82,  81,  91,  -7,  -8, -31,  -2,  46,
 -12,  44,  45,  35,   4, -54,  46, -52,  63,  73,
  64, -51,  92,  44,  51,  52,  53,  54,  56,  57,
  59,  45,  58,  -9, -22,  45,  46,  -9,  -9,  -9,
   4,   5,  44,  -1,   6,  44, -11,  45,  46,  44,
  35, -12,  42,  -8, -12,   4,  44, -53, -50, -51,
  92,  43,  44, -61, -62, -47,  43, -64,  -2,  -8,
 -10, -24,  35,  42, -51,  92,  -3, -16,  43,  42,
  97, -34, -35, -36,  44, -17,  35,  23,  33,  34,
  38,  94,  39, 101, 102,  65,  40,  18, -22,  47,
  87,  48,  49,  50, 103, -10,  43,  42, -11, -12,
  46, -22, -39,  44, -53,  96,   5, -12,  44, -52,
 -55, -50, -55,  97,  97, -63, -48, -22,  45,  97,
  96,   5, -51, -51,  42, -12,  44,  -8, -43, -52,
   5, -34,  42, -58,  45,  42,  46,  -3,  35,  36,
  37,  33,  34,  32,  31,  26,  27,  28,  29,  24,
  25,  23,  22,  21,  20,  19,   6,   7,  40,   8,
   9,  10,  11,  12,  13,  14,  15,  16,  17,  30,
 -50,  88, -40, -41, -34,  97,  44,  43,  42,  41,
  38,  39,  18, -35, -35, -35, -35, -35, -35, -35,
 -35, -35, -36,  44, -35, -35,  50,  96, -16, -22,
  46, -11,   4, -10,  96, -53, -12,  99,   5,  96,
 -21,  -6, -21,  97,  99,   5, -38, -30, -22, -59,
   4, -24,  42,  42,  44, -11, -12,  44,  -8,  -3,
  99,  45, -34,  42,  42,  98, -34, -34, -34, -34,
 -34, -34, -34, -34, -34, -34, -34, -34, -34, -34,
 -34, -34, -34, -34, -34, -34,   6, -34, -34, -34,
 -34, -34, -34, -34, -34, -34, -34, -34,  96, -50,
   5,  96, -42, -40, -18, -19, -34, -34, -58,  45,
 -58, -50, -60,  99, -11,  96,  96,  96, -55, -25,
  43,  98,  -6,  98, -21, -48,  98,   5,   6, -13,
  97,  90, -12,  96, -12, -34,  97, -58, -34, -35,
  96, -41,  98,  96,   5,  99,  96, -13,  96,  44,
  44, -34,  -9,  -9,  98, -38, -34, -65, -68,  96,
  44,  96,  -3, -35, -34,  44, -10, -10,  99,  -9,
 -23, -23,  44, -10,  44,  98, -10,  96,  96, -37,
 -66, -51,  92, -69, -10,  96, -10,  96, -14,  -7,
 -52, -14,  96,  96, -67, -15, -32,  46,   2, -16,
 -13,  61,  88,  89,  80,  78,  86,  75,  74,  93,
  76,  66,  69,  68,  72,  77,  70,  67,  95,  84,
  62,   4,  -7, -70,  98, 100,   4,   4, -34, -19,
 -19, -28, -15,  46, -29,  46,  46, -19, -19, -34,
 -33,  97,  90, -16,  44,  44, -15,  44, -13, -34,
 -34, -57,  47, -57,   4,  98, -15, -49,   5,   4,
   4, -13,   4,   4,   4,   4,   4, -26, -26,   4,
 -16, -34,  68, -34, -33, -72,   4,   4,   4,  50,
  98, -27,  60,  83,  98,   4,  96,  44,  96, -46,
  97,  90, -34, 100, -16, -15, -34, -15, -44, -26,
 100, -14,   4,  96,  71,  98, -45,  60,  83,  98,
 -14, -16, -15, -50, 100,  96, -71, -14, -15, 100,
 -14
};
short	yydef[] =
{
   2,  -2,  -2,   3,  45,   0, 246,   0,  29,  29,
  29,  29, 247, 248, 249,   0,  49,   0,  46,  61,
   0,   0,   0,  63,  10,   0,   0,  15,  16,  17,
  18, 229,   0,   0, 234, 235, 236, 237, 238, 239,
 240, 241,   0,  21,  30,  31,  42,  23,  32,  27,
   4,   0,  65,  48, 142,  65,  57,   0,  61,   0,
  64,   0,   0,  13,   0,  12,   0,   0, 227, 180,
 246,   0,   0,   0,   0,  25,   0,   0,  47,  49,
   0,  66,   0,   0,  70, 246,  50,  51,   0,   0,
 142, 143, 144, 177,   0, 184,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 213, 215,
 216, 217, 218, 219,   0,   0, 142,   0,  58,   0,
  61,  19,   0,  65,   0, 231,   0, 181,   0, 183,
   0, 232,   0, 246, 246,   0,   0,  34,  35,  39,
   5,   0,  67,  68,   0,  61,   0,  75,  74,  77,
 142,   0,   0,   0, 222,   0, 221,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 201, 199, 197, 223,   0,   0,   0,
 210, 211, 212, 185, 186, 187, 188, 189, 190, 191,
 192, 193, 194,   0, 195, 196, 220,   7,   0,  20,
  61,   0,  11,   0, 230, 228,   0, 242,   0, 244,
 246,  43, 246, 246,  33,   0,   0,  37,  40,   0,
   9,  69,   0,  76,   0,  71,   0,   0,  79,  56,
   0,   0,  53,   0, 214,  54, 145, 146, 147, 148,
 149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
 159, 160, 161, 162, 163, 164,   0, 166, 167, 168,
 169, 170, 171, 172, 173, 174, 175, 176,   0,   0,
   0, 203,   0, 198,   0, 224, 225,   0, 207, 222,
 209,   0,   0,  62,   0,   0,  14,   0, 233, 243,
   0,  29,  44,  29, 246,  36,  28,  39,   0,   6,
  84,  88,   0,   0,   0,  52, 142, 208, 165, 178,
   0, 202, 200, 205,   0, 206, 204,   8,   0,  65,
  65,   0,  22,  24,  29,  38,  41,  80,  80,   0,
  65,   0,   0, 179, 226,  65,   0,   0, 245,  26,
  85,  89,  65,   0,  65,  55,   0,  59, 182,  81,
  92,  45, 246,  92,   0,  72,   0,  60,  -2,   0,
  45,  -2,  73,  78,   0,  93, 111,  42,   0,   0,
 117,   0,   0,   0,  -2, 109,   0,   0,   0,   0,
   0, 142,   0,   0,  -2,   0,   0,   0,   0, 140,
 140,  82,   0,   0,  87,  -2, 115, 116, 113,   0,
   0, 121, 107,  42,   0, 110,   0,   0,   0,   0,
 127, 103, 103,   0, 142,   0,   0,   0, 134,   0,
 136,   0, 141,   0,  83,  91, 112,   0,   0, 119,
 120, 108, 122, 123, 124, 125, 126,   0,   0, 128,
   0,   0,   0,   0, 135,   0, 138, 139, 118, 114,
 101, 104,   0,   0, 102, 142,  -2,   0,  -2, 137,
  96, 103,   0,  92,   0, 130,   0, 132,   0,   0,
  92,  -2, 142, 131,  -2,  94,  97,   0,   0,  95,
  -2,   0, 133,  98,  92,  -2,   0,  -2, 129,  92,
  -2
};
short	yytok1[] =
{
   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 101,   0,   0, 103,  37,  23,   0,
  44,  96,  35,  33,   5,  34,  42,  36,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 100,   4,
  26,   6,  27,  18,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,  43,   0,  99,  22,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,  97,  21,  98, 102
};
short	yytok2[] =
{
   2,   3,   7,   8,   9,  10,  11,  12,  13,  14,
  15,  16,  17,  19,  20,  24,  25,  28,  29,  30,
  31,  32,  38,  39,  40,  41,  45,  46,  47,  48,
  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,
  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,
  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,
  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,
  89,  90,  91,  92,  93,  94,  95
};
long	yytok3[] =
{
   0
};

#line	1	"/sys/lib/yaccpar"
#define YYFLAG 		-1000
#define	yyclearin	yychar = -1
#define	yyerrok		yyerrflag = 0

#ifdef	yydebug
#include	"y.debug"
#else
#define	yydebug		0
char*	yytoknames[1];		/* for debugging */
char*	yystates[1];		/* for debugging */
#endif

/*	parser for yacc output	*/

int	yynerrs = 0;		/* number of errors */
int	yyerrflag = 0;		/* error recovery flag */

extern	int	fprint(int, char*, ...);
extern	int	sprint(char*, char*, ...);

char*
yytokname(int yyc)
{
	static char x[16];

	if(yyc > 0 && yyc <= sizeof(yytoknames)/sizeof(yytoknames[0]))
	if(yytoknames[yyc-1])
		return yytoknames[yyc-1];
	sprint(x, "<%d>", yyc);
	return x;
}

char*
yystatname(int yys)
{
	static char x[16];

	if(yys >= 0 && yys < sizeof(yystates)/sizeof(yystates[0]))
	if(yystates[yys])
		return yystates[yys];
	sprint(x, "<%d>\n", yys);
	return x;
}

long
yylex1(void)
{
	long yychar;
	long *t3p;
	int c;

	yychar = yylex();
	if(yychar <= 0) {
		c = yytok1[0];
		goto out;
	}
	if(yychar < sizeof(yytok1)/sizeof(yytok1[0])) {
		c = yytok1[yychar];
		goto out;
	}
	if(yychar >= YYPRIVATE)
		if(yychar < YYPRIVATE+sizeof(yytok2)/sizeof(yytok2[0])) {
			c = yytok2[yychar-YYPRIVATE];
			goto out;
		}
	for(t3p=yytok3;; t3p+=2) {
		c = t3p[0];
		if(c == yychar) {
			c = t3p[1];
			goto out;
		}
		if(c == 0)
			break;
	}
	c = 0;

out:
	if(c == 0)
		c = yytok2[1];	/* unknown char */
	if(yydebug >= 3)
		fprint(2, "lex %.4lux %s\n", yychar, yytokname(c));
	return c;
}

int
yyparse(void)
{
	struct
	{
		YYSTYPE	yyv;
		int	yys;
	} yys[YYMAXDEPTH], *yyp, *yypt;
	short *yyxi;
	int yyj, yym, yystate, yyn, yyg;
	long yychar;
	YYSTYPE save1, save2;
	int save3, save4;

	save1 = yylval;
	save2 = yyval;
	save3 = yynerrs;
	save4 = yyerrflag;

	yystate = 0;
	yychar = -1;
	yynerrs = 0;
	yyerrflag = 0;
	yyp = &yys[-1];
	goto yystack;

ret0:
	yyn = 0;
	goto ret;

ret1:
	yyn = 1;
	goto ret;

ret:
	yylval = save1;
	yyval = save2;
	yynerrs = save3;
	yyerrflag = save4;
	return yyn;

yystack:
	/* put a state and value onto the stack */
	if(yydebug >= 4)
		fprint(2, "char %s in %s", yytokname(yychar), yystatname(yystate));

	yyp++;
	if(yyp >= &yys[YYMAXDEPTH]) {
		yyerror("yacc stack overflow");
		goto ret1;
	}
	yyp->yys = yystate;
	yyp->yyv = yyval;

yynewstate:
	yyn = yypact[yystate];
	if(yyn <= YYFLAG)
		goto yydefault; /* simple state */
	if(yychar < 0)
		yychar = yylex1();
	yyn += yychar;
	if(yyn < 0 || yyn >= YYLAST)
		goto yydefault;
	yyn = yyact[yyn];
	if(yychk[yyn] == yychar) { /* valid shift */
		yychar = -1;
		yyval = yylval;
		yystate = yyn;
		if(yyerrflag > 0)
			yyerrflag--;
		goto yystack;
	}

yydefault:
	/* default state action */
	yyn = yydef[yystate];
	if(yyn == -2) {
		if(yychar < 0)
			yychar = yylex1();

		/* look through exception table */
		for(yyxi=yyexca;; yyxi+=2)
			if(yyxi[0] == -1 && yyxi[1] == yystate)
				break;
		for(yyxi += 2;; yyxi += 2) {
			yyn = yyxi[0];
			if(yyn < 0 || yyn == yychar)
				break;
		}
		yyn = yyxi[1];
		if(yyn < 0)
			goto ret0;
	}
	if(yyn == 0) {
		/* error ... attempt to resume parsing */
		switch(yyerrflag) {
		case 0:   /* brand new error */
			yyerror("syntax error");
			yynerrs++;
			if(yydebug >= 1) {
				fprint(2, "%s", yystatname(yystate));
				fprint(2, "saw %s\n", yytokname(yychar));
			}

		case 1:
		case 2: /* incompletely recovered error ... try again */
			yyerrflag = 3;

			/* find a state where "error" is a legal shift action */
			while(yyp >= yys) {
				yyn = yypact[yyp->yys] + YYERRCODE;
				if(yyn >= 0 && yyn < YYLAST) {
					yystate = yyact[yyn];  /* simulate a shift of "error" */
					if(yychk[yystate] == YYERRCODE)
						goto yystack;
				}

				/* the current yyp has no shift onn "error", pop stack */
				if(yydebug >= 2)
					fprint(2, "error recovery pops state %d, uncovers %d\n",
						yyp->yys, (yyp-1)->yys );
				yyp--;
			}
			/* there is no state on the stack with an error shift ... abort */
			goto ret1;

		case 3:  /* no shift yet; clobber input char */
			if(yydebug >= 2)
				fprint(2, "error recovery discards %s\n", yytokname(yychar));
			if(yychar == YYEOFCODE)
				goto ret1;
			yychar = -1;
			goto yynewstate;   /* try again in the same state */
		}
	}

	/* reduction by production yyn */
	if(yydebug >= 2)
		fprint(2, "reduce %d in:\n\t%s", yyn, yystatname(yystate));

	yypt = yyp;
	yyp -= yyr2[yyn];
	yyval = (yyp+1)->yyv;
	yym = yyn;

	/* consult goto table to find next state */
	yyn = yyr1[yyn];
	yyg = yypgo[yyn];
	yyj = yyg + yyp->yys + 1;

	if(yyj >= YYLAST || yychk[yystate=yyact[yyj]] != -yyn)
		yystate = yyact[yyg];
	switch(yym) {
		
case 1:
#line	69	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			polyasgn();
			packdepend();
			strop();
		} break;
case 2:
#line	77	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 3:
#line	79	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
			pushdcl(yypt[-0].yyv.node, Global);
			gendata(yypt[-0].yyv.node);
		} break;
case 4:
#line	87	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = simpledecl(yypt[-2].yyv.type, yypt[-1].yyv.node);
		} break;
case 5:
#line	91	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			fundecl(yypt[-4].yyv.type, yypt[-3].yyv.node, yypt[-1].yyv.node);
		} break;
case 6:
#line	95	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			fungen(yypt[-0].yyv.node, yypt[-5].yyv.node);
			yyval.node = yypt[-5].yyv.node->left;
		} break;
case 7:
#line	100	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			if(yypt[-4].yyv.type->class != External && yypt[-4].yyv.type->class != Global)
				diag(yypt[-3].yyv.node, "%s illegal storage class for adt function",
						sclass[yypt[-4].yyv.type->class]);
			fundecl(yypt[-4].yyv.type, yypt[-3].yyv.node, yypt[-1].yyv.node);
			adtchk(yypt[-3].yyv.node->init, yypt[-3].yyv.node);
			yypt[-1].yyv.node->init = nil;
		} break;
case 8:
#line	109	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			fungen(yypt[-0].yyv.node, yypt[-5].yyv.node);
			adtbfun = nil;
			yyval.node = yypt[-5].yyv.node->left;
		} break;
case 9:
#line	115	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			applytype(yypt[-5].yyv.type, yypt[-4].yyv.node);
			funproto(yypt[-4].yyv.node, yypt[-2].yyv.node);
			yyval.node = yypt[-4].yyv.node;
		} break;
case 10:
#line	121	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			if(yypt[-1].yyv.node)
				buildtype(yypt[-1].yyv.node);
		} break;
case 11:
#line	126	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			newtype(yypt[-3].yyv.type, yypt[-2].yyv.node, yypt[-1].yyv.node);
			yyval.node = nil;
		} break;
case 12:
#line	131	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-1].yyv.sym->lexval = Ttypename;
			yypt[-1].yyv.sym->ltype = at(TPOLY, nil);
			yypt[-1].yyv.sym->ltype->sym = yypt[-1].yyv.sym;
			yyval.node = nil;
		} break;
case 13:
#line	140	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 14:
#line	142	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = yypt[-1].yyv.node; } break;
case 16:
#line	147	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = nil; } break;
case 17:
#line	149	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = nil; } break;
case 18:
#line	151	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = nil; } break;
case 19:
#line	155	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->init = adtfunc(yypt[-2].yyv.ltype, yypt[-0].yyv.node);
			yyval.node = yypt[-0].yyv.node;
		} break;
case 20:
#line	160	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->init = adtfunc(yypt[-2].yyv.ltype, yypt[-0].yyv.node);
			yypt[-0].yyv.node->right = yypt[-3].yyv.node;
			yyval.node = yypt[-0].yyv.node;
		} break;
case 21:
#line	168	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			if(yypt[-0].yyv.node)
				yypt[-0].yyv.node->sym->lexval = Ttypename;
		} break;
case 22:
#line	173	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OAGDECL, an(OLIST, yypt[-5].yyv.node, yypt[-0].yyv.node), yypt[-2].yyv.node);
		} break;
case 23:
#line	177	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			if(yypt[-0].yyv.node)
				yypt[-0].yyv.node->sym->lexval = Ttypename; 
		} break;
case 24:
#line	182	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OUNDECL, an(OLIST, yypt[-5].yyv.node, yypt[-0].yyv.node), yypt[-2].yyv.node);
		} break;
case 25:
#line	186	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			if(yypt[-1].yyv.node) {
				yypt[-1].yyv.node->sym->lexval = Ttypename;
				yypt[-1].yyv.node->right = buildadt;
				buildadt = yypt[-1].yyv.node;
			}
			else
				diag(nil, "adt decl needs type name");
		} break;
case 26:
#line	196	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			if(yypt[-6].yyv.node) {
				buildadt = yypt[-6].yyv.node->right;
				yypt[-6].yyv.node->right = nil;
				yyval.node = an(OADTDECL, an(OLIST, yypt[-6].yyv.node, yypt[-0].yyv.node), yypt[-2].yyv.node);
				yyval.node->poly = yypt[-5].yyv.node;
			}
			else
				yyval.node = nil;
		} break;
case 27:
#line	207	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			setbase = 0;
			if(yypt[-0].yyv.node) {
				yypt[-0].yyv.node->sym->lexval = Ttypename;
				newtype(builtype[TINT], yypt[-0].yyv.node, nil);
			}
		} break;
case 28:
#line	215	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSETDECL, nil, nil);
		} break;
case 29:
#line	221	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 31:
#line	224	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, nil, nil);
			yyval.node->sym = yypt[-0].yyv.ltype.s;
		} break;
case 32:
#line	231	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 33:
#line	233	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 34:
#line	239	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			polytyp(yypt[-0].yyv.node);
		} break;
case 35:
#line	243	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, nil, nil);
			if(yypt[-0].yyv.ltype.t->type != TPOLY) {
				diag(nil, "type parameter must be poly [%T]", yypt[-0].yyv.ltype.t);
				yyval.node->t = at(TPOLY, 0);
				yyval.node->sym = enter("POLY", Ttypename);
			}
			else {
				yyval.node->t = yypt[-0].yyv.ltype.t;
				yyval.node->sym = yypt[-0].yyv.ltype.s;
			}
		} break;
case 36:
#line	256	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-2].yyv.node->left = yypt[-0].yyv.node;
			yyval.node = yypt[-2].yyv.node;
		} break;
case 38:
#line	264	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 39:
#line	270	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 40:
#line	272	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->sym->lexval = Tsname;
			coverset(yypt[-0].yyv.node);
		} break;
case 41:
#line	277	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-2].yyv.node->sym->lexval = Tsname;
			yypt[-2].yyv.node->left = yypt[-0].yyv.node;
			coverset(yypt[-2].yyv.node);
		} break;
case 42:
#line	285	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, nil, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 44:
#line	293	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 45:
#line	299	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 47:
#line	302	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 48:
#line	308	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node->init = yypt[-0].yyv.node;
			typechk(yypt[-0].yyv.node, 0);
			rewrite(yypt[-0].yyv.node);
			yyval.node = yypt[-1].yyv.node;
		} break;
case 49:
#line	317	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 50:
#line	319	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = yypt[-0].yyv.node;
		} break;
case 52:
#line	326	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OINDEX, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 53:
#line	330	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OINDEX, yypt[-0].yyv.node, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 54:
#line	335	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OILIST, yypt[-1].yyv.node, nil);
		} break;
case 55:
#line	339	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OINDEX, yypt[-4].yyv.node, an(OILIST, yypt[-1].yyv.node, nil));
		} break;
case 56:
#line	343	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 57:
#line	349	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, yypt[-0].yyv.node, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 58:
#line	354	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, yypt[-0].yyv.node, yypt[-2].yyv.node);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 59:
#line	359	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OFUNC, an(OLIST, yypt[-4].yyv.node, yypt[-6].yyv.node), nil);
			yyval.node->sym = yypt[-5].yyv.sym;
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 60:
#line	365	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OFUNC, an(OLIST, yypt[-4].yyv.node, yypt[-6].yyv.node), yypt[-8].yyv.node);
			yyval.node->sym = yypt[-5].yyv.sym;
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 61:
#line	373	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 62:
#line	375	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OARRAY, yypt[-1].yyv.node, yypt[-3].yyv.node);
			typechk(yypt[-1].yyv.node, 0);
			rewrite(yypt[-1].yyv.node);
		} break;
case 63:
#line	383	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OIND, nil, nil);
		} break;
case 64:
#line	387	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OIND, yypt[-1].yyv.node, nil);
		} break;
case 65:
#line	394	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OPROTO, nil, nil);
			yyval.node->t = builtype[TVOID];
		} break;
case 67:
#line	400	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OADTARG, nil, nil);
			yyval.node->t = at(TIND, yypt[-0].yyv.type);
		} break;
case 68:
#line	405	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OADTARG, nil, nil);
			yyval.node->t = yypt[-0].yyv.type;
		} break;
case 69:
#line	410	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 70:
#line	416	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OPROTO, nil, nil);
			yyval.node->t = yypt[-0].yyv.type;
		} break;
case 71:
#line	421	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = argproto(yypt[-2].yyv.type, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 72:
#line	425	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node= an(OPROTO, nil, nil);
			yyval.node->t = yypt[-6].yyv.type;
			yyval.node->t = at(TFUNC, yyval.node->t);
			yyval.node->t = mkcast(yyval.node->t, yypt[-4].yyv.node);
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 73:
#line	433	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node= an(OPROTO, nil, nil);
			yyval.node->t = mkcast(yypt[-7].yyv.type, yypt[-6].yyv.node);
			yyval.node->t = at(TFUNC, yyval.node->t);
			yyval.node->t = mkcast(yyval.node->t, yypt[-4].yyv.node);
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 74:
#line	441	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = yypt[-0].yyv.node;
		} break;
case 75:
#line	445	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			applytype(yypt[-1].yyv.type, yypt[-0].yyv.node);
			yyval.node = yypt[-0].yyv.node;
			if(yyval.node->t->type == TARRAY) {
				yyval.node->t->type = TIND;
				yyval.node->t->size = builtype[TIND]->size;
			}
		} break;
case 76:
#line	454	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OVARARG, nil, nil);
		} break;
case 77:
#line	460	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OPROTO, nil, nil);
			yyval.node->t = yypt[-0].yyv.type;
		} break;
case 78:
#line	465	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node= an(OPROTO, nil, nil);
			yyval.node->t = yypt[-6].yyv.type;
			yyval.node->t = at(TFUNC, yyval.node->t);
			yyval.node->t = mkcast(yyval.node->t, yypt[-4].yyv.node);
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 79:
#line	473	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			applytype(yypt[-1].yyv.type, yypt[-0].yyv.node);
			yyval.node = yypt[-0].yyv.node;
			if(yyval.node->t->type == TARRAY) {
				yyval.node->t->type = TIND;
				yyval.node->t->size = builtype[TIND]->size;
			}
		} break;
case 80:
#line	484	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 81:
#line	486	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 82:
#line	492	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			applytype(yypt[-2].yyv.type, yypt[-1].yyv.node);
			pushdcl(yypt[-1].yyv.node, Automatic);
			yyval.node = yypt[-1].yyv.node;
		} break;
case 83:
#line	498	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			applytype(yypt[-2].yyv.type, yypt[-1].yyv.node);
			pushdcl(yypt[-1].yyv.node, Automatic);
			yyval.node = yypt[-1].yyv.node;
		} break;
case 84:
#line	506	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ enterblock(); } break;
case 85:
#line	508	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ scopeis(Automatic); } break;
case 86:
#line	510	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ leaveblock(); } break;
case 87:
#line	512	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = an(OBLOCK, yypt[-2].yyv.node, nil); } break;
case 88:
#line	514	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ enterblock(); } break;
case 89:
#line	516	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ scopeis(Automatic); } break;
case 90:
#line	518	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ leaveblock(); } break;
case 91:
#line	520	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = an(OLBLOCK, yypt[-2].yyv.node, nil); } break;
case 92:
#line	524	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 93:
#line	526	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 94:
#line	532	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 95:
#line	536	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLBLOCK, yypt[-1].yyv.node, nil);
		} break;
case 96:
#line	542	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 97:
#line	544	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 98:
#line	549	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ settype(yypt[-0].yyv.type); } break;
case 99:
#line	550	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			unsettype();
			yyval.node = an(OCASE, con(typesig(yypt[-3].yyv.type)), yypt[-0].yyv.node);
		} break;
case 100:
#line	555	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ODEFAULT, nil, yypt[-0].yyv.node);
		} break;
case 101:
#line	561	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 102:
#line	565	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLBLOCK, yypt[-1].yyv.node, nil);
		} break;
case 103:
#line	571	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 104:
#line	573	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 105:
#line	579	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCASE, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 106:
#line	583	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ODEFAULT, nil, yypt[-0].yyv.node);
		} break;
case 108:
#line	590	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLABEL, yypt[-0].yyv.node, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 109:
#line	597	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 110:
#line	599	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLABEL, nil, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 112:
#line	607	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, an(OLABEL, nil, nil), yypt[-0].yyv.node);
			yyval.node->left->sym = yypt[-2].yyv.sym;
		} break;
case 113:
#line	614	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 114:
#line	616	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = strnode(yypt[-0].yyv.string, 0);
		} break;
case 115:
#line	622	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 118:
#line	626	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCHECK, yypt[-2].yyv.node, yypt[-1].yyv.node);
		} break;
case 119:
#line	630	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OALLOC, yypt[-1].yyv.node, nil);
		} break;
case 120:
#line	634	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OUALLOC, yypt[-1].yyv.node, nil);
		} break;
case 121:
#line	638	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ORESCUE, yypt[-0].yyv.node, nil);
		} break;
case 122:
#line	642	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ORAISE, yypt[-1].yyv.node, nil);
		} break;
case 123:
#line	646	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OGOTO, nil, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 124:
#line	651	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OPROCESS, yypt[-1].yyv.node, nil);
		} break;
case 125:
#line	655	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OTASK, yypt[-1].yyv.node, nil);
		} break;
case 126:
#line	659	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OBECOME, yypt[-1].yyv.node, nil);
		} break;
case 127:
#line	663	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSELECT, yypt[-0].yyv.node, nil);
		} break;
case 128:
#line	667	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ORET, yypt[-1].yyv.node, nil);
		} break;
case 129:
#line	671	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OFOR, an(OLIST, yypt[-6].yyv.node, an(OLIST, yypt[-4].yyv.node, yypt[-2].yyv.node)), yypt[-0].yyv.node);
		} break;
case 130:
#line	675	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OWHILE, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 131:
#line	679	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ODWHILE, yypt[-1].yyv.node, yypt[-4].yyv.node);
		} break;
case 132:
#line	683	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OIF, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 133:
#line	687	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OIF, yypt[-4].yyv.node, an(OELSE, yypt[-2].yyv.node, yypt[-0].yyv.node));
		} break;
case 134:
#line	691	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OPAR, yypt[-0].yyv.node, nil);
		} break;
case 135:
#line	695	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSWITCH, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 136:
#line	699	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->link = swstack;
			swstack = yypt[-0].yyv.node;
		} break;
case 137:
#line	704	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			swstack = yypt[-2].yyv.node->link;
			yyval.node = an(OSWITCH, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 138:
#line	709	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCONT, nil, nil);
			yyval.node->ival = yypt[-1].yyv.ival;
		} break;
case 139:
#line	714	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OBREAK, nil, nil);
			yyval.node->ival = yypt[-1].yyv.ival;
		} break;
case 140:
#line	721	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.ival = 1; } break;
case 142:
#line	726	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 145:
#line	732	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OMUL, yypt[-2].yyv.node, yypt[-0].yyv.node); 
		} break;
case 146:
#line	736	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ODIV, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 147:
#line	740	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OMOD, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 148:
#line	744	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OADD, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 149:
#line	748	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSUB, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 150:
#line	752	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ORSH, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 151:
#line	756	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLSH, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 152:
#line	760	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLT, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 153:
#line	764	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OGT, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 154:
#line	768	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 155:
#line	772	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OGEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 156:
#line	776	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 157:
#line	780	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ONEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 158:
#line	784	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLAND, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 159:
#line	788	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OXOR, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 160:
#line	792	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLOR, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 161:
#line	796	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCAND, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 162:
#line	800	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCOR, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 163:
#line	804	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OASGN, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 164:
#line	808	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OVASGN, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 165:
#line	812	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OASGN, an(OSEND, yypt[-3].yyv.node, nil), yypt[-0].yyv.node);
		} break;
case 166:
#line	816	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OADDEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 167:
#line	820	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSUBEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 168:
#line	824	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OMULEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 169:
#line	828	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ODIVEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 170:
#line	832	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OMODEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 171:
#line	836	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ORSHEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 172:
#line	840	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLSHEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 173:
#line	844	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OANDEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 174:
#line	848	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OOREQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 175:
#line	852	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OXOREQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 176:
#line	856	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OITER, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 178:
#line	863	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCONV, yypt[-0].yyv.node, nil);
			yyval.node->t = yypt[-2].yyv.type;
		} break;
case 179:
#line	868	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OALLOC, yypt[-0].yyv.node, nil);
			yyval.node->t = yypt[-2].yyv.type;
		} break;
case 181:
#line	876	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.type = mkcast(yypt[-1].yyv.type, yypt[-0].yyv.node);
		} break;
case 182:
#line	880	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.type = mkcast(at(TFUNC, yypt[-6].yyv.type), yypt[-4].yyv.node);
			yyval.type = yyval.type->next;
			yyval.type->proto = an(OPROTO, yypt[-1].yyv.node, nil);
			yyval.type = at(TIND, yyval.type);
		} break;
case 183:
#line	887	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.type = yypt[-0].yyv.type;
		} break;
case 185:
#line	894	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OIND, yypt[-0].yyv.node, nil);
		} break;
case 186:
#line	898	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OADDR, yypt[-0].yyv.node, nil);
		} break;
case 187:
#line	902	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OADD, yypt[-0].yyv.node, con(0));
		} break;
case 188:
#line	906	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSUB, con(0), yypt[-0].yyv.node);
		} break;
case 189:
#line	910	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OEDEC, yypt[-0].yyv.node, nil);
		} break;
case 190:
#line	914	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OXEROX, yypt[-0].yyv.node, nil);
		} break;
case 191:
#line	918	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OEINC, yypt[-0].yyv.node, nil);
		} break;
case 192:
#line	922	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ONOT, yypt[-0].yyv.node, nil);
		} break;
case 193:
#line	926	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OXOR, yypt[-0].yyv.node, con(-1));
		} break;
case 194:
#line	930	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSTORAGE, yypt[-0].yyv.node, nil);
		} break;
case 195:
#line	934	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ORECV, yypt[-0].yyv.node, nil);
		} break;
case 196:
#line	938	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCRCV, yypt[-0].yyv.node, nil);
		} break;
case 197:
#line	943	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 200:
#line	948	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OILIST, yypt[-1].yyv.node, nil);
			yyval.node->t = at(TAGGREGATE, 0);
		} break;
case 202:
#line	956	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 203:
#line	961	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
			if(yypt[-1].yyv.node->type == OLIST) {
				yyval.node = an(OILIST, yypt[-1].yyv.node, nil);
				yyval.node->t = at(TAGGREGATE, 0);
			}
		} break;
case 204:
#line	969	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OSTORAGE, nil, nil);
			yyval.node->t = yypt[-1].yyv.type;
		} break;
case 205:
#line	974	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCALL, yypt[-3].yyv.node, yypt[-1].yyv.node);
		} break;
case 206:
#line	978	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OIND, an(OADD, yypt[-3].yyv.node, yypt[-1].yyv.node), nil);
		} break;
case 207:
#line	982	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ODOT, yypt[-2].yyv.node, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 208:
#line	987	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCONST, nil, nil);
			yyval.node->t = at(TVOID, 0);
			yyval.node->t = at(TIND, yyval.node->t);
			yyval.node->ival = 0;
			yyval.node = an(OCONV, yyval.node, nil);
			yyval.node->t = at(TIND, yypt[-2].yyv.ltype.t);
			yyval.node = an(OIND, yyval.node, nil);
			yyval.node = an(ODOT, yyval.node, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 209:
#line	999	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(ODOT, an(OIND, yypt[-2].yyv.node, nil), nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 210:
#line	1004	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OPDEC, yypt[-1].yyv.node, nil);
		} break;
case 211:
#line	1008	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OPINC, yypt[-1].yyv.node, nil);
		} break;
case 212:
#line	1012	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCSND, yypt[-1].yyv.node, nil);
		} break;
case 213:
#line	1016	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			derivetype(yypt[-0].yyv.node);
		} break;
case 214:
#line	1020	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = vargptr();
		} break;
case 215:
#line	1024	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = con(yypt[-0].yyv.ival);
		} break;
case 216:
#line	1028	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = con(0);
			yyval.node->t = at(TIND, builtype[TVOID]);
		} break;
case 217:
#line	1033	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = con(yypt[-0].yyv.ival);
		} break;
case 218:
#line	1037	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OCONST, nil, nil);
			yyval.node->t = builtype[TFLOAT];
			yyval.node->fval = yypt[-0].yyv.fval;
		} break;
case 219:
#line	1043	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = strnode(yypt[-0].yyv.string, 0);
		} break;
case 220:
#line	1047	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = strnode(yypt[-0].yyv.string, 1);
		} break;
case 222:
#line	1054	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.sym = yypt[-0].yyv.ltype.s;
		} break;
case 223:
#line	1060	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 226:
#line	1066	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 228:
#line	1073	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-2].yyv.type->member = yypt[-0].yyv.type;
			yyval.type = yypt[-2].yyv.type;
		} break;
case 229:
#line	1080	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-0].yyv.type->class = yypt[-1].yyv.clas;
			yyval.type = yypt[-0].yyv.type;
		} break;
case 230:
#line	1085	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.type = unshape(yypt[-1].yyv.type);
			yyval.type->class = yypt[-4].yyv.clas;
		} break;
case 231:
#line	1090	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.type = unshape(yypt[-1].yyv.type);
			yyval.type->class = yypt[-3].yyv.clas;
		} break;
case 233:
#line	1098	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yypt[-2].yyv.type->variant = yypt[-0].yyv.type;
			yyval.type = yypt[-2].yyv.type;
		} break;
case 234:
#line	1104	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = at(TINT, 0); } break;
case 235:
#line	1105	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = at(TUINT, 0); } break;
case 236:
#line	1106	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = at(TSINT, 0); } break;
case 237:
#line	1107	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = at(TSUINT, 0); } break;
case 238:
#line	1108	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = at(TCHAR, 0); } break;
case 239:
#line	1109	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = at(TFLOAT, 0); } break;
case 240:
#line	1110	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = at(TVOID, 0); } break;
case 241:
#line	1112	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = yypt[-0].yyv.ltype.t; } break;
case 242:
#line	1114	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.type = polybuild(yypt[-3].yyv.ltype.t, yypt[-1].yyv.type); } break;
case 243:
#line	1116	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.type = at(TCHANNEL, yypt[-2].yyv.type);
			if(yypt[-0].yyv.node != nil)
				chani(yyval.type, yypt[-0].yyv.node);
		} break;
case 244:
#line	1124	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 245:
#line	1126	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 246:
#line	1132	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{
			yyval.clas = Global;
			if(buildadt)
				yyval.clas = Adtdeflt;
		} break;
case 247:
#line	1137	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.clas = External; } break;
case 248:
#line	1138	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.clas = Internal; } break;
case 249:
#line	1139	"/usr/seh/repos/alef2/src/alef/port/parl.y"
{ yyval.clas = Private; } break;
	}
	goto yystack;  /* stack new state and value */
}
