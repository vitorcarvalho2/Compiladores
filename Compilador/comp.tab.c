/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "comp.y"


#include "nodesC.h"

int yyerror(const char *s);
int yylex(void);
int errorcount =0;
extern int force_print_tree;

#line 81 "comp.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "comp.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_IDENT = 3,                  /* TOK_IDENT  */
  YYSYMBOL_TOK_PRINT = 4,                  /* TOK_PRINT  */
  YYSYMBOL_TOK_FLOAT = 5,                  /* TOK_FLOAT  */
  YYSYMBOL_TOK_INT = 6,                    /* TOK_INT  */
  YYSYMBOL_TOK_SCAN = 7,                   /* TOK_SCAN  */
  YYSYMBOL_TOK_FOR = 8,                    /* TOK_FOR  */
  YYSYMBOL_TOK_IF = 9,                     /* TOK_IF  */
  YYSYMBOL_TOK_CHAR = 10,                  /* TOK_CHAR  */
  YYSYMBOL_TOK_STRING = 11,                /* TOK_STRING  */
  YYSYMBOL_TOK_ELSE = 12,                  /* TOK_ELSE  */
  YYSYMBOL_TOK_DIFFERENT = 13,             /* TOK_DIFFERENT  */
  YYSYMBOL_TOK_EQUALS = 14,                /* TOK_EQUALS  */
  YYSYMBOL_TOK_FROM_TO = 15,               /* TOK_FROM_TO  */
  YYSYMBOL_TOK_INT_ID = 16,                /* TOK_INT_ID  */
  YYSYMBOL_TOK_CHAR_ID = 17,               /* TOK_CHAR_ID  */
  YYSYMBOL_TOK_FLOAT_ID = 18,              /* TOK_FLOAT_ID  */
  YYSYMBOL_TOK_STRING_ID = 19,             /* TOK_STRING_ID  */
  YYSYMBOL_TOK_BOOL_ID = 20,               /* TOK_BOOL_ID  */
  YYSYMBOL_TOK_TRUE = 21,                  /* TOK_TRUE  */
  YYSYMBOL_TOK_FALSE = 22,                 /* TOK_FALSE  */
  YYSYMBOL_TOK_AND = 23,                   /* TOK_AND  */
  YYSYMBOL_TOK_OR = 24,                    /* TOK_OR  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* '('  */
  YYSYMBOL_28_ = 28,                       /* ')'  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* '+'  */
  YYSYMBOL_32_ = 32,                       /* '-'  */
  YYSYMBOL_33_ = 33,                       /* '*'  */
  YYSYMBOL_34_ = 34,                       /* '/'  */
  YYSYMBOL_35_ = 35,                       /* '<'  */
  YYSYMBOL_36_ = 36,                       /* '>'  */
  YYSYMBOL_37_ = 37,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_program = 39,                   /* program  */
  YYSYMBOL_globals = 40,                   /* globals  */
  YYSYMBOL_declaration = 41,               /* declaration  */
  YYSYMBOL_attribution = 42,               /* attribution  */
  YYSYMBOL_global = 43,                    /* global  */
  YYSYMBOL_decide = 44,                    /* decide  */
  YYSYMBOL_loop = 45,                      /* loop  */
  YYSYMBOL_expr = 46,                      /* expr  */
  YYSYMBOL_term = 47,                      /* term  */
  YYSYMBOL_factor = 48,                    /* factor  */
  YYSYMBOL_unary = 49,                     /* unary  */
  YYSYMBOL_expr_log = 50,                  /* expr_log  */
  YYSYMBOL_term_log = 51,                  /* term_log  */
  YYSYMBOL_factor_log = 52,                /* factor_log  */
  YYSYMBOL_unary_log = 53,                 /* unary_log  */
  YYSYMBOL_tok_id = 54,                    /* tok_id  */
  YYSYMBOL_var = 55                        /* var  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  98

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,     2,     2,     2,
      27,    28,    33,    31,     2,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
      35,    25,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    76,    81,    88,    92,    97,   102,   106,
     110,   114,   118,   122,   127,   131,   135,   139,   143,   147,
     151,   155,   159,   163,   167,   171,   175,   179,   183,   187,
     191,   196,   200,   204,   208,   212,   216,   220,   224,   228,
     232,   236,   240,   244,   251,   255,   259,   263,   267,   272,
     276
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_IDENT",
  "TOK_PRINT", "TOK_FLOAT", "TOK_INT", "TOK_SCAN", "TOK_FOR", "TOK_IF",
  "TOK_CHAR", "TOK_STRING", "TOK_ELSE", "TOK_DIFFERENT", "TOK_EQUALS",
  "TOK_FROM_TO", "TOK_INT_ID", "TOK_CHAR_ID", "TOK_FLOAT_ID",
  "TOK_STRING_ID", "TOK_BOOL_ID", "TOK_TRUE", "TOK_FALSE", "TOK_AND",
  "TOK_OR", "'='", "';'", "'('", "')'", "'{'", "'}'", "'+'", "'-'", "'*'",
  "'/'", "'<'", "'>'", "'!'", "$accept", "program", "globals",
  "declaration", "attribution", "global", "decide", "loop", "expr", "term",
  "factor", "unary", "expr_log", "term_log", "factor_log", "unary_log",
  "tok_id", "var", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,    -9,     3,     5,    17,    51,   -78,   -78,   -78,   -78,
     -78,    59,   125,   -78,   -78,   -78,   -78,   -78,    73,   -78,
     100,     4,     8,    -1,   -78,   -78,    56,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   100,   100,    23,     9,   -78,
     -78,    54,    66,   -78,   -78,    72,    -1,    57,    -5,    74,
     -78,   -78,   100,    32,   -78,   -78,   100,   100,   100,   100,
      69,    70,     8,   -78,   100,   100,   100,   100,    -1,    75,
      -1,    30,   -78,     9,     9,   -78,   -78,   -78,   -78,    80,
      41,    41,    41,    41,    74,   145,   -78,   -78,    84,    21,
     145,    97,    49,    85,   -78,   145,    82,   -78
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    44,    46,    45,    48,
      47,     0,     0,    10,    11,     4,     9,    12,     0,     8,
       0,     0,     0,     0,     1,     3,     0,    24,    26,    25,
      31,    27,    28,    29,    30,     0,     0,     0,    19,    22,
      32,     0,     0,    50,    49,     0,     0,     0,     0,    35,
      37,    42,     0,     0,    33,     6,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    17,    18,    20,    21,     7,    13,     0,
      40,    41,    38,    39,    34,     0,    36,     5,     0,     0,
       0,    14,     0,     0,    16,     0,     0,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,   -77,   -78,   -78,   -12,   -78,   -78,   -19,    18,
     -24,   -78,   -78,    47,   -43,   -78,   -78,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    15,    16,    17,    47,    38,
      39,    40,    48,    49,    50,    51,    18,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      25,    37,    27,    63,    28,    29,    30,    41,    89,    31,
      32,    43,    54,    92,    44,    42,    53,    19,    96,    68,
      33,    34,     1,    69,     2,     3,    35,    86,    20,     4,
       5,    36,    21,    71,    75,    76,    46,     6,     7,     8,
       9,    10,    58,    59,    22,    80,    81,    82,    83,    55,
       1,    91,     2,     3,    56,    57,    87,     4,     5,    24,
      72,    56,    57,    56,    57,     6,     7,     8,     9,    10,
      64,    65,    56,    57,    73,    74,    26,    25,    23,    94,
      25,    52,    60,     1,    25,     2,     3,    62,    56,    57,
       4,     5,    66,    67,    61,    77,    78,    70,     6,     7,
       8,     9,    10,    27,    85,    28,    29,    30,    88,    93,
      31,    32,    97,    90,    95,    84,     0,    79,     0,     0,
       0,    33,    34,     0,     0,    -2,     1,    35,     2,     3,
       0,     0,    36,     4,     5,     0,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,     1,     0,     2,     3,
       0,     0,     0,     4,     5,     0,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10
};

static const yytype_int8 yycheck[] =
{
      12,    20,     3,    46,     5,     6,     7,     3,    85,    10,
      11,     3,    36,    90,     6,    11,    35,    26,    95,    24,
      21,    22,     1,    28,     3,     4,    27,    70,    25,     8,
       9,    32,    27,    52,    58,    59,    37,    16,    17,    18,
      19,    20,    33,    34,    27,    64,    65,    66,    67,    26,
       1,    30,     3,     4,    31,    32,    26,     8,     9,     0,
      28,    31,    32,    31,    32,    16,    17,    18,    19,    20,
      13,    14,    31,    32,    56,    57,     3,    89,    27,    30,
      92,    25,    28,     1,    96,     3,     4,    15,    31,    32,
       8,     9,    35,    36,    28,    26,    26,    23,    16,    17,
      18,    19,    20,     3,    29,     5,     6,     7,    28,    12,
      10,    11,    30,    29,    29,    68,    -1,    62,    -1,    -1,
      -1,    21,    22,    -1,    -1,     0,     1,    27,     3,     4,
      -1,    -1,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,     1,    -1,     3,     4,
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     8,     9,    16,    17,    18,    19,
      20,    39,    40,    41,    42,    43,    44,    45,    54,    26,
      25,    27,    27,    27,     0,    43,     3,     3,     5,     6,
       7,    10,    11,    21,    22,    27,    32,    46,    47,    48,
      49,     3,    11,     3,     6,    55,    37,    46,    50,    51,
      52,    53,    25,    46,    48,    26,    31,    32,    33,    34,
      28,    28,    15,    52,    13,    14,    35,    36,    24,    28,
      23,    46,    28,    47,    47,    48,    48,    26,    26,    55,
      46,    46,    46,    46,    51,    29,    52,    26,    28,    40,
      29,    30,    40,    12,    30,    29,    40,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    42,    43,    43,    43,
      43,    43,    43,    43,    44,    44,    45,    46,    46,    46,
      47,    47,    47,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    50,    50,    51,    51,    52,    52,
      52,    52,    52,    53,    54,    54,    54,    54,    54,    55,
      55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     5,     4,     5,     2,     1,
       1,     1,     1,     5,     7,    11,     9,     3,     3,     1,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     3,     1,     3,     3,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_TOK_IDENT: /* TOK_IDENT  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 815 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_FLOAT: /* TOK_FLOAT  */
