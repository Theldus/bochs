/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         bxparse
#define yylex           bxlex
#define yyerror         bxerror
#define yylval          bxlval
#define yychar          bxchar
#define yydebug         bxdebug
#define yynerrs         bxnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 5 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

#if BX_DEBUGGER

/* Line 371 of yacc.c  */
#line 83 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_BX_Y_TAB_H_INCLUDED
# define YY_BX_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int bxdebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BX_TOKEN_8BH_REG = 258,
     BX_TOKEN_8BL_REG = 259,
     BX_TOKEN_16B_REG = 260,
     BX_TOKEN_32B_REG = 261,
     BX_TOKEN_64B_REG = 262,
     BX_TOKEN_CS = 263,
     BX_TOKEN_ES = 264,
     BX_TOKEN_SS = 265,
     BX_TOKEN_DS = 266,
     BX_TOKEN_FS = 267,
     BX_TOKEN_GS = 268,
     BX_TOKEN_OPMASK_REG = 269,
     BX_TOKEN_FLAGS = 270,
     BX_TOKEN_ON = 271,
     BX_TOKEN_OFF = 272,
     BX_TOKEN_CONTINUE = 273,
     BX_TOKEN_STEPN = 274,
     BX_TOKEN_STEP_OVER = 275,
     BX_TOKEN_SET = 276,
     BX_TOKEN_DEBUGGER = 277,
     BX_TOKEN_LIST_BREAK = 278,
     BX_TOKEN_VBREAKPOINT = 279,
     BX_TOKEN_LBREAKPOINT = 280,
     BX_TOKEN_PBREAKPOINT = 281,
     BX_TOKEN_DEL_BREAKPOINT = 282,
     BX_TOKEN_ENABLE_BREAKPOINT = 283,
     BX_TOKEN_DISABLE_BREAKPOINT = 284,
     BX_TOKEN_INFO = 285,
     BX_TOKEN_QUIT = 286,
     BX_TOKEN_R = 287,
     BX_TOKEN_REGS = 288,
     BX_TOKEN_CPU = 289,
     BX_TOKEN_FPU = 290,
     BX_TOKEN_MMX = 291,
     BX_TOKEN_XMM = 292,
     BX_TOKEN_YMM = 293,
     BX_TOKEN_ZMM = 294,
     BX_TOKEN_AVX = 295,
     BX_TOKEN_IDT = 296,
     BX_TOKEN_IVT = 297,
     BX_TOKEN_GDT = 298,
     BX_TOKEN_LDT = 299,
     BX_TOKEN_TSS = 300,
     BX_TOKEN_TAB = 301,
     BX_TOKEN_ALL = 302,
     BX_TOKEN_LINUX = 303,
     BX_TOKEN_DEBUG_REGS = 304,
     BX_TOKEN_CONTROL_REGS = 305,
     BX_TOKEN_SEGMENT_REGS = 306,
     BX_TOKEN_EXAMINE = 307,
     BX_TOKEN_XFORMAT = 308,
     BX_TOKEN_DISFORMAT = 309,
     BX_TOKEN_RESTORE = 310,
     BX_TOKEN_WRITEMEM = 311,
     BX_TOKEN_SETPMEM = 312,
     BX_TOKEN_SYMBOLNAME = 313,
     BX_TOKEN_QUERY = 314,
     BX_TOKEN_PENDING = 315,
     BX_TOKEN_TAKE = 316,
     BX_TOKEN_DMA = 317,
     BX_TOKEN_IRQ = 318,
     BX_TOKEN_TLB = 319,
     BX_TOKEN_HEX = 320,
     BX_TOKEN_DISASM = 321,
     BX_TOKEN_INSTRUMENT = 322,
     BX_TOKEN_STRING = 323,
     BX_TOKEN_STOP = 324,
     BX_TOKEN_DOIT = 325,
     BX_TOKEN_CRC = 326,
     BX_TOKEN_TRACE = 327,
     BX_TOKEN_TRACEREG = 328,
     BX_TOKEN_TRACEMEM = 329,
     BX_TOKEN_SWITCH_MODE = 330,
     BX_TOKEN_SIZE = 331,
     BX_TOKEN_PTIME = 332,
     BX_TOKEN_TIMEBP_ABSOLUTE = 333,
     BX_TOKEN_TIMEBP = 334,
     BX_TOKEN_MODEBP = 335,
     BX_TOKEN_VMEXITBP = 336,
     BX_TOKEN_PRINT_STACK = 337,
     BX_TOKEN_BACKTRACE = 338,
     BX_TOKEN_WATCH = 339,
     BX_TOKEN_UNWATCH = 340,
     BX_TOKEN_READ = 341,
     BX_TOKEN_WRITE = 342,
     BX_TOKEN_SHOW = 343,
     BX_TOKEN_LOAD_SYMBOLS = 344,
     BX_TOKEN_SYMBOLS = 345,
     BX_TOKEN_LIST_SYMBOLS = 346,
     BX_TOKEN_GLOBAL = 347,
     BX_TOKEN_WHERE = 348,
     BX_TOKEN_PRINT_STRING = 349,
     BX_TOKEN_NUMERIC = 350,
     BX_TOKEN_PAGE = 351,
     BX_TOKEN_HELP = 352,
     BX_TOKEN_XML = 353,
     BX_TOKEN_CALC = 354,
     BX_TOKEN_DEVICE = 355,
     BX_TOKEN_GENERIC = 356,
     BX_TOKEN_RSHIFT = 357,
     BX_TOKEN_LSHIFT = 358,
     BX_TOKEN_REG_IP = 359,
     BX_TOKEN_REG_EIP = 360,
     BX_TOKEN_REG_RIP = 361,
     INDIRECT = 362,
     NEG = 363,
     NOT = 364
   };
#endif
/* Tokens.  */
#define BX_TOKEN_8BH_REG 258
#define BX_TOKEN_8BL_REG 259
#define BX_TOKEN_16B_REG 260
#define BX_TOKEN_32B_REG 261
#define BX_TOKEN_64B_REG 262
#define BX_TOKEN_CS 263
#define BX_TOKEN_ES 264
#define BX_TOKEN_SS 265
#define BX_TOKEN_DS 266
#define BX_TOKEN_FS 267
#define BX_TOKEN_GS 268
#define BX_TOKEN_OPMASK_REG 269
#define BX_TOKEN_FLAGS 270
#define BX_TOKEN_ON 271
#define BX_TOKEN_OFF 272
#define BX_TOKEN_CONTINUE 273
#define BX_TOKEN_STEPN 274
#define BX_TOKEN_STEP_OVER 275
#define BX_TOKEN_SET 276
#define BX_TOKEN_DEBUGGER 277
#define BX_TOKEN_LIST_BREAK 278
#define BX_TOKEN_VBREAKPOINT 279
#define BX_TOKEN_LBREAKPOINT 280
#define BX_TOKEN_PBREAKPOINT 281
#define BX_TOKEN_DEL_BREAKPOINT 282
#define BX_TOKEN_ENABLE_BREAKPOINT 283
#define BX_TOKEN_DISABLE_BREAKPOINT 284
#define BX_TOKEN_INFO 285
#define BX_TOKEN_QUIT 286
#define BX_TOKEN_R 287
#define BX_TOKEN_REGS 288
#define BX_TOKEN_CPU 289
#define BX_TOKEN_FPU 290
#define BX_TOKEN_MMX 291
#define BX_TOKEN_XMM 292
#define BX_TOKEN_YMM 293
#define BX_TOKEN_ZMM 294
#define BX_TOKEN_AVX 295
#define BX_TOKEN_IDT 296
#define BX_TOKEN_IVT 297
#define BX_TOKEN_GDT 298
#define BX_TOKEN_LDT 299
#define BX_TOKEN_TSS 300
#define BX_TOKEN_TAB 301
#define BX_TOKEN_ALL 302
#define BX_TOKEN_LINUX 303
#define BX_TOKEN_DEBUG_REGS 304
#define BX_TOKEN_CONTROL_REGS 305
#define BX_TOKEN_SEGMENT_REGS 306
#define BX_TOKEN_EXAMINE 307
#define BX_TOKEN_XFORMAT 308
#define BX_TOKEN_DISFORMAT 309
#define BX_TOKEN_RESTORE 310
#define BX_TOKEN_WRITEMEM 311
#define BX_TOKEN_SETPMEM 312
#define BX_TOKEN_SYMBOLNAME 313
#define BX_TOKEN_QUERY 314
#define BX_TOKEN_PENDING 315
#define BX_TOKEN_TAKE 316
#define BX_TOKEN_DMA 317
#define BX_TOKEN_IRQ 318
#define BX_TOKEN_TLB 319
#define BX_TOKEN_HEX 320
#define BX_TOKEN_DISASM 321
#define BX_TOKEN_INSTRUMENT 322
#define BX_TOKEN_STRING 323
#define BX_TOKEN_STOP 324
#define BX_TOKEN_DOIT 325
#define BX_TOKEN_CRC 326
#define BX_TOKEN_TRACE 327
#define BX_TOKEN_TRACEREG 328
#define BX_TOKEN_TRACEMEM 329
#define BX_TOKEN_SWITCH_MODE 330
#define BX_TOKEN_SIZE 331
#define BX_TOKEN_PTIME 332
#define BX_TOKEN_TIMEBP_ABSOLUTE 333
#define BX_TOKEN_TIMEBP 334
#define BX_TOKEN_MODEBP 335
#define BX_TOKEN_VMEXITBP 336
#define BX_TOKEN_PRINT_STACK 337
#define BX_TOKEN_BACKTRACE 338
#define BX_TOKEN_WATCH 339
#define BX_TOKEN_UNWATCH 340
#define BX_TOKEN_READ 341
#define BX_TOKEN_WRITE 342
#define BX_TOKEN_SHOW 343
#define BX_TOKEN_LOAD_SYMBOLS 344
#define BX_TOKEN_SYMBOLS 345
#define BX_TOKEN_LIST_SYMBOLS 346
#define BX_TOKEN_GLOBAL 347
#define BX_TOKEN_WHERE 348
#define BX_TOKEN_PRINT_STRING 349
#define BX_TOKEN_NUMERIC 350
#define BX_TOKEN_PAGE 351
#define BX_TOKEN_HELP 352
#define BX_TOKEN_XML 353
#define BX_TOKEN_CALC 354
#define BX_TOKEN_DEVICE 355
#define BX_TOKEN_GENERIC 356
#define BX_TOKEN_RSHIFT 357
#define BX_TOKEN_LSHIFT 358
#define BX_TOKEN_REG_IP 359
#define BX_TOKEN_REG_EIP 360
#define BX_TOKEN_REG_RIP 361
#define INDIRECT 362
#define NEG 363
#define NOT 364



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 13 "parser.y"

  char    *sval;
  Bit64u   uval;
  bx_bool  bval;