#line 54 "comp.y"
         { fprintf(yyo, "%f", ((*yyvaluep).flt));}
#line 821 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_INT: /* TOK_INT  */
#line 53 "comp.y"
         { fprintf(yyo, "%d", ((*yyvaluep).itg));}
#line 827 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_SCAN: /* TOK_SCAN  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 833 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_CHAR: /* TOK_CHAR  */
#line 55 "comp.y"
         { fprintf(yyo, "%c", ((*yyvaluep).chr));}
#line 839 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_STRING: /* TOK_STRING  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 845 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_DIFFERENT: /* TOK_DIFFERENT  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 851 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_EQUALS: /* TOK_EQUALS  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 857 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_TRUE: /* TOK_TRUE  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 863 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_FALSE: /* TOK_FALSE  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 869 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_AND: /* TOK_AND  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 875 "comp.tab.c"
        break;

    case YYSYMBOL_TOK_OR: /* TOK_OR  */
#line 52 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).str));}
#line 881 "comp.tab.c"
        break;

    case YYSYMBOL_globals: /* globals  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 887 "comp.tab.c"
        break;

    case YYSYMBOL_declaration: /* declaration  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 893 "comp.tab.c"
        break;

    case YYSYMBOL_attribution: /* attribution  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 899 "comp.tab.c"
        break;

    case YYSYMBOL_global: /* global  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 905 "comp.tab.c"
        break;

    case YYSYMBOL_decide: /* decide  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 911 "comp.tab.c"
        break;

    case YYSYMBOL_loop: /* loop  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 917 "comp.tab.c"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 923 "comp.tab.c"
        break;

    case YYSYMBOL_term: /* term  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 929 "comp.tab.c"
        break;

    case YYSYMBOL_factor: /* factor  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 935 "comp.tab.c"
        break;

    case YYSYMBOL_unary: /* unary  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 941 "comp.tab.c"
        break;

    case YYSYMBOL_expr_log: /* expr_log  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 947 "comp.tab.c"
        break;

    case YYSYMBOL_term_log: /* term_log  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 953 "comp.tab.c"
        break;

    case YYSYMBOL_factor_log: /* factor_log  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 959 "comp.tab.c"
        break;

    case YYSYMBOL_unary_log: /* unary_log  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 965 "comp.tab.c"
        break;

    case YYSYMBOL_tok_id: /* tok_id  */
#line 53 "comp.y"
         { fprintf(yyo, "%d", ((*yyvaluep).itg));}
#line 971 "comp.tab.c"
        break;

    case YYSYMBOL_var: /* var  */
#line 56 "comp.y"
         { fprintf(yyo, "%s", ((*yyvaluep).node)-> toDebug().c_str());}
#line 977 "comp.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: globals  */
#line 62 "comp.y"
                  {
   Node *program = new Program();
    program->append((yyvsp[0].node));

    // aqui vai a analise semantica
    CheckVarDecl cvd;
    cvd.check(program);
    
    if(errorcount>0)
        cout << errorcount << " error(s) found" <<endl;
    if(force_print_tree || errorcount ==0)
        printf_tree(program);
}
#line 1649 "comp.tab.c"
    break;

  case 3: /* globals: globals global  */
#line 76 "comp.y"
                             {
    (yyvsp[-1].node)->append((yyvsp[0].node));
    (yyval.node) = (yyvsp[-1].node);
}
#line 1658 "comp.tab.c"
    break;

  case 4: /* globals: global  */
#line 81 "comp.y"
                 {   
    Node *n = new Node();
    n->append((yyvsp[0].node));
    (yyval.node) = n;

}
#line 1669 "comp.tab.c"
    break;

  case 5: /* declaration: tok_id TOK_IDENT '=' expr ';'  */