/* Line 387 of yacc.c  */
#line 351 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE bxlval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int bxparse (void *YYPARSE_PARAM);
#else
int bxparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int bxparse (void);
#else
int bxparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_BX_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 379 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  297
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1756

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  284
/* YYNRULES -- Number of states.  */
#define YYNSTATES  551

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   364

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     117,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   120,     2,     2,     2,     2,   113,     2,
     121,   122,   111,   107,     2,   108,     2,   112,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   119,     2,
       2,   118,     2,     2,   123,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   110,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   109,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   114,   115,   116
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   133,   137,   140,   143,
     147,   151,   155,   159,   164,   167,   171,   175,   178,   182,
     186,   190,   193,   197,   200,   204,   208,   212,   215,   220,
     225,   230,   236,   242,   248,   251,   255,   259,   264,   269,
     275,   278,   282,   285,   288,   292,   297,   302,   305,   310,
     316,   322,   328,   334,   340,   346,   352,   358,   364,   367,
     373,   376,   380,   384,   387,   391,   396,   399,   402,   406,
     410,   414,   420,   426,   432,   438,   442,   446,   450,   454,
     458,   463,   467,   472,   478,   483,   489,   490,   492,   495,
     498,   501,   504,   507,   510,   513,   516,   519,   523,   527,
     531,   534,   539,   543,   547,   550,   555,   561,   567,   571,
     575,   580,   584,   587,   591,   596,   600,   605,   611,   615,
     620,   626,   630,   634,   638,   643,   647,   651,   655,   659,
     663,   667,   671,   675,   679,   683,   687,   691,   695,   699,
     703,   707,   711,   715,   719,   723,   727,   731,   735,   739,
     743,   747,   751,   755,   759,   763,   767,   771,   775,   779,
     783,   787,   791,   795,   799,   803,   807,   811,   815,   819,
     823,   827,   831,   834,   838,   840,   842,   844,   846,   848,
     850,   852,   854,   856,   858,   860,   862,   866,   870,   874,
     878,   882,   886,   890,   894,   898,   901,   904,   908,   910,
     912,   914,   916,   918,   920,   922,   924,   926,   928,   930,
     932,   936,   940,   944,   948,   952,   956,   960,   964,   968,
     972,   975,   978,   981,   984
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     125,     0,    -1,   125,   126,    -1,   126,    -1,   146,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   153,    -1,
     155,    -1,   156,    -1,   157,    -1,   158,    -1,   159,    -1,
     160,    -1,   161,    -1,   163,    -1,   162,    -1,   151,    -1,
     152,    -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,
     168,    -1,   169,    -1,   170,    -1,   171,    -1,   172,    -1,
     173,    -1,   174,    -1,   175,    -1,   176,    -1,   177,    -1,
     137,    -1,   138,    -1,   139,    -1,   136,    -1,   130,    -1,
     131,    -1,   132,    -1,   140,    -1,   141,    -1,   142,    -1,
     134,    -1,   135,    -1,   133,    -1,   143,    -1,   144,    -1,
     145,    -1,   178,    -1,   179,    -1,    -1,   117,    -1,    16,
      -1,    17,    -1,    32,    -1,    33,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,    79,
     181,   117,    -1,    78,   181,   117,    -1,    80,   117,    -1,
      81,   117,    -1,    88,   101,   117,    -1,    88,    47,   117,
      -1,    88,    17,   117,    -1,    88,    68,   117,    -1,    88,
      68,    98,   117,    -1,    88,   117,    -1,    96,   181,   117,
      -1,    64,   181,   117,    -1,    77,   117,    -1,    72,   127,
     117,    -1,    73,   127,   117,    -1,    74,   127,   117,    -1,
      82,   117,    -1,    82,    95,   117,    -1,    83,   117,    -1,
      83,    95,   117,    -1,    84,    69,   117,    -1,    84,    18,
     117,    -1,    84,   117,    -1,    84,    32,   181,   117,    -1,
      84,    86,   181,   117,    -1,    84,    87,   181,   117,    -1,
      84,    32,   181,   181,   117,    -1,    84,    86,   181,   181,
     117,    -1,    84,    87,   181,   181,   117,    -1,    85,   117,
      -1,    85,   181,   117,    -1,    89,    68,   117,    -1,    89,
      68,   181,   117,    -1,    89,    92,    68,   117,    -1,    89,
      92,    68,   181,   117,    -1,    93,   117,    -1,    94,   181,
     117,    -1,    18,   117,    -1,    19,   117,    -1,    19,    95,
     117,    -1,    19,    47,    95,   117,    -1,    19,    95,    95,
     117,    -1,    20,   117,    -1,    21,    66,   127,   117,    -1,
      21,    58,   118,   181,   117,    -1,    21,     4,   118,   181,
     117,    -1,    21,     3,   118,   181,   117,    -1,    21,     5,
     118,   181,   117,    -1,    21,     6,   118,   181,   117,    -1,
      21,     7,   118,   181,   117,    -1,    21,   105,   118,   181,
     117,    -1,    21,   106,   118,   181,   117,    -1,    21,   129,
     118,   181,   117,    -1,    24,   117,    -1,    24,   180,   119,
     180,   117,    -1,    25,   117,    -1,    25,   181,   117,    -1,
      25,    68,   117,    -1,    26,   117,    -1,    26,   181,   117,
      -1,    26,   111,   181,   117,    -1,    23,   117,    -1,    91,
     117,    -1,    91,    68,   117,    -1,    30,    26,   117,    -1,
      30,    34,   117,    -1,    30,    41,   154,   154,   117,    -1,
      30,    42,   154,   154,   117,    -1,    30,    43,   154,   154,
     117,    -1,    30,    44,   154,   154,   117,    -1,    30,    46,
     117,    -1,    30,    45,   117,    -1,    30,    15,   117,    -1,
      30,    48,   117,    -1,    30,    90,   117,    -1,    30,    90,
      68,   117,    -1,    30,   100,   117,    -1,    30,   100,   101,
     117,    -1,    30,   100,   101,    68,   117,    -1,    30,   100,
      68,   117,    -1,    30,   100,    68,    68,   117,    -1,    -1,
     181,    -1,   128,   117,    -1,    35,   117,    -1,    36,   117,
      -1,    37,   117,    -1,    38,   117,    -1,    39,   117,    -1,
      51,   117,    -1,    50,   117,    -1,    49,   117,    -1,    27,
      95,   117,    -1,    28,    95,   117,    -1,    29,    95,   117,
      -1,    31,   117,    -1,    52,    53,   181,   117,    -1,    52,
      53,   117,    -1,    52,   181,   117,    -1,    52,   117,    -1,
      55,    68,    68,   117,    -1,    56,    68,   181,   181,   117,
      -1,    57,   181,   181,   181,   117,    -1,    59,    60,   117,
      -1,    61,    62,   117,    -1,    61,    62,    95,   117,    -1,
      61,    63,   117,    -1,    66,   117,    -1,    66,   181,   117,
      -1,    66,   181,   181,   117,    -1,    66,    54,   117,    -1,
      66,    54,   181,   117,    -1,    66,    54,   181,   181,   117,
      -1,    66,    75,   117,    -1,    66,    65,   127,   117,    -1,
      66,    76,   118,    95,   117,    -1,    67,    69,   117,    -1,
      67,   101,   117,    -1,    70,   181,   117,    -1,    71,   181,
     181,   117,    -1,    97,    31,   117,    -1,    97,    18,   117,
      -1,    97,    19,   117,    -1,    97,    20,   117,    -1,    97,
      24,   117,    -1,    97,    25,   117,    -1,    97,    26,   117,
      -1,    97,    27,   117,    -1,    97,    28,   117,    -1,    97,
      29,   117,    -1,    97,    23,   117,    -1,    97,    80,   117,
      -1,    97,    81,   117,    -1,    97,    71,   117,    -1,    97,
      72,   117,    -1,    97,    73,   117,    -1,    97,    74,   117,
      -1,    97,    55,   117,    -1,    97,    77,   117,    -1,    97,
      79,   117,    -1,    97,    78,   117,    -1,    97,    82,   117,
      -1,    97,    83,   117,    -1,    97,    89,   117,    -1,    97,
      91,   117,    -1,    97,   128,   117,    -1,    97,    35,   117,
      -1,    97,    36,   117,    -1,    97,    37,   117,    -1,    97,
      38,   117,    -1,    97,    39,   117,    -1,    97,    51,   117,
      -1,    97,    50,   117,    -1,    97,    49,   117,    -1,    97,
      56,   117,    -1,    97,    57,   117,    -1,    97,    66,   117,
      -1,    97,    84,   117,    -1,    97,    85,   117,    -1,    97,
      52,   117,    -1,    97,    67,   117,    -1,    97,    21,   117,
      -1,    97,    96,   117,    -1,    97,    30,   117,    -1,    97,
      88,   117,    -1,    97,    99,   117,    -1,    97,    97,   117,
      -1,    97,   117,    -1,    99,   181,   117,    -1,    95,    -1,
      68,    -1,     4,    -1,     3,    -1,     5,    -1,     6,    -1,
       7,    -1,    14,    -1,   129,    -1,   104,    -1,   105,    -1,
     106,    -1,   180,   107,   180,    -1,   180,   108,   180,    -1,
     180,   111,   180,    -1,   180,   112,   180,    -1,   180,   102,
     180,    -1,   180,   103,   180,    -1,   180,   109,   180,    -1,
     180,   110,   180,    -1,   180,   113,   180,    -1,   120,   180,
      -1,   108,   180,    -1,   121,   180,   122,    -1,    95,    -1,
      68,    -1,     4,    -1,     3,    -1,     5,    -1,     6,    -1,
       7,    -1,    14,    -1,   129,    -1,   104,    -1,   105,    -1,
     106,    -1,   181,   119,   181,    -1,   181,   107,   181,    -1,
     181,   108,   181,    -1,   181,   111,   181,    -1,   181,   112,
     181,    -1,   181,   102,   181,    -1,   181,   103,   181,    -1,
     181,   109,   181,    -1,   181,   110,   181,    -1,   181,   113,
     181,    -1,   120,   181,    -1,   108,   181,    -1,   111,   181,
      -1,   123,   181,    -1,   121,   181,   122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   142,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   202,   203,   208,   209,   214,
     215,   216,   217,   218,   219,   224,   229,   237,   245,   253,
     258,   263,   268,   273,   278,   286,   294,   302,   310,   318,
     326,   334,   339,   347,   352,   360,   365,   370,   375,   380,
     385,   390,   395,   400,   405,   410,   418,   423,   428,   433,
     441,   449,   457,   465,   470,   475,   480,   488,   496,   501,
     506,   510,   514,   518,   522,   526,   530,   534,   541,   546,
     551,   556,   561,   566,   571,   576,   584,   592,   597,   605,
     610,   615,   620,   625,   630,   635,   640,   645,   650,   655,
     660,   665,   670,   675,   680,   685,   693,   694,   697,   705,
     713,   721,   729,   737,   745,   753,   761,   769,   777,   784,
     792,   800,   805,   810,   815,   823,   831,   839,   847,   855,
     860,   865,   873,   878,   883,   888,   893,   898,   903,   908,
     913,   921,   926,   934,   942,   950,   955,   960,   967,   972,
     977,   982,   987,   992,   997,  1002,  1007,  1012,  1017,  1022,
    1028,  1034,  1040,  1048,  1053,  1058,  1063,  1068,  1073,  1078,
    1083,  1088,  1093,  1098,  1103,  1108,  1113,  1118,  1123,  1128,
    1133,  1138,  1148,  1159,  1165,  1178,  1183,  1194,  1199,  1215,
    1231,  1241,  1246,  1254,  1273,  1274,  1275,  1276,  1277,  1278,
    1279,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,
    1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1302,  1303,
    1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1325,  1326,  1327,  1328
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BX_TOKEN_8BH_REG", "BX_TOKEN_8BL_REG",
  "BX_TOKEN_16B_REG", "BX_TOKEN_32B_REG", "BX_TOKEN_64B_REG",
  "BX_TOKEN_CS", "BX_TOKEN_ES", "BX_TOKEN_SS", "BX_TOKEN_DS",
  "BX_TOKEN_FS", "BX_TOKEN_GS", "BX_TOKEN_OPMASK_REG", "BX_TOKEN_FLAGS",
  "BX_TOKEN_ON", "BX_TOKEN_OFF", "BX_TOKEN_CONTINUE", "BX_TOKEN_STEPN",
  "BX_TOKEN_STEP_OVER", "BX_TOKEN_SET", "BX_TOKEN_DEBUGGER",
  "BX_TOKEN_LIST_BREAK", "BX_TOKEN_VBREAKPOINT", "BX_TOKEN_LBREAKPOINT",
  "BX_TOKEN_PBREAKPOINT", "BX_TOKEN_DEL_BREAKPOINT",
  "BX_TOKEN_ENABLE_BREAKPOINT", "BX_TOKEN_DISABLE_BREAKPOINT",
  "BX_TOKEN_INFO", "BX_TOKEN_QUIT", "BX_TOKEN_R", "BX_TOKEN_REGS",
  "BX_TOKEN_CPU", "BX_TOKEN_FPU", "BX_TOKEN_MMX", "BX_TOKEN_XMM",
  "BX_TOKEN_YMM", "BX_TOKEN_ZMM", "BX_TOKEN_AVX", "BX_TOKEN_IDT",
  "BX_TOKEN_IVT", "BX_TOKEN_GDT", "BX_TOKEN_LDT", "BX_TOKEN_TSS",
  "BX_TOKEN_TAB", "BX_TOKEN_ALL", "BX_TOKEN_LINUX", "BX_TOKEN_DEBUG_REGS",
  "BX_TOKEN_CONTROL_REGS", "BX_TOKEN_SEGMENT_REGS", "BX_TOKEN_EXAMINE",
  "BX_TOKEN_XFORMAT", "BX_TOKEN_DISFORMAT", "BX_TOKEN_RESTORE",
  "BX_TOKEN_WRITEMEM", "BX_TOKEN_SETPMEM", "BX_TOKEN_SYMBOLNAME",
  "BX_TOKEN_QUERY", "BX_TOKEN_PENDING", "BX_TOKEN_TAKE", "BX_TOKEN_DMA",
  "BX_TOKEN_IRQ", "BX_TOKEN_TLB", "BX_TOKEN_HEX", "BX_TOKEN_DISASM",
  "BX_TOKEN_INSTRUMENT", "BX_TOKEN_STRING", "BX_TOKEN_STOP",
  "BX_TOKEN_DOIT", "BX_TOKEN_CRC", "BX_TOKEN_TRACE", "BX_TOKEN_TRACEREG",
  "BX_TOKEN_TRACEMEM", "BX_TOKEN_SWITCH_MODE", "BX_TOKEN_SIZE",
  "BX_TOKEN_PTIME", "BX_TOKEN_TIMEBP_ABSOLUTE", "BX_TOKEN_TIMEBP",
  "BX_TOKEN_MODEBP", "BX_TOKEN_VMEXITBP", "BX_TOKEN_PRINT_STACK",
  "BX_TOKEN_BACKTRACE", "BX_TOKEN_WATCH", "BX_TOKEN_UNWATCH",
  "BX_TOKEN_READ", "BX_TOKEN_WRITE", "BX_TOKEN_SHOW",
  "BX_TOKEN_LOAD_SYMBOLS", "BX_TOKEN_SYMBOLS", "BX_TOKEN_LIST_SYMBOLS",
  "BX_TOKEN_GLOBAL", "BX_TOKEN_WHERE", "BX_TOKEN_PRINT_STRING",
  "BX_TOKEN_NUMERIC", "BX_TOKEN_PAGE", "BX_TOKEN_HELP", "BX_TOKEN_XML",
  "BX_TOKEN_CALC", "BX_TOKEN_DEVICE", "BX_TOKEN_GENERIC",
  "BX_TOKEN_RSHIFT", "BX_TOKEN_LSHIFT", "BX_TOKEN_REG_IP",
  "BX_TOKEN_REG_EIP", "BX_TOKEN_REG_RIP", "'+'", "'-'", "'|'", "'^'",
  "'*'", "'/'", "'&'", "INDIRECT", "NEG", "NOT", "'\\n'", "'='", "':'",
  "'!'", "'('", "')'", "'@'", "$accept", "commands", "command",
  "BX_TOKEN_TOGGLE_ON_OFF", "BX_TOKEN_REGISTERS", "BX_TOKEN_SEGREG",
  "timebp_command", "modebp_command", "vmexitbp_command", "show_command",
  "page_command", "tlb_command", "ptime_command", "trace_command",
  "trace_reg_command", "trace_mem_command", "print_stack_command",
  "backtrace_command", "watch_point_command", "symbol_command",
  "where_command", "print_string_command", "continue_command",
  "stepN_command", "step_over_command", "set_command",
  "breakpoint_command", "blist_command", "slist_command", "info_command",
  "optional_numeric", "regs_command", "fpu_regs_command",
  "mmx_regs_command", "xmm_regs_command", "ymm_regs_command",
  "zmm_regs_command", "segment_regs_command", "control_regs_command",
  "debug_regs_command", "delete_command", "bpe_command", "bpd_command",
  "quit_command", "examine_command", "restore_command", "writemem_command",
  "setpmem_command", "query_command", "take_command",
  "disassemble_command", "instrument_command", "doit_command",
  "crc_command", "help_command", "calc_command", "vexpression",
  "expression", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,    43,    45,   124,
      94,    42,    47,    38,   362,   363,   364,    10,    61,    58,
      33,    40,    41,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   129,   129,   129,   130,   130,   131,   132,   133,
     133,   133,   133,   133,   133,   134,   135,   136,   137,   138,
     139,   140,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   143,
     144,   145,   146,   147,   147,   147,   147,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   150,   150,   150,   150,   151,   152,   152,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   168,   168,   168,   169,   170,   171,   172,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   175,   175,   176,   177,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     2,     3,
       3,     3,     3,     4,     2,     3,     3,     2,     3,     3,
       3,     2,     3,     2,     3,     3,     3,     2,     4,     4,
       4,     5,     5,     5,     2,     3,     3,     4,     4,     5,
       2,     3,     2,     2,     3,     4,     4,     2,     4,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     2,     5,
       2,     3,     3,     2,     3,     4,     2,     2,     3,     3,
       3,     5,     5,     5,     5,     3,     3,     3,     3,     3,
       4,     3,     4,     5,     4,     5,     0,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     4,     3,     3,     2,     4,     5,     5,     3,     3,
       4,     3,     2,     3,     4,     3,     4,     5,     3,     4,
       5,     3,     3,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     3,     0,    39,
      40,    41,    47,    45,    46,    38,    35,    36,    37,    42,
      43,    44,    48,    49,    50,     4,     5,     6,     7,     8,
      19,    20,     9,    10,    11,    12,    13,    14,    15,    16,
      18,    17,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    51,    52,   102,     0,
       0,   103,   107,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,   126,
     237,   236,   238,   239,   240,   241,   235,   234,   243,   244,
     245,     0,   118,     0,     0,   242,     0,   261,   260,   262,
     263,   264,   265,   259,   258,   267,   268,   269,     0,     0,
     120,     0,     0,     0,   266,     0,   259,     0,   123,     0,
       0,     0,     0,     0,     0,     0,   146,   146,   146,   146,
       0,     0,     0,     0,     0,   160,   149,   150,   151,   152,
     153,   156,   155,   154,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,    55,    56,     0,     0,     0,    77,
       0,     0,    67,    68,     0,    81,     0,    83,     0,     0,
       0,     0,     0,    87,    94,     0,     0,     0,     0,     0,
      74,     0,     0,     0,   127,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   232,     0,     0,     1,     2,   148,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   256,   255,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   281,   282,   280,
       0,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,   282,   124,   157,   158,   159,   137,   129,
     130,   146,   147,   146,   146,   146,   136,   135,   138,     0,
     139,     0,     0,   141,   162,     0,   163,     0,     0,     0,
       0,     0,   168,     0,   169,   171,    76,   175,     0,     0,
     178,     0,   173,     0,   181,   182,   183,     0,    78,    79,
      80,    66,    65,    82,    84,    86,     0,    85,     0,     0,
      95,    71,    70,     0,    72,    69,    96,     0,     0,   128,
     101,    75,   186,   187,   188,   226,   195,   189,   190,   191,
     192,   193,   194,   228,   185,   211,   212,   213,   214,   215,
     218,   217,   216,   224,   202,   219,   220,   221,   225,   198,
     199,   200,   201,   203,   205,   204,   196,   197,   206,   207,
     222,   223,   229,   208,   209,   227,   231,   230,   210,   233,
     105,   106,     0,     0,     0,     0,     0,     0,   108,     0,
       0,     0,   257,   250,   251,   246,   247,   252,   253,   248,
     249,   254,     0,   284,   275,   276,   271,   272,   277,   278,
     273,   274,   279,   270,   125,     0,     0,     0,     0,   140,
       0,   144,     0,   142,   161,   165,     0,   272,   273,     0,
     170,   176,     0,   179,     0,   174,   184,    88,     0,    89,
       0,    90,     0,    73,    97,    98,     0,   111,   110,   112,
     113,   114,   109,   115,   116,   117,   119,   131,   132,   133,
     134,   145,   143,   166,   167,   177,   180,    91,    92,    93,
      99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,    57,   216,    58,   164,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
     351,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   146,   352
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -173
static const yytype_int16 yypact[] =
{
    1364,  -104,   -44,  -102,    52,   -79,  1174,   791,   811,   -52,
     -45,   -29,  1507,   -48,  -173,  -173,   -37,   -36,   -22,   -21,
     -18,   -16,   -13,   -11,   740,     4,    39,  1123,    48,    13,
    1123,   666,   -59,  1123,  1123,    62,    62,    62,    -8,  1123,
    1123,    -3,     7,   -77,   -76,    36,   861,    -1,   -57,   -47,
      15,  1123,  1123,  1447,  1123,  -173,  1281,  -173,    16,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,    20,
     -65,  -173,  -173,    28,    29,    31,    41,    55,  -173,  -173,
    -173,  -173,  -173,  -173,    56,    62,    58,    60,    71,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,    80,  -173,    80,    80,  -173,   247,  -173,  -173,  -173,
    -173,  -173,  -173,    19,  -173,  -173,  -173,  -173,  1123,  1123,
    -173,  1123,  1123,  1123,  -173,   265,  -173,  1123,  -173,   313,
      21,    33,    63,    73,    76,    77,  1123,  1123,  1123,  1123,
      78,    79,    81,   -46,   -19,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,   932,  -173,   379,    49,  1123,   598,
      82,   -64,    86,   445,   982,    62,    87,    89,  -173,   158,
      88,    91,   511,   598,  -173,  -173,   102,   103,   104,  -173,
     579,   656,  -173,  -173,   106,  -173,   110,  -173,   111,  1123,
     112,  1123,  1123,  -173,  -173,   730,   115,   116,   -69,   125,
    -173,  1002,   175,   127,  -173,  -173,   781,   851,   129,   130,
     131,   132,   134,   135,   137,   138,   139,   140,   141,   142,
     155,   159,   163,   168,   169,   170,   172,   174,   176,   177,
     178,   185,   189,   190,   191,   192,   193,   194,   195,   196,
     207,   217,   219,   234,   235,   236,   248,   252,   253,   262,
     263,   264,   266,   268,  -173,   269,   922,  -173,  -173,  -173,
     270,   271,  -173,  1123,  1123,  1123,  1123,  1123,  1123,   273,
    1123,  1123,  1123,  -173,  -173,   128,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,  -173,   126,   126,   126,
      18,   126,  1123,  1123,  1123,  1123,  1123,  1123,  1123,  1123,
    1123,  -173,  1123,  -105,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  1123,  1164,  1123,  1123,  1123,  -173,  -173,  -173,   276,
    -173,   -43,   -40,  -173,  -173,   972,  -173,   277,   598,  1123,
    1123,   598,  -173,   278,  -173,  -173,  -173,  -173,   334,   279,
    -173,   197,  -173,  1043,  -173,  -173,  -173,  1087,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,   400,  -173,   466,   532,
    -173,  -173,  -173,   280,  -173,  -173,  -173,  1100,  1053,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  1113,  1145,  1398,  1458,  1471,  1491,  -173,  1509,
    1522,  1535,  -173,  -173,  -173,    32,    32,    32,    32,  -173,
    -173,  -173,  1639,  -173,   126,   126,     0,     0,     0,     0,
     126,   126,   126,  1164,  -173,   281,   282,   283,   300,  -173,
     301,  -173,   302,  -173,  -173,  -173,  1548,   171,   126,  1561,
    -173,  -173,  1574,  -173,   310,  -173,  -173,  -173,  1587,  -173,
    1600,  -173,  1613,  -173,  -173,  -173,  1626,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,   232,   -28,   375,    -2,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -172,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -107,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -282
static const yytype_int16 yytable[] =
{
     165,   169,   128,   109,   145,   353,   354,   355,   217,   218,
     210,   241,   494,   108,   342,   112,   236,   196,   224,   226,
     199,   243,   359,   203,   209,   500,   212,   213,   502,   403,
     301,   373,   220,   221,   313,   242,   314,   315,   129,   235,
     225,   227,   211,   170,   246,   247,   237,   296,   404,   361,
     171,   110,   302,   374,   228,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   172,   238,   229,   185,
     244,   360,   197,   111,   501,   201,   202,   503,   214,   215,
     186,   187,   362,   130,   131,   132,   133,   134,   118,   119,
     120,   121,   122,   123,   135,   188,   189,   309,   363,   190,
     239,   191,   332,   333,   192,   230,   193,   198,   200,   219,
     124,   338,   339,   340,   222,   300,   240,   367,   125,   342,
     332,   333,   231,   232,   223,   334,   335,   336,   337,   338,
     339,   340,   245,   299,   316,   317,   326,   342,   345,   145,
     483,   145,   145,   322,   323,   324,   303,   304,   136,   305,
     346,   327,   328,   233,   329,   330,   331,   126,   127,   306,
     343,   147,   148,   149,   150,   151,   118,   119,   120,   121,
     122,   123,   152,   307,   308,   137,   310,   379,   311,   495,
     347,   496,   497,   498,   138,   139,   140,   365,   141,   312,
     348,   368,   371,   349,   350,   356,   357,   378,   358,   372,
     143,   144,   383,   375,   380,   384,   387,   381,   385,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   388,
     389,   390,   396,   393,   398,   399,   166,   394,   395,   397,
     316,   317,   401,   402,   407,   318,   319,   320,   321,   322,
     323,   324,   405,   408,   409,   342,   412,   413,   414,   415,
     472,   416,   417,   154,   418,   419,   420,   421,   422,   423,
     332,   333,   155,   156,   157,   334,   369,   336,   337,   370,
     339,   340,   424,  -281,  -281,   382,   425,   342,   161,   162,
     426,   163,  -281,  -281,  -281,   427,   428,   429,   298,   430,
     342,   431,   514,   432,   433,   434,   462,   463,   464,   465,
     466,   467,   435,   469,   470,   471,   436,   437,   438,   439,
     440,   441,   442,   443,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   444,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   445,   493,   446,   147,   148,   149,
     150,   151,   118,   119,   120,   121,   122,   123,   152,   316,
     317,   447,   448,   449,   318,   319,   320,   321,   322,   323,
     324,   506,   507,   508,   509,   450,   325,   332,   333,   451,
     452,   512,   334,   335,   336,   337,   338,   339,   340,   453,
     454,   455,   341,   456,   342,   457,   458,   460,   461,   518,
     468,   520,   522,   499,   505,   510,   513,   523,   537,   538,
     539,   526,   166,   147,   148,   149,   150,   151,   118,   119,
     120,   121,   122,   123,   152,   332,   333,   540,   541,   542,
     334,   335,   336,   337,   338,   339,   340,   546,   295,   154,
     344,     0,   342,     0,     0,     0,   332,   333,   155,   156,
     157,   334,   369,   336,   337,   370,   339,   340,     0,     0,
       0,   511,     0,   342,   161,   162,     0,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,   147,
     148,   149,   150,   151,   118,   119,   120,   121,   122,   123,
     152,   332,   333,     0,     0,     0,   334,   335,   336,   337,
     338,   339,   340,     0,     0,   154,   366,     0,   342,     0,
       0,     0,   332,   333,   155,   156,   157,   334,   369,   336,
     337,   370,   339,   340,     0,     0,     0,   517,     0,   342,
     161,   162,     0,   163,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,   147,   148,   149,   150,   151,
     118,   119,   120,   121,   122,   123,   152,   332,   333,     0,
       0,     0,   334,   335,   336,   337,   338,   339,   340,     0,
       0,   154,   376,     0,   342,     0,     0,     0,   332,   333,
     155,   156,   157,   334,   369,   336,   337,   370,   339,   340,
       0,     0,     0,   519,     0,   342,   161,   162,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   147,   148,   149,   150,   151,   118,   119,   120,   121,
     122,   123,   152,   332,   333,     0,     0,     0,   334,   335,
     336,   337,   338,   339,   340,     0,     0,   154,   386,     0,
     342,     0,     0,     0,   332,   333,   155,   156,   157,   334,
     369,   336,   337,   370,   339,   340,     0,     0,     0,   521,
       0,   342,   161,   162,     0,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,     0,     0,   147,
     148,   149,   150,   151,   118,   119,   120,   121,   122,   123,
     152,   332,   333,     0,     0,     0,   334,   335,   336,   337,
     338,   339,   340,   154,     0,     0,   391,     0,   342,     0,
     332,   333,   155,   156,   157,   334,   369,   336,   337,   370,
     339,   340,     0,     0,     0,     0,     0,   342,   161,   162,
     204,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,   166,     0,     0,     0,     0,     0,
       0,   206,   207,   147,   148,   149,   150,   151,   118,   119,
     120,   121,   122,   123,   152,     0,     0,     0,   332,   333,
       0,   154,     0,   334,   335,   336,   337,   338,   339,   340,
     155,   156,   157,   392,   158,   342,     0,   159,     0,     0,
       0,     0,     0,   208,     0,     0,   161,   162,     0,   163,
       0,     0,     0,   194,   147,   148,   149,   150,   151,   118,
     119,   120,   121,   122,   123,   152,     0,     0,   166,     0,
       0,     0,     0,     0,   147,   148,   149,   150,   151,   118,
     119,   120,   121,   122,   123,   152,     0,     0,     0,     0,
       0,     0,   332,   333,     0,   154,     0,   334,   335,   336,
     337,   338,   339,   340,   155,   156,   157,   400,   158,   342,
       0,   159,     0,     0,     0,     0,     0,   195,     0,   153,
     161,   162,     0,   163,   147,   148,   149,   150,   151,   118,
     119,   120,   121,   122,   123,   152,     0,     0,     0,   166,
       0,     0,     0,   332,   333,     0,   154,     0,   334,   335,
     336,   337,   338,   339,   340,   155,   156,   157,   410,   158,
     342,     0,   159,     0,     0,     0,   154,     0,   160,     0,
       0,   161,   162,     0,   163,   155,   156,   157,     0,   158,
       0,     0,   167,     0,     0,     0,     0,     0,   168,   166,
       0,   161,   162,     0,   163,   147,   148,   149,   150,   151,
     118,   119,   120,   121,   122,   123,   152,     0,     0,     0,
       0,     0,     0,   332,   333,     0,   154,     0,   334,   335,
     336,   337,   338,   339,   340,   155,   156,   157,   411,   158,
     342,     0,   159,     0,     0,     0,     0,     0,   234,     0,
       0,   161,   162,     0,   163,   147,   148,   149,   150,   151,
     118,   119,   120,   121,   122,   123,   152,     0,     0,     0,
     166,     0,     0,     0,     0,   147,   148,   149,   150,   151,
     118,   119,   120,   121,   122,   123,   152,     0,     0,     0,
       0,     0,     0,     0,   332,   333,     0,   154,     0,   334,
     335,   336,   337,   338,   339,   340,   155,   156,   157,   459,
     158,   342,     0,   159,     0,     0,     0,     0,     0,   364,
     166,     0,   161,   162,     0,   163,   147,   148,   149,   150,
     151,   118,   119,   120,   121,   122,   123,   152,     0,     0,
     166,     0,     0,     0,   332,   333,     0,   154,     0,   334,
     335,   336,   337,   338,   339,   340,   155,   156,   157,   504,
     158,   342,     0,   159,     0,     0,     0,   154,     0,   377,
       0,     0,   161,   162,     0,   163,   155,   156,   157,     0,
     158,     0,     0,   159,     0,     0,     0,     0,     0,   406,
       0,   166,   161,   162,     0,   163,   147,   148,   149,   150,
     151,   118,   119,   120,   121,   122,   123,   152,     0,     0,
       0,     0,     0,     0,     0,   332,   333,     0,   154,     0,
     334,   335,   336,   337,   338,   339,   340,   155,   156,   157,
     515,   158,   342,     0,   159,     0,     0,     0,     0,     0,
     525,     0,     0,   161,   162,     0,   163,   130,   131,   132,
     133,   134,   118,   119,   120,   121,   122,   123,   135,   332,
     333,   166,     0,     0,   334,   335,   336,   337,   338,   339,
     340,     0,   332,   333,   516,     0,   342,   334,   335,   336,
     337,   338,   339,   340,     0,   332,   333,   524,   154,   342,
     334,   335,   336,   337,   338,   339,   340,   155,   156,   157,
     527,   158,   342,     0,   159,     0,     0,     0,     0,     0,
       0,     0,   136,   161,   162,     0,   163,   332,   333,     0,
       0,     0,   334,   335,   336,   337,   338,   339,   340,     0,
       0,     0,   528,     0,   342,     0,   332,   333,     0,   137,
       0,   334,   335,   336,   337,   338,   339,   340,   138,   139,
     140,   297,   141,   342,     0,     0,     0,     0,     0,     0,
       0,   142,     0,     0,   143,   144,     0,     0,     0,     1,
       2,     3,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    23,    24,     0,     0,    25,    26,    27,     0,
      28,     0,    29,     0,     0,    30,     0,    31,    32,     0,
       0,    33,    34,    35,    36,    37,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,     0,    47,
      48,     0,    49,     0,    50,    51,     0,    52,    53,     0,
      54,     0,     1,     2,     3,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    55,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,    25,
      26,    27,     0,    28,     0,    29,     0,     0,    30,     0,
      31,    32,     0,     0,    33,    34,    35,    36,    37,     0,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,    47,    48,     0,    49,     0,    50,    51,     0,
      52,    53,     0,    54,     0,   248,   249,   250,   251,     0,
     252,   253,   254,   255,   256,   257,   258,   259,   260,    14,
      15,    55,   261,   262,   263,   264,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,   267,   268,   269,
     332,   333,   270,   271,   272,   334,   335,   336,   337,   338,
     339,   340,     0,   273,   274,   529,     0,   342,   275,   276,
     277,   278,   173,     0,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   174,     0,   288,   289,     0,   290,     0,
       0,   175,     0,   291,   292,     0,   293,     0,   176,   177,
     178,   179,   180,   181,     0,   182,     0,     0,     0,     0,
     332,   333,     0,     0,   294,   334,   335,   336,   337,   338,
     339,   340,     0,   332,   333,   530,     0,   342,   334,   335,
     336,   337,   338,   339,   340,     0,     0,     0,   531,     0,
     342,     0,     0,   332,   333,     0,     0,   183,   334,   335,
     336,   337,   338,   339,   340,     0,     0,   184,   532,     0,
     342,   332,   333,     0,     0,     0,   334,   335,   336,   337,
     338,   339,   340,     0,   332,   333,   533,     0,   342,   334,
     335,   336,   337,   338,   339,   340,     0,   332,   333,   534,
       0,   342,   334,   335,   336,   337,   338,   339,   340,     0,
     332,   333,   535,     0,   342,   334,   335,   336,   337,   338,
     339,   340,     0,   332,   333,   543,     0,   342,   334,   335,
     336,   337,   338,   339,   340,     0,   332,   333,   544,     0,
     342,   334,   335,   336,   337,   338,   339,   340,     0,   332,
     333,   545,     0,   342,   334,   335,   336,   337,   338,   339,
     340,     0,   332,   333,   547,     0,   342,   334,   335,   336,
     337,   338,   339,   340,     0,   332,   333,   548,     0,   342,
     334,   335,   336,   337,   338,   339,   340,     0,   332,   333,
     549,     0,   342,   334,   335,   336,   337,   338,   339,   340,
       0,   316,   317,   550,     0,   342,   318,   319,   320,   321,
     322,   323,   324,     0,     0,     0,   536
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-173)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,     8,     4,    47,     6,   177,   178,   179,    36,    37,
      69,    68,   117,   117,   119,   117,    17,    24,    95,    95,
      27,    68,    68,    30,    31,    68,    33,    34,    68,    98,
      95,    95,    39,    40,   141,    92,   143,   144,   117,    46,
     117,   117,   101,    95,    51,    52,    47,    54,   117,    68,
      95,    95,   117,   117,    18,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    95,    68,    32,   117,
     117,   117,    68,   117,   117,    62,    63,   117,    16,    17,
     117,   117,   101,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   117,   117,   125,   117,   117,
     101,   117,   102,   103,   117,    69,   117,    68,    60,   117,
      58,   111,   112,   113,   117,    95,   117,    68,    66,   119,
     102,   103,    86,    87,   117,   107,   108,   109,   110,   111,
     112,   113,   117,   117,   102,   103,   117,   119,   117,   141,
     122,   143,   144,   111,   112,   113,   118,   118,    68,   118,
     117,   158,   159,   117,   161,   162,   163,   105,   106,   118,
     167,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   118,   118,    95,   118,   205,   118,   351,
     117,   353,   354,   355,   104,   105,   106,   194,   108,   118,
     117,   198,   199,   117,   117,   117,   117,   204,   117,   117,
     120,   121,   209,   117,   117,   117,   213,   118,   117,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   117,
     117,   117,   229,   117,   231,   232,    68,   117,   117,   117,
     102,   103,   117,   117,   241,   107,   108,   109,   110,   111,
     112,   113,   117,    68,   117,   119,   117,   117,   117,   117,
     122,   117,   117,    95,   117,   117,   117,   117,   117,   117,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   117,   102,   103,   117,   117,   119,   120,   121,
     117,   123,   111,   112,   113,   117,   117,   117,    56,   117,
     119,   117,    95,   117,   117,   117,   303,   304,   305,   306,
     307,   308,   117,   310,   311,   312,   117,   117,   117,   117,
     117,   117,   117,   117,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   117,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   117,   342,   117,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   102,
     103,   117,   117,   117,   107,   108,   109,   110,   111,   112,
     113,   368,   369,   370,   371,   117,   119,   102,   103,   117,
     117,   378,   107,   108,   109,   110,   111,   112,   113,   117,
     117,   117,   117,   117,   119,   117,   117,   117,   117,   396,
     117,   398,   399,   117,   117,   117,   117,   117,   117,   117,
     117,   408,    68,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   102,   103,   117,   117,   117,
     107,   108,   109,   110,   111,   112,   113,   117,    53,    95,
     117,    -1,   119,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,   117,    -1,   119,   120,   121,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    95,   117,    -1,   119,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,   117,    -1,   119,
     120,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    95,   117,    -1,   119,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,   117,    -1,   119,   120,   121,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    95,   117,    -1,
     119,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,   117,
      -1,   119,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    95,    -1,    -1,   117,    -1,   119,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
      54,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,   102,   103,
      -1,    95,    -1,   107,   108,   109,   110,   111,   112,   113,
     104,   105,   106,   117,   108,   119,    -1,   111,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,   120,   121,    -1,   123,
      -1,    -1,    -1,    53,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    95,    -1,   107,   108,   109,
     110,   111,   112,   113,   104,   105,   106,   117,   108,   119,
      -1,   111,    -1,    -1,    -1,    -1,    -1,   117,    -1,    68,
     120,   121,    -1,   123,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    68,
      -1,    -1,    -1,   102,   103,    -1,    95,    -1,   107,   108,
     109,   110,   111,   112,   113,   104,   105,   106,   117,   108,
     119,    -1,   111,    -1,    -1,    -1,    95,    -1,   117,    -1,
      -1,   120,   121,    -1,   123,   104,   105,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,   117,    68,
      -1,   120,   121,    -1,   123,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    95,    -1,   107,   108,
     109,   110,   111,   112,   113,   104,   105,   106,   117,   108,
     119,    -1,   111,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,   120,   121,    -1,   123,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    95,    -1,   107,
     108,   109,   110,   111,   112,   113,   104,   105,   106,   117,
     108,   119,    -1,   111,    -1,    -1,    -1,    -1,    -1,   117,
      68,    -1,   120,   121,    -1,   123,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      68,    -1,    -1,    -1,   102,   103,    -1,    95,    -1,   107,
     108,   109,   110,   111,   112,   113,   104,   105,   106,   117,
     108,   119,    -1,   111,    -1,    -1,    -1,    95,    -1,   117,
      -1,    -1,   120,   121,    -1,   123,   104,   105,   106,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    68,   120,   121,    -1,   123,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    95,    -1,
     107,   108,   109,   110,   111,   112,   113,   104,   105,   106,
     117,   108,   119,    -1,   111,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,   120,   121,    -1,   123,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   102,
     103,    68,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   102,   103,   117,    -1,   119,   107,   108,   109,
     110,   111,   112,   113,    -1,   102,   103,   117,    95,   119,
     107,   108,   109,   110,   111,   112,   113,   104,   105,   106,
     117,   108,   119,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,   120,   121,    -1,   123,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,   117,    -1,   119,    -1,   102,   103,    -1,    95,
      -1,   107,   108,   109,   110,   111,   112,   113,   104,   105,
     106,     0,   108,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,    -1,   120,   121,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    -1,    -1,    55,    56,    57,    -1,
      59,    -1,    61,    -1,    -1,    64,    -1,    66,    67,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    88,
      89,    -1,    91,    -1,    93,    94,    -1,    96,    97,    -1,
      99,    -1,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,   117,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    -1,    55,
      56,    57,    -1,    59,    -1,    61,    -1,    -1,    64,    -1,
      66,    67,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    88,    89,    -1,    91,    -1,    93,    94,    -1,
      96,    97,    -1,    99,    -1,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,   117,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
     102,   103,    55,    56,    57,   107,   108,   109,   110,   111,
     112,   113,    -1,    66,    67,   117,    -1,   119,    71,    72,
      73,    74,    15,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    26,    -1,    88,    89,    -1,    91,    -1,
      -1,    34,    -1,    96,    97,    -1,    99,    -1,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,   117,   107,   108,   109,   110,   111,
     112,   113,    -1,   102,   103,   117,    -1,   119,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,   117,    -1,
     119,    -1,    -1,   102,   103,    -1,    -1,    90,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,   100,   117,    -1,
     119,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,   102,   103,   117,    -1,   119,   107,
     108,   109,   110,   111,   112,   113,    -1,   102,   103,   117,
      -1,   119,   107,   108,   109,   110,   111,   112,   113,    -1,
     102,   103,   117,    -1,   119,   107,   108,   109,   110,   111,
     112,   113,    -1,   102,   103,   117,    -1,   119,   107,   108,
     109,   110,   111,   112,   113,    -1,   102,   103,   117,    -1,
     119,   107,   108,   109,   110,   111,   112,   113,    -1,   102,
     103,   117,    -1,   119,   107,   108,   109,   110,   111,   112,
     113,    -1,   102,   103,   117,    -1,   119,   107,   108,   109,
     110,   111,   112,   113,    -1,   102,   103,   117,    -1,   119,
     107,   108,   109,   110,   111,   112,   113,    -1,   102,   103,
     117,    -1,   119,   107,   108,   109,   110,   111,   112,   113,
      -1,   102,   103,   117,    -1,   119,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,   117
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    19,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    35,    36,    37,    38,
      39,    49,    50,    51,    52,    55,    56,    57,    59,    61,
      64,    66,    67,    70,    71,    72,    73,    74,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    88,    89,    91,
      93,    94,    96,    97,    99,   117,   125,   126,   128,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   117,    47,
      95,   117,   117,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    58,    66,   105,   106,   129,   117,
       3,     4,     5,     6,     7,    14,    68,    95,   104,   105,
     106,   108,   117,   120,   121,   129,   180,     3,     4,     5,
       6,     7,    14,    68,    95,   104,   105,   106,   108,   111,
     117,   120,   121,   123,   129,   181,    68,   111,   117,   181,
      95,    95,    95,    15,    26,    34,    41,    42,    43,    44,
      45,    46,    48,    90,   100,   117,   117,   117,   117,   117,
     117,   117,   117,   117,    53,   117,   181,    68,    68,   181,
      60,    62,    63,   181,    54,    65,    75,    76,   117,   181,
      69,   101,   181,   181,    16,    17,   127,   127,   127,   117,
     181,   181,   117,   117,    95,   117,    95,   117,    18,    32,
      69,    86,    87,   117,   117,   181,    17,    47,    68,   101,
     117,    68,    92,    68,   117,   117,   181,   181,    18,    19,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    35,    36,    37,    38,    39,    49,    50,    51,    52,
      55,    56,    57,    66,    67,    71,    72,    73,    74,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    88,    89,
      91,    96,    97,    99,   117,   128,   181,     0,   126,   117,
      95,    95,   117,   118,   118,   118,   118,   118,   118,   127,
     118,   118,   118,   180,   180,   180,   102,   103,   107,   108,
     109,   110,   111,   112,   113,   119,   117,   181,   181,   181,
     181,   181,   102,   103,   107,   108,   109,   110,   111,   112,
     113,   117,   119,   181,   117,   117,   117,   117,   117,   117,
     117,   154,   181,   154,   154,   154,   117,   117,   117,    68,
     117,    68,   101,   117,   117,   181,   117,    68,   181,   108,
     111,   181,   117,    95,   117,   117,   117,   117,   181,   127,
     117,   118,   117,   181,   117,   117,   117,   181,   117,   117,
     117,   117,   117,   117,   117,   117,   181,   117,   181,   181,
     117,   117,   117,    98,   117,   117,   117,   181,    68,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   181,   181,   181,   181,   181,   181,   117,   181,
     181,   181,   122,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   122,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   117,   154,   154,   154,   154,   117,
      68,   117,    68,   117,   117,   117,   181,   181,   181,   181,
     117,   117,   181,   117,    95,   117,   117,   117,   181,   117,
     181,   117,   181,   117,   117,   117,   181,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 54:
/* Line 1792 of yacc.c  */
#line 197 "parser.y"
    {
      }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 204 "parser.y"
    { (yyval.bval)=(yyvsp[(1) - (1)].bval); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 210 "parser.y"
    { (yyval.sval)=(yyvsp[(1) - (1)].sval); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 220 "parser.y"
    { (yyval.uval)=(yyvsp[(1) - (1)].uval); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 225 "parser.y"
    {
          bx_dbg_timebp_command(0, (yyvsp[(2) - (3)].uval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 230 "parser.y"
    {
          bx_dbg_timebp_command(1, (yyvsp[(2) - (3)].uval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 238 "parser.y"
    {
          bx_dbg_modebp_command();
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 246 "parser.y"
    {
          bx_dbg_vmexitbp_command();
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 254 "parser.y"
    {
          bx_dbg_show_command((yyvsp[(2) - (3)].sval));
          free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 259 "parser.y"
    {
          bx_dbg_show_command("all");
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 264 "parser.y"
    {
          bx_dbg_show_command("off");
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 269 "parser.y"
    {
          bx_dbg_show_param_command((yyvsp[(2) - (3)].sval), 0);
          free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 274 "parser.y"
    {
          bx_dbg_show_param_command((yyvsp[(2) - (4)].sval), 1);
          free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); free((yyvsp[(3) - (4)].sval));
      }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 279 "parser.y"
    {
          bx_dbg_show_command(0);
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 287 "parser.y"
    {
          bx_dbg_xlate_address((yyvsp[(2) - (3)].uval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 295 "parser.y"
    {
          bx_dbg_tlb_lookup((yyvsp[(2) - (3)].uval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 303 "parser.y"
    {
          bx_dbg_ptime_command();
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 311 "parser.y"
    {
          bx_dbg_trace_command((yyvsp[(2) - (3)].bval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 319 "parser.y"
    {
          bx_dbg_trace_reg_command((yyvsp[(2) - (3)].bval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 327 "parser.y"
    {
          bx_dbg_trace_mem_command((yyvsp[(2) - (3)].bval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 335 "parser.y"
    {
          bx_dbg_print_stack_command(16);
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 340 "parser.y"
    {
          bx_dbg_print_stack_command((yyvsp[(2) - (3)].uval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 348 "parser.y"
    {
          dbg_printf("Backtrace: please type the depth desired!\n");
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 353 "parser.y"
    {
          bx_dbg_backtrace_command((yyvsp[(2) - (3)].uval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 361 "parser.y"
    {
          bx_dbg_watchpoint_continue(0);
          free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 366 "parser.y"
    {
          bx_dbg_watchpoint_continue(1);
          free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 371 "parser.y"
    {
          bx_dbg_print_watchpoints();
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 376 "parser.y"
    {
          bx_dbg_watch(0, (yyvsp[(3) - (4)].uval), 1); /* BX_READ */
          free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 381 "parser.y"
    {
          bx_dbg_watch(0, (yyvsp[(3) - (4)].uval), 1); /* BX_READ */
          free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 386 "parser.y"
    {
          bx_dbg_watch(1, (yyvsp[(3) - (4)].uval), 1); /* BX_WRITE */
          free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 391 "parser.y"
    {
          bx_dbg_watch(0, (yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval)); /* BX_READ */
          free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 396 "parser.y"
    {
          bx_dbg_watch(0, (yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval)); /* BX_READ */
          free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 401 "parser.y"
    {
          bx_dbg_watch(1, (yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval)); /* BX_WRITE */
          free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 406 "parser.y"
    {
          bx_dbg_unwatch_all();
          free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 411 "parser.y"
    {
          bx_dbg_unwatch((yyvsp[(2) - (3)].uval));
          free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 419 "parser.y"
    {
        bx_dbg_symbol_command((yyvsp[(2) - (3)].sval), 0, 0);
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 424 "parser.y"
    {
        bx_dbg_symbol_command((yyvsp[(2) - (4)].sval), 0, (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 429 "parser.y"
    {
        bx_dbg_symbol_command((yyvsp[(3) - (4)].sval), 1, 0);
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); free((yyvsp[(3) - (4)].sval));
      }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 434 "parser.y"
    {
        bx_dbg_symbol_command((yyvsp[(3) - (5)].sval), 1, (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval)); free((yyvsp[(3) - (5)].sval));
      }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 442 "parser.y"
    {
        bx_dbg_where_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 450 "parser.y"
    {
        bx_dbg_print_string_command((yyvsp[(2) - (3)].uval));
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 458 "parser.y"
    {
        bx_dbg_continue_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 466 "parser.y"
    {
        bx_dbg_stepN_command(dbg_cpu, 1);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 471 "parser.y"
    {
        bx_dbg_stepN_command(dbg_cpu, (yyvsp[(2) - (3)].uval));
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 476 "parser.y"
    {
        bx_dbg_stepN_command(-1, (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 481 "parser.y"
    {
        bx_dbg_stepN_command((yyvsp[(2) - (4)].uval), (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval));
      }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 489 "parser.y"
    {
        bx_dbg_step_over_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 497 "parser.y"
    {
        bx_dbg_set_auto_disassemble((yyvsp[(3) - (4)].bval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 502 "parser.y"
    {
        bx_dbg_set_symbol_command((yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 507 "parser.y"
    { 
        bx_dbg_set_reg8l_value((yyvsp[(2) - (5)].uval), (yyvsp[(4) - (5)].uval));
      }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 511 "parser.y"
    { 
        bx_dbg_set_reg8h_value((yyvsp[(2) - (5)].uval), (yyvsp[(4) - (5)].uval));
      }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 515 "parser.y"
    { 
        bx_dbg_set_reg16_value((yyvsp[(2) - (5)].uval), (yyvsp[(4) - (5)].uval));
      }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 519 "parser.y"
    { 
        bx_dbg_set_reg32_value((yyvsp[(2) - (5)].uval), (yyvsp[(4) - (5)].uval));
      }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 523 "parser.y"
    { 
        bx_dbg_set_reg64_value((yyvsp[(2) - (5)].uval), (yyvsp[(4) - (5)].uval));
      }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 527 "parser.y"
    { 
        bx_dbg_set_rip_value((yyvsp[(4) - (5)].uval));
      }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 531 "parser.y"
    { 
        bx_dbg_set_rip_value((yyvsp[(4) - (5)].uval));
      }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 535 "parser.y"
    { 
        bx_dbg_load_segreg((yyvsp[(2) - (5)].uval), (yyvsp[(4) - (5)].uval));
      }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 542 "parser.y"
    {
        bx_dbg_vbreakpoint_command(bkAtIP, 0, 0);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 547 "parser.y"
    {
        bx_dbg_vbreakpoint_command(bkRegular, (yyvsp[(2) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval));
      }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 552 "parser.y"
    {
        bx_dbg_lbreakpoint_command(bkAtIP, 0);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 557 "parser.y"
    {
        bx_dbg_lbreakpoint_command(bkRegular, (yyvsp[(2) - (3)].uval));
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 562 "parser.y"
    {
        bx_dbg_lbreakpoint_symbol_command((yyvsp[(2) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 567 "parser.y"
    {
        bx_dbg_pbreakpoint_command(bkAtIP, 0);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 572 "parser.y"
    {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[(2) - (3)].uval));
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 577 "parser.y"
    {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval));
      }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 585 "parser.y"
    {
        bx_dbg_info_bpoints_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 593 "parser.y"
    {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 598 "parser.y"
    {
        bx_dbg_info_symbols_command((yyvsp[(2) - (3)].sval));
        free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 606 "parser.y"
    {
        bx_dbg_info_bpoints_command();
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 611 "parser.y"
    {
        bx_dbg_info_registers_command(-1);
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 616 "parser.y"
    {
        bx_dbg_info_idt_command((yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 621 "parser.y"
    {
        bx_dbg_info_ivt_command((yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 626 "parser.y"
    {
        bx_dbg_info_gdt_command((yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 631 "parser.y"
    {
        bx_dbg_info_ldt_command((yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 636 "parser.y"
    {
        bx_dbg_dump_table();
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 641 "parser.y"
    {
        bx_dbg_info_tss_command();
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 646 "parser.y"
    {
        bx_dbg_info_flags();
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 651 "parser.y"
    {
        bx_dbg_info_linux_command();
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 656 "parser.y"
    {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 661 "parser.y"
    {
        bx_dbg_info_symbols_command((yyvsp[(3) - (4)].sval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); free((yyvsp[(3) - (4)].sval));
      }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 666 "parser.y"
    {
        bx_dbg_info_device("", "");
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 671 "parser.y"
    {
        bx_dbg_info_device((yyvsp[(3) - (4)].sval), "");
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 676 "parser.y"
    {
        bx_dbg_info_device((yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].sval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 681 "parser.y"
    {
        bx_dbg_info_device((yyvsp[(3) - (4)].sval), "");
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 686 "parser.y"
    {
        bx_dbg_info_device((yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].sval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 693 "parser.y"
    { (yyval.uval) = EMPTY_ARG; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 698 "parser.y"
    {
        bx_dbg_info_registers_command(BX_INFO_GENERAL_PURPOSE_REGS);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 706 "parser.y"
    {
        bx_dbg_info_registers_command(BX_INFO_FPU_REGS);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 714 "parser.y"
    {
        bx_dbg_info_registers_command(BX_INFO_MMX_REGS);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 722 "parser.y"
    {
        bx_dbg_info_registers_command(BX_INFO_SSE_REGS);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 730 "parser.y"
    {
        bx_dbg_info_registers_command(BX_INFO_YMM_REGS);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 738 "parser.y"
    {
        bx_dbg_info_registers_command(BX_INFO_ZMM_REGS);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 746 "parser.y"
    {
        bx_dbg_info_segment_regs_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 754 "parser.y"
    {
        bx_dbg_info_control_regs_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 762 "parser.y"
    {
        bx_dbg_info_debug_regs_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 770 "parser.y"
    {
        bx_dbg_del_breakpoint_command((yyvsp[(2) - (3)].uval));
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 778 "parser.y"
    {
        bx_dbg_en_dis_breakpoint_command((yyvsp[(2) - (3)].uval), 1);
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 785 "parser.y"
    {
        bx_dbg_en_dis_breakpoint_command((yyvsp[(2) - (3)].uval), 0);
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 793 "parser.y"
    {
        bx_dbg_quit_command();
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 801 "parser.y"
    {
        bx_dbg_examine_command((yyvsp[(1) - (4)].sval), (yyvsp[(2) - (4)].sval),1, (yyvsp[(3) - (4)].uval), 1);
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 806 "parser.y"
    {
        bx_dbg_examine_command((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval),1, 0, 0);
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 811 "parser.y"
    {
        bx_dbg_examine_command((yyvsp[(1) - (3)].sval), NULL,0, (yyvsp[(2) - (3)].uval), 1);
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 816 "parser.y"
    {
        bx_dbg_examine_command((yyvsp[(1) - (2)].sval), NULL,0, 0, 0);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 824 "parser.y"
    {
        bx_dbg_restore_command((yyvsp[(2) - (4)].sval), (yyvsp[(3) - (4)].sval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); free((yyvsp[(3) - (4)].sval));
      }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 832 "parser.y"
    {
        bx_dbg_writemem_command((yyvsp[(2) - (5)].sval), (yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 840 "parser.y"
    {
        bx_dbg_setpmem_command((yyvsp[(2) - (5)].uval), (yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval));
      }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 848 "parser.y"
    {
        bx_dbg_query_command((yyvsp[(2) - (3)].sval));
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 856 "parser.y"
    {
        bx_dbg_take_command((yyvsp[(2) - (3)].sval), 1);
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 861 "parser.y"
    {
        bx_dbg_take_command((yyvsp[(2) - (4)].sval), (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 866 "parser.y"
    {
        bx_dbg_take_command((yyvsp[(2) - (3)].sval), 1);
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 874 "parser.y"
    {
        bx_dbg_disassemble_current(NULL);
        free((yyvsp[(1) - (2)].sval));
      }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 879 "parser.y"
    {
        bx_dbg_disassemble_command(NULL, (yyvsp[(2) - (3)].uval), (yyvsp[(2) - (3)].uval));
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 884 "parser.y"
    {
        bx_dbg_disassemble_command(NULL, (yyvsp[(2) - (4)].uval), (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval));
      }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 889 "parser.y"
    {
        bx_dbg_disassemble_current((yyvsp[(2) - (3)].sval));
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 894 "parser.y"
    {
        bx_dbg_disassemble_command((yyvsp[(2) - (4)].sval), (yyvsp[(3) - (4)].uval), (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 899 "parser.y"
    {
        bx_dbg_disassemble_command((yyvsp[(2) - (5)].sval), (yyvsp[(3) - (5)].uval), (yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 904 "parser.y"
    {
        bx_dbg_disassemble_switch_mode();
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 909 "parser.y"
    {
        bx_dbg_disassemble_hex_mode_switch((yyvsp[(3) - (4)].bval));
        free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 914 "parser.y"
    {
        bx_dbg_set_disassemble_size((yyvsp[(4) - (5)].uval));
        free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval));
      }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 922 "parser.y"
    {
        bx_dbg_instrument_command((yyvsp[(2) - (3)].sval));
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 927 "parser.y"
    {
        bx_dbg_instrument_command((yyvsp[(2) - (3)].sval));
        free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 935 "parser.y"
    {
        bx_dbg_doit_command((yyvsp[(2) - (3)].uval));
        free((yyvsp[(1) - (3)].sval));
      }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 943 "parser.y"
    {
        bx_dbg_crc_command((yyvsp[(2) - (4)].uval), (yyvsp[(3) - (4)].uval));
        free((yyvsp[(1) - (4)].sval));
      }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 951 "parser.y"
    {
         dbg_printf("q|quit|exit - quit debugger and emulator execution\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 956 "parser.y"
    {
         dbg_printf("c|cont|continue - continue executing\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 961 "parser.y"
    {
         dbg_printf("s|step [count] - execute #count instructions on current processor (default is one instruction)\n");
         dbg_printf("s|step [cpu] <count> - execute #count instructions on processor #cpu\n");
         dbg_printf("s|step all <count> - execute #count instructions on all the processors\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 968 "parser.y"
    {
         dbg_printf("n|next|p - execute instruction stepping over subroutines\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 973 "parser.y"
    {
         dbg_printf("vb|vbreak <seg:offset> - set a virtual address instruction breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 978 "parser.y"
    {
         dbg_printf("lb|lbreak <addr> - set a linear address instruction breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 983 "parser.y"
    {
         dbg_printf("p|pb|break|pbreak <addr> - set a physical address instruction breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 988 "parser.y"
    {
         dbg_printf("d|del|delete <n> - delete a breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 993 "parser.y"
    {
         dbg_printf("bpe <n> - enable a breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 998 "parser.y"
    {
         dbg_printf("bpd <n> - disable a breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 1003 "parser.y"
    {
         dbg_printf("blist - list all breakpoints (same as 'info break')\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 1008 "parser.y"
    {
         dbg_printf("modebp - toggles mode switch breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 1013 "parser.y"
    {
         dbg_printf("vmexitbp - toggles VMEXIT switch breakpoint\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 1018 "parser.y"
    {
         dbg_printf("crc <addr1> <addr2> - show CRC32 for physical memory range addr1..addr2\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 1023 "parser.y"
    {
         dbg_printf("trace on  - print disassembly for every executed instruction\n");
         dbg_printf("trace off - disable instruction tracing\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 1029 "parser.y"
    {
         dbg_printf("trace-reg on  - print all registers before every executed instruction\n");
         dbg_printf("trace-reg off - disable registers state tracing\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 1035 "parser.y"
    {
         dbg_printf("trace-mem on  - print all memory accesses occured during instruction execution\n");
         dbg_printf("trace-mem off - disable memory accesses tracing\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 1041 "parser.y"
    {
         dbg_printf("restore <param_name> [path] - restore bochs root param from the file\n");
         dbg_printf("for example:\n");
         dbg_printf("restore \"cpu0\" - restore CPU #0 from file \"cpu0\" in current directory\n");
         dbg_printf("restore \"cpu0\" \"/save\" - restore CPU #0 from file \"cpu0\" located in directory \"/save\"\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 1049 "parser.y"
    {
         dbg_printf("ptime - print current time (number of ticks since start of simulation)\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 1054 "parser.y"
    {
         dbg_printf("sb <delta> - insert a time breakpoint delta instructions into the future\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 1059 "parser.y"
    {
         dbg_printf("sba <time> - insert breakpoint at specific time\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 1064 "parser.y"
    {
         dbg_printf("print-stack [num_words] - print the num_words top 16 bit words on the stack\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 1069 "parser.y"
    {
         dbg_printf("backtrace <depth> - print the backtrace based on depth\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 1074 "parser.y"
    {
         dbg_printf("ldsym [global] <filename> [offset] - load symbols from file\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 1079 "parser.y"
    {
         dbg_printf("slist [string] - list symbols whose preffix is string (same as 'info symbols')\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 1084 "parser.y"
    {
         dbg_printf("r|reg|regs|registers - list of CPU registers and their contents (same as 'info registers')\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 1089 "parser.y"
    {
         dbg_printf("fp|fpu - print FPU state\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 1094 "parser.y"
    {
         dbg_printf("mmx - print MMX state\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 1099 "parser.y"
    {
         dbg_printf("xmm|sse - print SSE state\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 1104 "parser.y"
    {
         dbg_printf("ymm - print AVX state\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 1109 "parser.y"
    {
         dbg_printf("zmm - print AVX-512 state\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 1114 "parser.y"
    {
         dbg_printf("sreg - show segment registers\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 1119 "parser.y"
    {
         dbg_printf("creg - show control registers\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 1124 "parser.y"
    {
         dbg_printf("dreg - show debug registers\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 1129 "parser.y"
    {
         dbg_printf("writemem <filename> <laddr> <len> - dump 'len' bytes of virtual memory starting from the linear address 'laddr' into the file\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 1134 "parser.y"
    {
         dbg_printf("setpmem <addr> <datasize> <val> - set physical memory location of size 'datasize' to value 'val'\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 1139 "parser.y"
    {
         dbg_printf("u|disasm [/count] <start> <end> - disassemble instructions for given linear address\n");
         dbg_printf("    Optional 'count' is the number of disassembled instructions\n");
         dbg_printf("u|disasm switch-mode - switch between Intel and AT&T disassembler syntax\n");
         dbg_printf("u|disasm hex on/off - control disasm offsets and displacements format\n");
         dbg_printf("u|disasm size = n - tell debugger what segment size [16|32|64] to use\n");
         dbg_printf("       when \"disassemble\" command is used.\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 1149 "parser.y"
    {
         dbg_printf("watch - print current watch point status\n");
         dbg_printf("watch stop - stop simulation when a watchpoint is encountred\n");
         dbg_printf("watch continue - do not stop the simulation when watch point is encountred\n");
         dbg_printf("watch r|read addr - insert a read watch point at physical address addr\n");
         dbg_printf("watch w|write addr - insert a write watch point at physical address addr\n");
         dbg_printf("watch r|read addr <len> - insert a read watch point at physical address addr with range <len>\n");
         dbg_printf("watch w|write addr <len> - insert a write watch point at physical address addr with range <len>\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 1160 "parser.y"
    {
         dbg_printf("unwatch      - remove all watch points\n");
         dbg_printf("unwatch addr - remove a watch point\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 1166 "parser.y"
    {
         dbg_printf("x  /nuf <addr> - examine memory at linear address\n");
         dbg_printf("xp /nuf <addr> - examine memory at physical address\n");
         dbg_printf("    nuf is a sequence of numbers (how much values to display)\n");
         dbg_printf("    and one or more of the [mxduotcsibhwg] format specificators:\n");
         dbg_printf("    x,d,u,o,t,c,s,i select the format of the output (they stand for\n");
         dbg_printf("        hex, decimal, unsigned, octal, binary, char, asciiz, instr)\n");
         dbg_printf("    b,h,w,g select the size of a data element (for byte, half-word,\n");
         dbg_printf("        word and giant word)\n");
         dbg_printf("    m selects an alternative output format (memory dump)\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 1179 "parser.y"
    {
         dbg_printf("instrument <command> - calls BX_INSTR_DEBUG_CMD instrumentation callback with <command>\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 1184 "parser.y"
    {
         dbg_printf("set <regname> = <expr> - set register value to expression\n");
         dbg_printf("set eflags = <expr> - set eflags value to expression, not all flags can be modified\n");
         dbg_printf("set $cpu = <N> - move debugger control to cpu <N> in SMP simulation\n");
         dbg_printf("set $auto_disassemble = 1 - cause debugger to disassemble current instruction\n");
         dbg_printf("       every time execution stops\n");
         dbg_printf("set u|disasm|disassemble on  - same as 'set $auto_disassemble = 1'\n");
         dbg_printf("set u|disasm|disassemble off - same as 'set $auto_disassemble = 0'\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 1195 "parser.y"
    {
         dbg_printf("page <laddr> - show linear to physical xlation for linear address laddr\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 1200 "parser.y"
    {
         dbg_printf("info break - show information about current breakpoint status\n");
         dbg_printf("info cpu - show dump of all cpu registers\n");
         dbg_printf("info idt - show interrupt descriptor table\n");
         dbg_printf("info ivt - show interrupt vector table\n");
         dbg_printf("info gdt - show global descriptor table\n");
         dbg_printf("info tss - show current task state segment\n");
         dbg_printf("info tab - show page tables\n");
         dbg_printf("info eflags - show decoded EFLAGS register\n");
         dbg_printf("info symbols [string] - list symbols whose prefix is string\n");
         dbg_printf("info device - show list of devices supported by this command\n");
         dbg_printf("info device [string] - show state of device specified in string\n");
         dbg_printf("info device [string] [string] - show state of device with options\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 1216 "parser.y"
    {
         dbg_printf("show <command> - toggles show symbolic info (calls to begin with)\n");
         dbg_printf("show - shows current show mode\n");
         dbg_printf("show mode - show, when processor switch mode\n");
         dbg_printf("show int - show, when an interrupt happens\n");
         dbg_printf("show softint - show, when software interrupt happens\n");
         dbg_printf("show extint - show, when external interrupt happens\n");
         dbg_printf("show call - show, when call is happens\n");
         dbg_printf("show iret - show, when iret is happens\n");
         dbg_printf("show all - turns on all symbolic info\n");
         dbg_printf("show off - turns off symbolic info\n");
         dbg_printf("show dbg_all - turn on all bx_dbg flags\n");
         dbg_printf("show dbg_none - turn off all bx_dbg flags\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 1232 "parser.y"
    {
         dbg_printf("calc|? <expr> - calculate a expression and display the result.\n");
         dbg_printf("    'expr' can reference any general-purpose, opmask and segment\n");
         dbg_printf("    registers, use any arithmetic and logic operations, and\n");
         dbg_printf("    also the special ':' operator which computes the linear\n");
         dbg_printf("    address of a segment:offset (in real and v86 mode) or of\n");
         dbg_printf("    a selector:offset (in protected mode) pair.\n");
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 1242 "parser.y"
    {
         bx_dbg_print_help();
         free((yyvsp[(1) - (3)].sval));free((yyvsp[(2) - (3)].sval));
       }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 1247 "parser.y"
    {
         bx_dbg_print_help();
         free((yyvsp[(1) - (2)].sval));
       }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 1255 "parser.y"
    {
     bx_dbg_calc_command((yyvsp[(2) - (3)].uval));
     free((yyvsp[(1) - (3)].sval));
   }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 1273 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (1)].uval); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 1274 "parser.y"
    { (yyval.uval) = bx_dbg_get_symbol_value((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval));}
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 1275 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg8l_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 1276 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg8h_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 1277 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg16_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 1278 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg32_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 1279 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg64_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 1280 "parser.y"
    { (yyval.uval) = bx_dbg_get_opmask_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 1281 "parser.y"
    { (yyval.uval) = bx_dbg_get_selector_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 1282 "parser.y"
    { (yyval.uval) = bx_dbg_get_ip (); }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 1283 "parser.y"
    { (yyval.uval) = bx_dbg_get_eip(); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 1284 "parser.y"
    { (yyval.uval) = bx_dbg_get_instruction_pointer(); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 1285 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) + (yyvsp[(3) - (3)].uval); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 1286 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) - (yyvsp[(3) - (3)].uval); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 1287 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) * (yyvsp[(3) - (3)].uval); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 1288 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) / (yyvsp[(3) - (3)].uval); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 1289 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) >> (yyvsp[(3) - (3)].uval); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 1290 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) << (yyvsp[(3) - (3)].uval); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 1291 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) | (yyvsp[(3) - (3)].uval); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 1292 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) ^ (yyvsp[(3) - (3)].uval); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 1293 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) & (yyvsp[(3) - (3)].uval); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 1294 "parser.y"
    { (yyval.uval) = !(yyvsp[(2) - (2)].uval); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 1295 "parser.y"
    { (yyval.uval) = -(yyvsp[(2) - (2)].uval); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 1296 "parser.y"
    { (yyval.uval) = (yyvsp[(2) - (3)].uval); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 1302 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (1)].uval); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 1303 "parser.y"
    { (yyval.uval) = bx_dbg_get_symbol_value((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval));}
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 1304 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg8l_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 1305 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg8h_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 1306 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg16_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 1307 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg32_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 1308 "parser.y"
    { (yyval.uval) = bx_dbg_get_reg64_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 1309 "parser.y"
    { (yyval.uval) = bx_dbg_get_opmask_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 1310 "parser.y"
    { (yyval.uval) = bx_dbg_get_selector_value((yyvsp[(1) - (1)].uval)); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 1311 "parser.y"
    { (yyval.uval) = bx_dbg_get_ip (); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 1312 "parser.y"
    { (yyval.uval) = bx_dbg_get_eip(); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 1313 "parser.y"
    { (yyval.uval) = bx_dbg_get_instruction_pointer(); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 1314 "parser.y"
    { (yyval.uval) = bx_dbg_get_laddr ((yyvsp[(1) - (3)].uval), (yyvsp[(3) - (3)].uval)); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 1315 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) + (yyvsp[(3) - (3)].uval); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 1316 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) - (yyvsp[(3) - (3)].uval); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 1317 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) * (yyvsp[(3) - (3)].uval); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 1318 "parser.y"
    { (yyval.uval) = ((yyvsp[(3) - (3)].uval) != 0) ? (yyvsp[(1) - (3)].uval) / (yyvsp[(3) - (3)].uval) : 0; }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 1319 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) >> (yyvsp[(3) - (3)].uval); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 1320 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) << (yyvsp[(3) - (3)].uval); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 1321 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) | (yyvsp[(3) - (3)].uval); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 1322 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) ^ (yyvsp[(3) - (3)].uval); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 1323 "parser.y"
    { (yyval.uval) = (yyvsp[(1) - (3)].uval) & (yyvsp[(3) - (3)].uval); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 1324 "parser.y"
    { (yyval.uval) = !(yyvsp[(2) - (2)].uval); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 1325 "parser.y"
    { (yyval.uval) = -(yyvsp[(2) - (2)].uval); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 1326 "parser.y"
    { (yyval.uval) = bx_dbg_lin_indirect((yyvsp[(2) - (2)].uval)); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 1327 "parser.y"
    { (yyval.uval) = bx_dbg_phy_indirect((yyvsp[(2) - (2)].uval)); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 1328 "parser.y"
    { (yyval.uval) = (yyvsp[(2) - (3)].uval); }
    break;


/* Line 1792 of yacc.c  */
#line 4254 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 1331 "parser.y"

#endif  /* if BX_DEBUGGER */
/* The #endif is appended by the makefile after running yacc. */