#line 88 "comp.y"
                                            {   
     (yyval.node) = new Variable(new TypeDec((yyvsp[-4].itg)), (yyvsp[-3].str), (yyvsp[-1].node));
}
#line 1677 "comp.tab.c"
    break;

  case 6: /* attribution: TOK_IDENT '=' expr ';'  */
#line 92 "comp.y"
                                    {
/* isso n passsa pelo variavel decalrada*/
   (yyval.node) = new Attribution((yyvsp[-3].str),(yyvsp[-1].node));
}
#line 1686 "comp.tab.c"
    break;

  case 7: /* global: TOK_PRINT '(' TOK_IDENT ')' ';'  */
#line 97 "comp.y"
                                        {
    Ident *id = new Ident((yyvsp[-2].str));
    (yyval.node) = new Print(id);
}
#line 1695 "comp.tab.c"
    break;

  case 8: /* global: error ';'  */
#line 102 "comp.y"
                   { 
    (yyval.node) = new Node(); 
}
#line 1703 "comp.tab.c"
    break;

  case 9: /* global: decide  */
#line 106 "comp.y"
                {
    (yyval.node) = (yyvsp[0].node);
}
#line 1711 "comp.tab.c"
    break;

  case 10: /* global: declaration  */
#line 110 "comp.y"
                     {
    (yyval.node) = (yyvsp[0].node);
}
#line 1719 "comp.tab.c"
    break;

  case 11: /* global: attribution  */
#line 114 "comp.y"
                    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1727 "comp.tab.c"
    break;

  case 12: /* global: loop  */
#line 118 "comp.y"
              {
    (yyval.node) = (yyvsp[0].node);
}
#line 1735 "comp.tab.c"
    break;

  case 13: /* global: TOK_PRINT '(' TOK_STRING ')' ';'  */
#line 122 "comp.y"
                                         {
    String *value = new String((yyvsp[-2].str));
    (yyval.node) = new Print(value);
}
#line 1744 "comp.tab.c"
    break;

  case 14: /* decide: TOK_IF '(' expr_log ')' '{' globals '}'  */
#line 127 "comp.y"
                                                 {
    (yyval.node) = new If1((yyvsp[-4].node), (yyvsp[-1].node));
}
#line 1752 "comp.tab.c"
    break;

  case 15: /* decide: TOK_IF '(' expr_log ')' '{' globals '}' TOK_ELSE '{' globals '}'  */
#line 131 "comp.y"
                                                                                  {
    (yyval.node) = new If2((yyvsp[-8].node), (yyvsp[-5].node), new Else(),(yyvsp[-1].node));
}
#line 1760 "comp.tab.c"
    break;

  case 16: /* loop: TOK_FOR '(' var TOK_FROM_TO var ')' '{' globals '}'  */
#line 135 "comp.y"
                                                           {

}
#line 1768 "comp.tab.c"
    break;

  case 17: /* expr: expr '+' term  */
#line 139 "comp.y"
                         {
    (yyval.node) = new BinaryOp((yyvsp[-2].node), (yyvsp[0].node), '+');
}
#line 1776 "comp.tab.c"
    break;

  case 18: /* expr: expr '-' term  */
#line 143 "comp.y"
                         {
    (yyval.node) = new BinaryOp((yyvsp[-2].node), (yyvsp[0].node), '-');
}
#line 1784 "comp.tab.c"
    break;

  case 19: /* expr: term  */
#line 147 "comp.y"
           {
    (yyval.node) = (yyvsp[0].node);
}
#line 1792 "comp.tab.c"
    break;

  case 20: /* term: term '*' factor  */
#line 151 "comp.y"
                          {
    (yyval.node) = new BinaryOp((yyvsp[-2].node), (yyvsp[0].node), '*');
}
#line 1800 "comp.tab.c"
    break;

  case 21: /* term: term '/' factor  */
#line 155 "comp.y"
                          {
    (yyval.node) = new BinaryOp((yyvsp[-2].node), (yyvsp[0].node), '/');
}
#line 1808 "comp.tab.c"
    break;

  case 22: /* term: factor  */
#line 159 "comp.y"
              {
    (yyval.node) = (yyvsp[0].node);
}
#line 1816 "comp.tab.c"
    break;

  case 23: /* factor: '(' expr ')'  */
#line 163 "comp.y"
                      {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1824 "comp.tab.c"
    break;

  case 24: /* factor: TOK_IDENT  */
#line 167 "comp.y"
                        {
    (yyval.node) = new Ident((yyvsp[0].str));
}
#line 1832 "comp.tab.c"
    break;

  case 25: /* factor: TOK_INT  */
#line 171 "comp.y"
                      {
    (yyval.node) = new Integer((yyvsp[0].itg));
}
#line 1840 "comp.tab.c"
    break;

  case 26: /* factor: TOK_FLOAT  */
#line 175 "comp.y"
                        {
    (yyval.node) = new Float((yyvsp[0].flt));
}
#line 1848 "comp.tab.c"
    break;

  case 27: /* factor: TOK_CHAR  */
#line 179 "comp.y"
                      {
    (yyval.node) = new Char((yyvsp[0].chr));
}
#line 1856 "comp.tab.c"
    break;

  case 28: /* factor: TOK_STRING  */
#line 183 "comp.y"
                        {
   (yyval.node) = new String((yyvsp[0].str));
}
#line 1864 "comp.tab.c"
    break;

  case 29: /* factor: TOK_TRUE  */
#line 187 "comp.y"
                      {
    (yyval.node) = new True((yyvsp[0].str));
}
#line 1872 "comp.tab.c"
    break;

  case 30: /* factor: TOK_FALSE  */
#line 191 "comp.y"
                       {
    (yyval.node) = new False((yyvsp[0].str));
}
#line 1880 "comp.tab.c"
    break;

  case 31: /* factor: TOK_SCAN  */
#line 196 "comp.y"
                      {
    (yyval.node) = new Scan((yyvsp[0].str));
}
#line 1888 "comp.tab.c"
    break;

  case 32: /* factor: unary  */
#line 200 "comp.y"
               {
    (yyval.node) = (yyvsp[0].node);
}
#line 1896 "comp.tab.c"
    break;

  case 33: /* unary: '-' factor  */
#line 204 "comp.y"
                      {
    (yyval.node) = new Unary((yyvsp[0].node), '-');
}
#line 1904 "comp.tab.c"
    break;

  case 34: /* expr_log: expr_log TOK_OR term_log  */
#line 208 "comp.y"
                                         {
    (yyval.node) = new BinaryOpLog((yyvsp[-2].node), (yyvsp[0].node), "||");
}
#line 1912 "comp.tab.c"
    break;

  case 35: /* expr_log: term_log  */
#line 212 "comp.y"
                    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1920 "comp.tab.c"
    break;

  case 36: /* term_log: term_log TOK_AND factor_log  */
#line 216 "comp.y"
                                            {
    (yyval.node) = new BinaryOpLog((yyvsp[-2].node), (yyvsp[0].node), "&&");
}
#line 1928 "comp.tab.c"
    break;

  case 37: /* term_log: factor_log  */
#line 220 "comp.y"
                      {
    (yyval.node) = (yyvsp[0].node);
}
#line 1936 "comp.tab.c"
    break;

  case 38: /* factor_log: expr '<' expr  */
#line 224 "comp.y"
                                     {
   (yyval.node) = new BinaryOp((yyvsp[-2].node), (yyvsp[0].node), '<');
}
#line 1944 "comp.tab.c"
    break;

  case 39: /* factor_log: expr '>' expr  */
#line 228 "comp.y"
                                    {
    (yyval.node) = new BinaryOp((yyvsp[-2].node), (yyvsp[0].node), '<');
}
#line 1952 "comp.tab.c"
    break;

  case 40: /* factor_log: expr TOK_DIFFERENT expr  */
#line 232 "comp.y"
                                               {
    (yyval.node) = new BinaryOpLog((yyvsp[-2].node), (yyvsp[0].node), "!=");
}
#line 1960 "comp.tab.c"
    break;

  case 41: /* factor_log: expr TOK_EQUALS expr  */
#line 236 "comp.y"
                                            {
    (yyval.node) = new BinaryOpLog((yyvsp[-2].node), (yyvsp[0].node), "==");
}
#line 1968 "comp.tab.c"
    break;

  case 42: /* factor_log: unary_log  */
#line 240 "comp.y"
                       {
   (yyval.node) = (yyvsp[0].node);
}
#line 1976 "comp.tab.c"
    break;

  case 43: /* unary_log: '!' factor_log  */
#line 244 "comp.y"
                              {
   (yyval.node) = new Unary((yyvsp[0].node), '!');
}
#line 1984 "comp.tab.c"
    break;

  case 44: /* tok_id: TOK_INT_ID  */
#line 251 "comp.y"
                    {
    (yyval.itg) = 0;
}
#line 1992 "comp.tab.c"
    break;

  case 45: /* tok_id: TOK_FLOAT_ID  */
#line 255 "comp.y"
                      {
    (yyval.itg) = 1;
}
#line 2000 "comp.tab.c"
    break;

  case 46: /* tok_id: TOK_CHAR_ID  */
#line 259 "comp.y"
                     {
    (yyval.itg) = 2;
}
#line 2008 "comp.tab.c"
    break;

  case 47: /* tok_id: TOK_BOOL_ID  */
#line 263 "comp.y"
                     {
    (yyval.itg) = 3;
}
#line 2016 "comp.tab.c"
    break;

  case 48: /* tok_id: TOK_STRING_ID  */
#line 267 "comp.y"
                       {
    (yyval.itg) = 4;
}
#line 2024 "comp.tab.c"
    break;

  case 49: /* var: TOK_INT  */
#line 272 "comp.y"
                   {
    (yyval.node) = new Integer((yyvsp[0].itg));
}
#line 2032 "comp.tab.c"
    break;

  case 50: /* var: TOK_IDENT  */
#line 276 "comp.y"
                     {
    (yyval.node) = new Ident((yyvsp[0].str));
}
#line 2040 "comp.tab.c"
    break;


#line 2044 "comp.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 280 "comp.y"

