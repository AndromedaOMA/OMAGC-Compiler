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
#line 1 "limbaj.y"

#include "OOP_func.h"
extern char* yytext;
extern int yylineno;
int yylex();
void yyerror(const char *s);

int flag_error = 0;
char printare[1024];
char function_name[256];

class SymbolManager symbolManager;

#line 85 "limbaj.tab.c"

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

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_FUNCTION = 4,                   /* FUNCTION  */
  YYSYMBOL_PRINT = 5,                      /* PRINT  */
  YYSYMBOL_CLASS = 6,                      /* CLASS  */
  YYSYMBOL_ARRAY = 7,                      /* ARRAY  */
  YYSYMBOL_CL_AS = 8,                      /* CL_AS  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_CALL = 12,                      /* CALL  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_EVAL = 14,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 15,                    /* TYPEOF  */
  YYSYMBOL_VARIABLE_NAME = 16,             /* VARIABLE_NAME  */
  YYSYMBOL_INT_VALUE = 17,                 /* INT_VALUE  */
  YYSYMBOL_BOOL_VALUE = 18,                /* BOOL_VALUE  */
  YYSYMBOL_STRING_VALUE = 19,              /* STRING_VALUE  */
  YYSYMBOL_CHAR_VALUE = 20,                /* CHAR_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 21,               /* FLOAT_VALUE  */
  YYSYMBOL_DATA_TYPE = 22,                 /* DATA_TYPE  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_GRE = 25,                       /* GRE  */
  YYSYMBOL_LES = 26,                       /* LES  */
  YYSYMBOL_GEQ = 27,                       /* GEQ  */
  YYSYMBOL_LEQ = 28,                       /* LEQ  */
  YYSYMBOL_NEQ = 29,                       /* NEQ  */
  YYSYMBOL_EQ = 30,                        /* EQ  */
  YYSYMBOL_31_ = 31,                       /* '+'  */
  YYSYMBOL_32_ = 32,                       /* '-'  */
  YYSYMBOL_33_ = 33,                       /* '*'  */
  YYSYMBOL_34_ = 34,                       /* '/'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '='  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_BEGIN = 45,                     /* BEGIN  */
  YYSYMBOL_CLASS_BODY = 46,                /* CLASS_BODY  */
  YYSYMBOL_VARIABLE_LIST = 47,             /* VARIABLE_LIST  */
  YYSYMBOL_STMT_LIST = 48,                 /* STMT_LIST  */
  YYSYMBOL_STMT_CLASS = 49,                /* STMT_CLASS  */
  YYSYMBOL_CLASS_VALUE = 50,               /* CLASS_VALUE  */
  YYSYMBOL_STMT = 51,                      /* STMT  */
  YYSYMBOL_FUNC = 52,                      /* FUNC  */
  YYSYMBOL_FUNC_CALL = 53,                 /* FUNC_CALL  */
  YYSYMBOL_FUNC_CALL_PARAM = 54,           /* FUNC_CALL_PARAM  */
  YYSYMBOL_FUNCTION_ANTET = 55,            /* FUNCTION_ANTET  */
  YYSYMBOL_FUNCTION_BLOCK = 56,            /* FUNCTION_BLOCK  */
  YYSYMBOL_FUNCTION_PARAMETERS = 57,       /* FUNCTION_PARAMETERS  */
  YYSYMBOL_FUNCTION_BODY = 58,             /* FUNCTION_BODY  */
  YYSYMBOL_FUNC_BLOCK = 59,                /* FUNC_BLOCK  */
  YYSYMBOL_PRINT_FUNC = 60,                /* PRINT_FUNC  */
  YYSYMBOL_EVAL_FUNC = 61,                 /* EVAL_FUNC  */
  YYSYMBOL_TYPEOF_FUNC = 62,               /* TYPEOF_FUNC  */
  YYSYMBOL_MAIN_START = 63,                /* MAIN_START  */
  YYSYMBOL_MAIN_STR = 64,                  /* MAIN_STR  */
  YYSYMBOL_MAIN_BLOCK = 65,                /* MAIN_BLOCK  */
  YYSYMBOL_IF_BODY = 66,                   /* IF_BODY  */
  YYSYMBOL_IF_BLOCK = 67,                  /* IF_BLOCK  */
  YYSYMBOL_PRINT_IF = 68,                  /* PRINT_IF  */
  YYSYMBOL_ARRAY_IF = 69,                  /* ARRAY_IF  */
  YYSYMBOL_ARRAY_FOR = 70,                 /* ARRAY_FOR  */
  YYSYMBOL_WHILE_BODY = 71,                /* WHILE_BODY  */
  YYSYMBOL_WHILE_BLOCK = 72,               /* WHILE_BLOCK  */
  YYSYMBOL_PRINT_WHILE = 73,               /* PRINT_WHILE  */
  YYSYMBOL_ARRAY_WHILE = 74,               /* ARRAY_WHILE  */
  YYSYMBOL_FOR_BODY = 75,                  /* FOR_BODY  */
  YYSYMBOL_FOR1 = 76,                      /* FOR1  */
  YYSYMBOL_BOOL_EXP = 77,                  /* BOOL_EXP  */
  YYSYMBOL_LOGIC_OPERATORS = 78,           /* LOGIC_OPERATORS  */
  YYSYMBOL_BOOL_TOKENS = 79,               /* BOOL_TOKENS  */
  YYSYMBOL_FOR2 = 80,                      /* FOR2  */
  YYSYMBOL_FOR_BLOCK = 81,                 /* FOR_BLOCK  */
  YYSYMBOL_PRINT_FOR = 82,                 /* PRINT_FOR  */
  YYSYMBOL_ARRAY_BODY = 83,                /* ARRAY_BODY  */
  YYSYMBOL_PRINT_LIST = 84,                /* PRINT_LIST  */
  YYSYMBOL_ARRAY_FUNC = 85,                /* ARRAY_FUNC  */
  YYSYMBOL_ARRAY_PRINT = 86,               /* ARRAY_PRINT  */
  YYSYMBOL_EXP = 87,                       /* EXP  */
  YYSYMBOL_VALUE = 88                      /* VALUE  */
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
typedef yytype_int16 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  382

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    36,    33,    31,    40,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    40,    41,    43,    44,    46,    47,    48,
      49,    50,    51,    52,    53,    55,    60,    63,    64,    66,
      67,    69,    70,    72,    85,    92,    98,   108,   110,   116,
     118,   119,   121,   123,   129,   130,   132,   134,   135,   136,
     137,   138,   139,   140,   141,   143,   173,   181,   189,   194,
     202,   204,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   223,   225,
     226,   227,   228,   229,   230,   231,   232,   234,   247,   248,
     254,   255,   258,   260,   261,   262,   263,   264,   265,   266,
     267,   269,   282,   283,   288,   290,   298,   307,   308,   311,
     312,   314,   315,   316,   317,   318,   319,   322,   324,   325,
     326,   327,   328,   329,   330,   331,   334,   349,   350,   371,
     372,   383,   384,   386,   403,   409,   415,   421,   427,   428,
     429,   440,   441,   442,   443,   444
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "FUNCTION",
  "PRINT", "CLASS", "ARRAY", "CL_AS", "IF", "WHILE", "FOR", "CALL", "ELSE",
  "EVAL", "TYPEOF", "VARIABLE_NAME", "INT_VALUE", "BOOL_VALUE",
  "STRING_VALUE", "CHAR_VALUE", "FLOAT_VALUE", "DATA_TYPE", "OR", "AND",
  "GRE", "LES", "GEQ", "LEQ", "NEQ", "EQ", "'+'", "'-'", "'*'", "'/'",
  "'('", "')'", "'{'", "'}'", "';'", "','", "'='", "'['", "']'", "$accept",
  "BEGIN", "CLASS_BODY", "VARIABLE_LIST", "STMT_LIST", "STMT_CLASS",
  "CLASS_VALUE", "STMT", "FUNC", "FUNC_CALL", "FUNC_CALL_PARAM",
  "FUNCTION_ANTET", "FUNCTION_BLOCK", "FUNCTION_PARAMETERS",
  "FUNCTION_BODY", "FUNC_BLOCK", "PRINT_FUNC", "EVAL_FUNC", "TYPEOF_FUNC",
  "MAIN_START", "MAIN_STR", "MAIN_BLOCK", "IF_BODY", "IF_BLOCK",
  "PRINT_IF", "ARRAY_IF", "ARRAY_FOR", "WHILE_BODY", "WHILE_BLOCK",
  "PRINT_WHILE", "ARRAY_WHILE", "FOR_BODY", "FOR1", "BOOL_EXP",
  "LOGIC_OPERATORS", "BOOL_TOKENS", "FOR2", "FOR_BLOCK", "PRINT_FOR",
  "ARRAY_BODY", "PRINT_LIST", "ARRAY_FUNC", "ARRAY_PRINT", "EXP", "VALUE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-213)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,    -3,    13,     5,    34,    92,  -213,  -213,  -213,  -213,
      -8,  -213,  -213,  -213,  -213,    49,  -213,    38,   110,   122,
     104,    88,  -213,   111,    15,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,   138,    64,  -213,    76,   133,   142,   143,
    -213,  -213,  -213,  -213,  -213,  -213,   145,   202,  -213,  -213,
     116,   162,   195,   184,    65,   150,   194,   205,   145,   145,
     145,   244,   145,   145,   145,   145,  -213,   207,   208,   206,
     209,   204,  -213,  -213,   145,   231,   -10,   214,  -213,   218,
     292,   298,  -213,    69,    69,  -213,  -213,   145,   145,  -213,
     180,   232,   150,   221,   224,   225,  -213,  -213,   228,   229,
     304,   311,   234,    31,   246,   247,   254,   249,  -213,  -213,
    -213,    11,  -213,  -213,  -213,   272,   120,   145,  -213,  -213,
    -213,  -213,   263,   264,   341,   265,  -213,   273,   300,   278,
     145,   145,    42,   234,    31,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,   296,   317,   150,  -213,  -213,   306,  -213,
     331,   307,  -213,   118,   198,   152,   309,   340,   323,   325,
     326,     2,  -213,   350,   151,   324,   351,  -213,  -213,   332,
     145,  -213,  -213,  -213,  -213,  -213,  -213,   145,   333,   145,
     330,   145,  -213,  -213,   337,    50,   357,     3,   335,  -213,
     334,   321,   336,   338,    29,   198,   150,    30,   150,   145,
      47,   341,   342,   359,   339,   106,    50,   363,  -213,   343,
    -213,   366,  -213,   341,  -213,   345,    53,   369,    10,   347,
     145,   352,    90,   372,    52,   353,   150,   145,   349,   373,
     354,  -213,  -213,   145,   355,   114,  -213,   348,  -213,   341,
     356,   377,   358,   153,    53,   379,   386,   361,  -213,   150,
     341,   360,   385,   364,   156,    90,   388,  -213,   367,  -213,
     371,   177,   389,   365,   392,   227,  -213,  -213,   145,   374,
     375,   394,   370,  -213,  -213,   145,   378,   160,   376,  -213,
     380,   397,   381,  -213,  -213,   145,   382,   164,  -213,   387,
     145,   383,   384,   390,  -213,   240,  -213,   400,   391,   401,
     253,  -213,  -213,   145,    29,   406,   393,   409,   262,  -213,
    -213,   145,    93,   150,  -213,   341,  -213,  -213,   395,   396,
     398,  -213,   266,    55,   399,   402,   403,  -213,   275,   404,
     127,   411,    56,   405,  -213,  -213,   341,  -213,  -213,  -213,
    -213,   341,  -213,  -213,   341,   407,   412,   408,   165,   127,
     413,  -213,   414,  -213,  -213,  -213,   410,   415,   416,  -213,
    -213,   145,   417,   176,  -213,   422,   418,   423,   279,  -213,
    -213,   145,   419,   421,   420,  -213,   288,  -213,   341,  -213,
    -213,  -213
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     3,     5,     7,
       0,     9,    11,    13,    15,     0,    32,     0,     0,     0,
       0,     0,     1,     0,     0,     4,     6,     8,    10,    12,
      14,    50,    27,     0,     0,    17,     0,     0,     0,     0,
     130,   131,   135,   132,   134,   133,     0,     0,   129,    25,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    29,    28,     0,     0,     0,     0,    18,     0,
       0,     0,   128,   124,   125,   126,   127,     0,     0,    24,
       0,     0,    31,    22,     0,     0,    19,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    64,
      66,     0,    56,    58,    60,     0,     0,     0,    16,    20,
      47,    49,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    63,    65,    67,    57,
      59,    61,    34,     0,     0,    21,    46,    48,     0,    52,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,   100,    99,     0,
       0,   103,   104,   105,   106,   102,   101,     0,     0,     0,
       0,     0,    53,    55,     0,     0,     0,     0,     0,    35,
     130,     0,     0,     0,     0,     0,    97,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      43,     0,   120,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,    42,    39,     0,     0,     0,    44,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    98,
       0,     0,     0,     0,     0,     0,     0,    82,     0,    89,
       0,     0,     0,     0,     0,     0,    41,    40,     0,     0,
       0,     0,     0,    74,    71,     0,     0,     0,     0,    76,
       0,     0,     0,    87,    85,     0,     0,     0,    90,     0,
       0,     0,     0,     0,    37,     0,   123,     0,     0,     0,
       0,    73,    72,     0,     0,     0,     0,     0,     0,    88,
      86,     0,     0,   107,    45,     0,   121,    38,     0,     0,
       0,    69,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,   122,    77,     0,    78,    70,    68,
      91,     0,    92,    84,     0,     0,     0,     0,     0,     0,
       0,    94,     0,   114,    79,    93,     0,     0,     0,   112,
     110,     0,     0,     0,   115,     0,     0,     0,     0,   113,
     111,     0,     0,     0,     0,   108,     0,   116,     0,    80,
     109,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,  -213,  -213,   424,   425,    -4,   437,   426,
    -213,   440,  -213,  -213,  -213,  -213,   261,    -2,    -1,  -213,
    -213,  -213,   346,   147,  -212,   210,   103,   362,  -213,   235,
     211,   368,  -213,  -126,  -213,   269,  -213,  -213,   135,   344,
     427,   259,  -213,   -20,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    36,    76,    77,     7,     8,     9,    10,
      54,    11,    16,   116,   162,   187,   188,    12,    13,    14,
      31,   111,   112,   218,   219,   242,   347,   113,   224,   225,
     253,   114,   158,   153,   170,   177,   260,   332,   333,   129,
     125,   204,   126,   154,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    26,   148,    29,    30,   155,   247,   184,   184,   185,
     206,    18,    75,    19,    55,   215,   133,   244,   134,    15,
     104,   105,   106,    19,   186,   207,    61,   107,    94,    17,
      69,    32,   245,     4,   215,   221,   216,   222,    79,    80,
      81,   208,    83,    84,    85,    86,    20,   127,   246,   135,
      21,   217,   223,   128,    92,   200,    20,   221,   156,   255,
     215,   329,   244,   349,   157,    33,   202,   100,   101,   240,
     167,   168,   203,    34,   256,   241,     2,   245,   350,   228,
      40,    41,    42,    43,    44,    45,   108,   227,   109,   110,
     257,   238,    22,   339,   351,    23,     1,   145,   329,    46,
     330,    73,    64,    65,     2,    74,   251,   136,    24,   137,
     138,   247,   252,    56,     4,   331,    57,   270,    38,    39,
      40,    41,    42,    43,    44,    45,    35,    49,   280,    50,
      67,    68,    40,    41,    42,    43,    44,    45,    37,    46,
       1,   167,   168,   345,   191,   232,    51,   233,     2,   346,
     195,    46,     3,   267,   169,   268,   143,   196,     4,   198,
     144,    40,    41,    42,    43,    44,    45,   190,    41,    42,
      43,    44,    45,    52,    58,   167,   168,    59,    60,   226,
      46,    62,    63,    64,    65,   102,    46,   103,   178,   104,
     105,   106,   274,   334,   275,   284,   107,   285,    70,   302,
     249,   303,     4,   310,   360,   311,   361,   261,    62,    63,
      64,    65,    71,   265,   354,   370,    75,   371,   290,   355,
      72,    78,   356,   171,   172,   173,   174,   175,   176,    62,
      63,    64,    65,    62,    63,    64,    65,    62,    63,    64,
      65,    66,    87,    88,    91,    89,    90,    93,   295,    62,
      63,    64,    65,    96,   115,   300,   381,    97,    62,    63,
      64,    65,   117,   118,   119,   308,   294,   120,   121,   124,
     313,    62,    63,    64,    65,    62,    63,    64,    65,   317,
      82,   130,   131,   322,    62,    63,    64,    65,   142,   132,
      20,   328,   321,    62,    63,    64,    65,    62,    63,    64,
      65,   327,   146,   147,   149,   338,    62,    63,    64,    65,
      62,    63,    64,    65,   343,   150,   151,   152,   375,    62,
      63,    64,    65,    62,    63,    64,    65,   380,    98,    62,
      63,    64,    65,   161,    99,    62,    63,    64,    65,   163,
     122,   368,    62,    63,    64,    65,   164,   123,   165,   166,
     179,   376,    62,    63,    64,    65,   180,   212,    41,    42,
      43,    44,    45,   181,   182,   183,   189,   192,   193,   194,
     197,   199,   201,   205,   210,   230,   211,   213,   231,   235,
     239,   214,   236,   237,   229,   243,   248,   250,   254,   262,
     263,   269,   259,   272,   266,   277,   264,   273,   271,   278,
     279,   282,   281,   283,   287,   291,   288,   289,   292,   293,
     296,   298,   299,   304,   306,   297,   318,   301,   320,   314,
     305,   309,   324,   307,   312,   315,   326,   348,   358,   363,
      25,   335,   366,   316,   319,   340,   325,   336,   372,   344,
     374,   337,    27,   341,   353,    28,   342,   359,   209,   357,
     365,   323,   362,   364,   276,   377,   369,   139,   367,   258,
      53,   373,   378,   379,   220,   234,   286,   352,     0,     0,
       0,     0,     0,   140,     0,     0,     0,     0,   160,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159
};

static const yytype_int16 yycheck[] =
{
      20,     5,   124,     5,     5,   131,   218,     5,     5,     7,
       7,     6,    22,     8,    34,     5,     5,     7,     7,    22,
       9,    10,    11,     8,    22,    22,    46,    16,    38,    16,
      50,    39,    22,    22,     5,     5,     7,     7,    58,    59,
      60,    38,    62,    63,    64,    65,    41,    16,    38,    38,
      16,    22,    22,    22,    74,   181,    41,     5,    16,     7,
       5,     5,     7,     7,    22,    16,    16,    87,    88,    16,
      23,    24,    22,    35,    22,    22,    12,    22,    22,   201,
      16,    17,    18,    19,    20,    21,    90,    40,    90,    90,
      38,   213,     0,    38,    38,     3,     4,   117,     5,    35,
       7,    36,    33,    34,    12,    40,    16,   111,    16,   111,
     111,   323,    22,    37,    22,    22,    40,   239,    14,    15,
      16,    17,    18,    19,    20,    21,    16,    39,   250,    41,
      14,    15,    16,    17,    18,    19,    20,    21,    16,    35,
       4,    23,    24,    16,   164,    39,    35,    41,    12,    22,
     170,    35,    16,    39,    36,    41,    36,   177,    22,   179,
      40,    16,    17,    18,    19,    20,    21,    16,    17,    18,
      19,    20,    21,    35,    41,    23,    24,    35,    35,   199,
      35,    31,    32,    33,    34,     5,    35,     7,    36,     9,
      10,    11,    39,   315,    41,    39,    16,    41,    36,    39,
     220,    41,    22,    39,    39,    41,    41,   227,    31,    32,
      33,    34,    17,   233,   336,    39,    22,    41,    41,   341,
      36,    16,   344,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    31,    32,    33,    34,    31,    32,    33,
      34,    39,    35,    35,    40,    39,    37,    16,   268,    31,
      32,    33,    34,    39,    22,   275,   378,    39,    31,    32,
      33,    34,    41,    39,    39,   285,    39,    39,    39,    35,
     290,    31,    32,    33,    34,    31,    32,    33,    34,    39,
      36,    35,    35,   303,    31,    32,    33,    34,    16,    35,
      41,   311,    39,    31,    32,    33,    34,    31,    32,    33,
      34,    39,    39,    39,    39,    39,    31,    32,    33,    34,
      31,    32,    33,    34,    39,    42,    16,    39,    39,    31,
      32,    33,    34,    31,    32,    33,    34,    39,    36,    31,
      32,    33,    34,    37,    36,    31,    32,    33,    34,    22,
      36,   361,    31,    32,    33,    34,    40,    36,    17,    42,
      41,   371,    31,    32,    33,    34,    16,    36,    17,    18,
      19,    20,    21,    40,    39,    39,    16,    43,    17,    37,
      37,    41,    35,    16,    39,    16,    42,    41,    39,    16,
      35,    43,    39,    17,    42,    16,    39,    35,    16,    40,
      17,    43,    39,    16,    39,    16,    42,    39,    42,    13,
      39,    16,    42,    39,    16,    16,    39,    36,    43,    17,
      36,    17,    42,    37,    17,    40,    16,    39,    17,    36,
      40,    39,    16,    42,    37,    41,    17,    16,    16,    16,
       5,    36,    17,    43,    43,    36,    43,    41,    16,    35,
      17,    43,     5,    41,    39,     5,    43,    39,   187,    42,
      40,   304,   349,    39,   244,    36,    39,   111,    42,   224,
      34,    43,    41,    43,   195,   206,   255,   332,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,   134,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    12,    16,    22,    45,    46,    50,    51,    52,
      53,    55,    61,    62,    63,    22,    56,    16,     6,     8,
      41,    16,     0,     3,    16,    50,    51,    52,    55,    61,
      62,    64,    39,    16,    35,    16,    47,    16,    14,    15,
      16,    17,    18,    19,    20,    21,    35,    87,    88,    39,
      41,    35,    35,    53,    54,    87,    37,    40,    41,    35,
      35,    87,    31,    32,    33,    34,    39,    14,    15,    87,
      36,    17,    36,    36,    40,    22,    48,    49,    16,    87,
      87,    87,    36,    87,    87,    87,    87,    35,    35,    39,
      37,    40,    87,    16,    38,    49,    39,    39,    36,    36,
      87,    87,     5,     7,     9,    10,    11,    16,    51,    61,
      62,    65,    66,    71,    75,    22,    57,    41,    39,    39,
      39,    39,    36,    36,    35,    84,    86,    16,    22,    83,
      35,    35,    35,     5,     7,    38,    51,    61,    62,    66,
      71,    75,    16,    36,    40,    87,    39,    39,    88,    39,
      42,    16,    39,    77,    87,    77,    16,    22,    76,    84,
      83,    37,    58,    22,    40,    17,    42,    23,    24,    36,
      78,    25,    26,    27,    28,    29,    30,    79,    36,    41,
      16,    40,    39,    39,     5,     7,    22,    59,    60,    16,
      16,    87,    43,    17,    37,    87,    87,    37,    87,    41,
      77,    35,    16,    22,    85,    16,     7,    22,    38,    60,
      39,    42,    36,    41,    43,     5,     7,    22,    67,    68,
      79,     5,     7,    22,    72,    73,    87,    40,    88,    42,
      16,    39,    39,    41,    85,    16,    39,    17,    88,    35,
      16,    22,    69,    16,     7,    22,    38,    68,    39,    87,
      35,    16,    22,    74,    16,     7,    22,    38,    73,    39,
      80,    87,    40,    17,    42,    87,    39,    39,    41,    43,
      88,    42,    16,    39,    39,    41,    69,    16,    13,    39,
      88,    42,    16,    39,    39,    41,    74,    16,    39,    36,
      41,    16,    43,    17,    39,    87,    36,    40,    17,    42,
      87,    39,    39,    41,    37,    40,    17,    42,    87,    39,
      39,    41,    37,    87,    36,    41,    43,    39,    16,    43,
      17,    39,    87,    67,    16,    43,    17,    39,    87,     5,
       7,    22,    81,    82,    88,    36,    41,    43,    39,    38,
      36,    41,    43,    39,    35,    16,    22,    70,    16,     7,
      22,    38,    82,    39,    88,    88,    88,    42,    16,    39,
      39,    41,    70,    16,    39,    40,    17,    42,    87,    39,
      39,    41,    16,    43,    17,    39,    87,    36,    41,    43,
      39,    88
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    47,    47,    48,
      48,    49,    49,    50,    51,    51,    51,    52,    53,    53,
      54,    54,    55,    56,    57,    57,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    61,    61,    62,    62,
      63,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    69,    69,
      70,    70,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    74,    74,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    79,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    86,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     7,     1,     3,     2,
       3,     4,     2,     6,     5,     3,     4,     2,     5,     5,
       1,     3,     2,     8,     2,     4,     3,     5,     6,     3,
       4,     4,     3,     2,     3,     6,     8,     7,     8,     7,
       2,     6,     3,     4,     3,     4,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,    11,     5,
       6,     3,     4,     4,     3,     2,     3,     6,     5,     6,
       5,     6,     7,     5,     6,     3,     4,     3,     4,     2,
       3,     6,     5,     6,    11,     4,     3,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     6,
       3,     4,     3,     4,     2,     3,     6,     5,     6,     1,
       5,     5,     6,     8,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1
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
  YY_USE (yykind);
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
  case 16: /* CLASS_BODY: VARIABLE_NAME CLASS VARIABLE_LIST '{' STMT_LIST '}' ';'  */
#line 61 "limbaj.y"
                {symbolManager.push_class((yyvsp[-6].name));}
#line 1435 "limbaj.tab.c"
    break;

  case 17: /* VARIABLE_LIST: VARIABLE_NAME  */
#line 63 "limbaj.y"
                              {symbolManager.push_variables("class_variable" , (yyvsp[0].name) , "NULL");}
#line 1441 "limbaj.tab.c"
    break;

  case 18: /* VARIABLE_LIST: VARIABLE_LIST ',' VARIABLE_NAME  */
#line 64 "limbaj.y"
                                                  {symbolManager.push_variables("class_variable" , (yyvsp[0].name) , "NULL");}
#line 1447 "limbaj.tab.c"
    break;

  case 21: /* STMT_CLASS: DATA_TYPE VARIABLE_NAME '=' EXP  */
#line 69 "limbaj.y"
                                            {symbolManager.push_variables((yyvsp[-3].data_type) , (yyvsp[-2].name) , (yyvsp[0].value));}
#line 1453 "limbaj.tab.c"
    break;

  case 22: /* STMT_CLASS: DATA_TYPE VARIABLE_NAME  */
#line 70 "limbaj.y"
                                      {symbolManager.push_variables((yyvsp[-1].data_type) , (yyvsp[0].name) , "NULL");}
#line 1459 "limbaj.tab.c"
    break;

  case 23: /* CLASS_VALUE: VARIABLE_NAME CL_AS VARIABLE_NAME '=' EXP ';'  */
#line 72 "limbaj.y"
                                                             {
                    if(!symbolManager.check_variable_class((yyvsp[-5].name) , (yyvsp[-3].name))) 
                        {printf("ERROR! Line %d, variable \"%s\" or \"%s\"does not exist.\n", yylineno, (yyvsp[-5].name) , (yyvsp[-3].name));
                        flag_error = 1;
                        exit(0);}
                    if(symbolManager.update_value_class((yyvsp[-5].name) , (yyvsp[-3].name) , (yyvsp[-1].value)) == 0)
                        {printf("ERROR! Line %d, variables \"%s\" and \"%s\" not a same data_type.\n", yylineno, (yyvsp[-5].name) , (yyvsp[-3].name));
                        flag_error = 1;
                        exit(0);}
                    }
#line 1474 "limbaj.tab.c"
    break;

  case 24: /* STMT: DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 85 "limbaj.y"
                                           {if(symbolManager.lookup((yyvsp[-3].name)))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                if(!symbolManager.check_data_type((yyvsp[-4].data_type),(yyvsp[-1].value)))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);}
                                symbolManager.push_symbol((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "global");}
#line 1486 "limbaj.tab.c"
    break;

  case 25: /* STMT: DATA_TYPE VARIABLE_NAME ';'  */
#line 92 "limbaj.y"
                                   {if(symbolManager.lookup((yyvsp[-1].name)))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                 if(symbolManager.is_const((yyvsp[-2].data_type))){printf("ERROR! Line %d, const must be initialised.\n", yylineno);flag_error = 1;
                                exit(0);}  
                                symbolManager.push_symbol((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "global");}
#line 1497 "limbaj.tab.c"
    break;

  case 26: /* STMT: VARIABLE_NAME '=' EXP ';'  */
#line 98 "limbaj.y"
                                 {if(symbolManager.is_const(symbolManager.get_data_type((yyvsp[-3].name)))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, (yyvsp[-3].name));
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.lookup((yyvsp[-3].name))) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[-3].name));
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.check_data_type(symbolManager.get_data_type((yyvsp[-3].name)),(yyvsp[-1].value)))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);} symbolManager.reassign_value((yyvsp[-3].name), (yyvsp[-1].value));}
#line 1509 "limbaj.tab.c"
    break;

  case 28: /* FUNC_CALL: CALL VARIABLE_NAME '(' FUNC_CALL_PARAM ')'  */
#line 110 "limbaj.y"
                                                       {if(!symbolManager.look_function((yyvsp[-3].name)))
                                                          {printf("ERROR! Line %d, function not declared.\n", yylineno);
                                                          flag_error = 1;
                                                          exit(0);
                                                          }
                                                        }
#line 1520 "limbaj.tab.c"
    break;

  case 33: /* FUNCTION_BLOCK: DATA_TYPE VARIABLE_NAME '(' INT_VALUE ',' FUNCTION_PARAMETERS ')' FUNCTION_BODY  */
#line 124 "limbaj.y"
                                                                  {if(symbolManager.check_signature((yyvsp[-7].data_type), (yyvsp[-6].name), (yyvsp[-4].value)))
                                                                    symbolManager.push_function((yyvsp[-7].data_type), (yyvsp[-6].name), (yyvsp[-4].value), "global");
                                                                  else {printf("ERROR! Line %d, function signature already exists.\n", yylineno); flag_error = 1; exit(0);}
                                                                  }
#line 1529 "limbaj.tab.c"
    break;

  case 34: /* FUNCTION_PARAMETERS: DATA_TYPE VARIABLE_NAME  */
#line 129 "limbaj.y"
                                              {symbolManager.push_function_param((yyvsp[-1].data_type), (yyvsp[0].name), "NULL", "antet");}
#line 1535 "limbaj.tab.c"
    break;

  case 35: /* FUNCTION_PARAMETERS: FUNCTION_PARAMETERS ',' DATA_TYPE VARIABLE_NAME  */
#line 130 "limbaj.y"
                                                                      {symbolManager.push_function_param((yyvsp[-1].data_type), (yyvsp[0].name), "NULL","antet");}
#line 1541 "limbaj.tab.c"
    break;

  case 37: /* FUNC_BLOCK: DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 134 "limbaj.y"
                                                 {symbolManager.push_function_param((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "function");}
#line 1547 "limbaj.tab.c"
    break;

  case 38: /* FUNC_BLOCK: FUNC_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 135 "limbaj.y"
                                                            {symbolManager.push_function_param((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "function");}
#line 1553 "limbaj.tab.c"
    break;

  case 39: /* FUNC_BLOCK: DATA_TYPE VARIABLE_NAME ';'  */
#line 136 "limbaj.y"
                                          {symbolManager.push_function_param((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "function");}
#line 1559 "limbaj.tab.c"
    break;

  case 40: /* FUNC_BLOCK: FUNC_BLOCK DATA_TYPE VARIABLE_NAME ';'  */
#line 137 "limbaj.y"
                                                     {symbolManager.push_function_param((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "function");}
#line 1565 "limbaj.tab.c"
    break;

  case 45: /* PRINT_FUNC: PRINT '(' VALUE ',' VARIABLE_NAME ')'  */
#line 143 "limbaj.y"
                                                   { 
        if(symbolManager.lookup_function_variable((yyvsp[-1].name)))
      {
        char buff[256];
        strcpy(buff,(yyvsp[-3].value));
        buff[strlen(buff)-1]='\0';
        strcpy(buff,buff+1);
        strcat(printare, buff);
          strcat(printare, symbolManager.variable_value_by_scope((yyvsp[-1].name)));
          strcat(printare,"\n");   
      }
      else
        if(symbolManager.lookup((yyvsp[-1].name)))
      {
        char buff[256];
        strcpy(buff,(yyvsp[-3].value));
        buff[strlen(buff)-1]='\0';
        strcpy(buff,buff+1);
        strcat(printare, buff);
        strcat(printare,symbolManager.get_value((yyvsp[-1].name)));
        strcat(printare,"\n");
      }
      else
      {
        printf("ERROR! Line %d, \"%s\" not declared in this scope.\n",yylineno, (yyvsp[-1].name));
        flag_error = 1;
        exit(0);
      }
      }
#line 1599 "limbaj.tab.c"
    break;

  case 46: /* EVAL_FUNC: DATA_TYPE VARIABLE_NAME '=' EVAL '(' EXP ')' ';'  */
#line 173 "limbaj.y"
                                                            {if(symbolManager.lookup((yyvsp[-6].name)))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                if(!symbolManager.check_data_type((yyvsp[-7].data_type),(yyvsp[-2].value)))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);}
                                symbolManager.push_symbol((yyvsp[-7].data_type), (yyvsp[-6].name), (yyvsp[-2].value), "function");}
#line 1611 "limbaj.tab.c"
    break;

  case 47: /* EVAL_FUNC: VARIABLE_NAME '=' EVAL '(' EXP ')' ';'  */
#line 181 "limbaj.y"
                                                   {if(symbolManager.is_const(symbolManager.get_data_type((yyvsp[-6].name)))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, (yyvsp[-6].name));
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.lookup((yyvsp[-6].name))) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[-6].name));
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.check_data_type(symbolManager.get_data_type((yyvsp[-6].name)),(yyvsp[-2].value)))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);} symbolManager.reassign_value((yyvsp[-6].name), (yyvsp[-2].value));}
#line 1623 "limbaj.tab.c"
    break;

  case 48: /* TYPEOF_FUNC: DATA_TYPE VARIABLE_NAME '=' TYPEOF '(' EXP ')' ';'  */
#line 189 "limbaj.y"
                                                                {if(symbolManager.lookup((yyvsp[-6].name)))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1; exit(0);}
                                if(symbolManager.is_int((yyvsp[-2].value))) symbolManager.push_symbol((yyvsp[-7].data_type), (yyvsp[-6].name), "integer", "function");
                                else if(symbolManager.is_float((yyvsp[-2].value))) symbolManager.push_symbol((yyvsp[-7].data_type), (yyvsp[-6].name), "float", "function");}
#line 1632 "limbaj.tab.c"
    break;

  case 49: /* TYPEOF_FUNC: VARIABLE_NAME '=' TYPEOF '(' EXP ')' ';'  */
#line 194 "limbaj.y"
                                                      {if(symbolManager.is_const(symbolManager.get_data_type((yyvsp[-6].name)))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, (yyvsp[-6].name));
                                flag_error = 1;exit(0);}
                                if(!symbolManager.lookup((yyvsp[-6].name))) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[-6].name)); flag_error = 1;exit(0);}
                                if(symbolManager.is_int((yyvsp[-2].value))) symbolManager.reassign_value((yyvsp[-6].name), "integer");
                                else if(symbolManager.is_float((yyvsp[-2].value))) symbolManager.reassign_value((yyvsp[-6].name), "float");}
#line 1642 "limbaj.tab.c"
    break;

  case 69: /* IF_BLOCK: DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 225 "limbaj.y"
                                                {symbolManager.push_symbol((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "if");}
#line 1648 "limbaj.tab.c"
    break;

  case 70: /* IF_BLOCK: IF_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 226 "limbaj.y"
                                                          {symbolManager.push_symbol((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "if");}
#line 1654 "limbaj.tab.c"
    break;

  case 71: /* IF_BLOCK: DATA_TYPE VARIABLE_NAME ';'  */
#line 227 "limbaj.y"
                                          {symbolManager.push_symbol((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "if");}
#line 1660 "limbaj.tab.c"
    break;

  case 72: /* IF_BLOCK: IF_BLOCK DATA_TYPE VARIABLE_NAME ';'  */
#line 228 "limbaj.y"
                                                   {symbolManager.push_symbol((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "if");}
#line 1666 "limbaj.tab.c"
    break;

  case 77: /* PRINT_IF: PRINT '(' VALUE ',' VARIABLE_NAME ')'  */
#line 234 "limbaj.y"
                                                 { if (symbolManager.lookup((yyvsp[-1].name))) {
                                {char buff[256]="";
                                strcpy(buff,(yyvsp[-3].value));
                                buff[strlen(buff)-1]='\0';
                                strcpy(buff,buff+1);
                                strcat(printare,buff);
                                if(symbolManager.value_by_scope((yyvsp[-1].name), "if")!=NULL) strcpy(buff, symbolManager.value_by_scope((yyvsp[-1].name), "if"));
                                else strcpy(buff, symbolManager.get_value((yyvsp[-1].name)));
                                strcat(printare,buff);
                                strcat(printare,"\n");}}
                                else {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[-1].name));
                               flag_error = 1; exit(0);}}
#line 1683 "limbaj.tab.c"
    break;

  case 78: /* ARRAY_IF: DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'  */
#line 247 "limbaj.y"
                                                    {symbolManager.push_array((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "if");}
#line 1689 "limbaj.tab.c"
    break;

  case 80: /* ARRAY_FOR: DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'  */
#line 254 "limbaj.y"
                                                     {symbolManager.push_array((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "for");}
#line 1695 "limbaj.tab.c"
    break;

  case 83: /* WHILE_BLOCK: DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 260 "limbaj.y"
                                                  {symbolManager.push_symbol((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "while");}
#line 1701 "limbaj.tab.c"
    break;

  case 84: /* WHILE_BLOCK: WHILE_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 261 "limbaj.y"
                                                             {symbolManager.push_symbol((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "while");}
#line 1707 "limbaj.tab.c"
    break;

  case 85: /* WHILE_BLOCK: DATA_TYPE VARIABLE_NAME ';'  */
#line 262 "limbaj.y"
                                          {symbolManager.push_symbol((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "while");}
#line 1713 "limbaj.tab.c"
    break;

  case 86: /* WHILE_BLOCK: WHILE_BLOCK DATA_TYPE VARIABLE_NAME ';'  */
#line 263 "limbaj.y"
                                                      {symbolManager.push_symbol((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "while");}
#line 1719 "limbaj.tab.c"
    break;

  case 91: /* PRINT_WHILE: PRINT '(' VALUE ',' VARIABLE_NAME ')'  */
#line 269 "limbaj.y"
                                                    { if (symbolManager.lookup((yyvsp[-1].name))) {
                                {char buff[256]="";
                                strcpy(buff,(yyvsp[-3].value));
                                buff[strlen(buff)-1]='\0';
                                strcpy(buff,buff+1);
                                strcat(printare,buff);
                                if(symbolManager.value_by_scope((yyvsp[-1].name), "while")!=NULL) strcpy(buff, symbolManager.value_by_scope((yyvsp[-1].name), "while"));
                                else strcpy(buff, symbolManager.get_value((yyvsp[-1].name)));
                                strcat(printare,buff);
                                strcat(printare,"\n");}}
                                else {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[-1].name));
                                flag_error = 1; exit(0);}}
#line 1736 "limbaj.tab.c"
    break;

  case 92: /* ARRAY_WHILE: DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'  */
#line 282 "limbaj.y"
                                                      {symbolManager.push_array((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "while");}
#line 1742 "limbaj.tab.c"
    break;

  case 95: /* FOR1: DATA_TYPE VARIABLE_NAME '=' EXP  */
#line 290 "limbaj.y"
                                        {if(symbolManager.lookup((yyvsp[-2].name)))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                if(!symbolManager.check_data_type((yyvsp[-3].data_type),(yyvsp[0].value)))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);}
                                symbolManager.push_symbol((yyvsp[-3].data_type), (yyvsp[-2].name), (yyvsp[0].value), "for");
                                }
#line 1755 "limbaj.tab.c"
    break;

  case 96: /* FOR1: VARIABLE_NAME '=' EXP  */
#line 298 "limbaj.y"
                               {if(symbolManager.is_const(symbolManager.get_data_type((yyvsp[-2].name)))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, (yyvsp[-2].name));
                               flag_error = 1; exit(0);}
                                    if(!symbolManager.lookup((yyvsp[-2].name))) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[-2].name));
                               flag_error = 1; exit(0);}
                                    if(!symbolManager.check_data_type(symbolManager.get_data_type((yyvsp[-2].name)),(yyvsp[0].value)))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);} symbolManager.reassign_value((yyvsp[-2].name), (yyvsp[0].value));}
#line 1767 "limbaj.tab.c"
    break;

  case 108: /* FOR_BLOCK: DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 324 "limbaj.y"
                                                 {symbolManager.push_symbol((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "for");}
#line 1773 "limbaj.tab.c"
    break;

  case 109: /* FOR_BLOCK: FOR_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';'  */
#line 325 "limbaj.y"
                                                           {symbolManager.push_symbol((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "for");}
#line 1779 "limbaj.tab.c"
    break;

  case 110: /* FOR_BLOCK: DATA_TYPE VARIABLE_NAME ';'  */
#line 326 "limbaj.y"
                                          {symbolManager.push_symbol((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "for");}
#line 1785 "limbaj.tab.c"
    break;

  case 111: /* FOR_BLOCK: FOR_BLOCK DATA_TYPE VARIABLE_NAME ';'  */
#line 327 "limbaj.y"
                                                    {symbolManager.push_symbol((yyvsp[-2].data_type), (yyvsp[-1].name), "NULL", "for");}
#line 1791 "limbaj.tab.c"
    break;

  case 116: /* PRINT_FOR: PRINT '(' VALUE ',' VARIABLE_NAME ')'  */
#line 334 "limbaj.y"
                                                  { if (symbolManager.lookup((yyvsp[-1].name))) {
                                {char buff[256]="";
                                strcpy(buff,(yyvsp[-3].value));
                                buff[strlen(buff)-1]='\0';
                                strcpy(buff,buff+1);
                                strcat(printare,buff);
                                if(symbolManager.value_by_scope((yyvsp[-1].name), "for")!=NULL) strcpy(buff, symbolManager.value_by_scope((yyvsp[-1].name), "for"));
                                else strcpy(buff, symbolManager.get_value((yyvsp[-1].name)));
                                strcat(printare,buff);
                                strcat(printare,"\n");}}
                                else {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[-1].name));
                                flag_error = 1; exit(0);}}
#line 1808 "limbaj.tab.c"
    break;

  case 117: /* ARRAY_BODY: DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'  */
#line 349 "limbaj.y"
                                                      {symbolManager.push_array((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "global");}
#line 1814 "limbaj.tab.c"
    break;

  case 118: /* ARRAY_BODY: VARIABLE_NAME '[' INT_VALUE ']' '=' VALUE  */
#line 350 "limbaj.y"
                                                       {if(symbolManager.is_int((yyvsp[0].value))) {if(!symbolManager.lookup_array((yyvsp[-5].name)))
                                                                        {
                                                                          printf("ERROR! Line %d, \"%s\" not declared.\n",yylineno, (yyvsp[-5].name));
                                                                          flag_error = 1;
                                                                          exit(0);
                                                                        } 
                                                                        if(!symbolManager.check_inside((yyvsp[-5].name), (yyvsp[-3].value)))
                                                                        {
                                                                           printf("ERROR! Line %d, index %s out of bound.\n",yylineno, (yyvsp[-5].name));
                                                                           flag_error = 1;
                                                                           exit(0);
                                                                        }
                                                                        symbolManager.push_array_element((yyvsp[-5].name), (yyvsp[-3].value), (yyvsp[0].value)); 
                                                                        }
                                                                        else
                                                                        {
                                                                          printf("ERROR! Line %d, expected type int.\n",yylineno);
                                                                          flag_error = 1;
                                                                          exit(0);
                                                                        } }
#line 1839 "limbaj.tab.c"
    break;

  case 120: /* PRINT_LIST: '(' VALUE ',' EXP ')'  */
#line 372 "limbaj.y"
                                   {
             char buff[256]="";
            strcpy(buff,(yyvsp[-3].value));
            buff[strlen(buff)-1]='\0';
            strcpy(buff,buff+1);
            strcat(printare,buff);
            strcat(printare,(yyvsp[-1].value));
            strcat(printare,"\n");
            }
#line 1853 "limbaj.tab.c"
    break;

  case 121: /* ARRAY_FUNC: DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'  */
#line 383 "limbaj.y"
                                                      {symbolManager.push_array((yyvsp[-4].data_type), (yyvsp[-3].name), (yyvsp[-1].value), "function");}
#line 1859 "limbaj.tab.c"
    break;

  case 123: /* ARRAY_PRINT: '(' VALUE ',' VARIABLE_NAME '[' INT_VALUE ']' ')'  */
#line 386 "limbaj.y"
                                                                {if(!symbolManager.lookup_array((yyvsp[-4].name)))
                                                            {printf("ERROR! Line %d, \"%s\" array not found.\n",yylineno, (yyvsp[-4].name));flag_error = 1; exit(0);}
                                                            if(!symbolManager.check_inside((yyvsp[-4].name), (yyvsp[-2].value)))
                                                            {printf("ERROR! Line %d, \"%s\" index out of bound.\n",yylineno, (yyvsp[-2].value));flag_error = 1; exit(0);}
                                                            char buff[256]=""; 
                                                            strcpy(buff,(yyvsp[-6].value));
                                                            buff[strlen(buff)-1]='\0';
                                                            strcpy(buff,buff+1);
                                                            strcat(printare,buff);
                                                            sprintf(buff, "%d\n", symbolManager.get_element((yyvsp[-4].name),(yyvsp[-2].value)));
                                                            strcat(printare, buff);}
#line 1875 "limbaj.tab.c"
    break;

  case 124: /* EXP: EXP '+' EXP  */
#line 403 "limbaj.y"
                  {if(symbolManager.is_int((yyvsp[0].value)))  {int a=atoi((yyvsp[-2].value)), b=atoi((yyvsp[0].value)); int c=a+b;sprintf((yyval.value), "%d", c);}
                      else if(symbolManager.is_float((yyvsp[0].value))) {float a=atof((yyvsp[-2].value)), b=atof((yyvsp[0].value)); float c=a+b;;sprintf((yyval.value), "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}}
#line 1885 "limbaj.tab.c"
    break;

  case 125: /* EXP: EXP '-' EXP  */
#line 409 "limbaj.y"
                  {if(symbolManager.is_int((yyvsp[0].value)))  {int a=atoi((yyvsp[-2].value)), b=atoi((yyvsp[0].value)); int c=a-b;sprintf((yyval.value), "%d", c);}
                      else if(symbolManager.is_float((yyvsp[0].value))) {float a=atof((yyvsp[-2].value)), b=atof((yyvsp[0].value)); float c=a-b;;sprintf((yyval.value), "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}}
#line 1895 "limbaj.tab.c"
    break;

  case 126: /* EXP: EXP '*' EXP  */
#line 415 "limbaj.y"
                  {if(symbolManager.is_int((yyvsp[0].value)))  {int a=atoi((yyvsp[-2].value)), b=atoi((yyvsp[0].value)); int c=a*b;sprintf((yyval.value), "%d", c);}
                      else if(symbolManager.is_float((yyvsp[0].value))) {float a=atof((yyvsp[-2].value)), b=atof((yyvsp[0].value)); float c=a*b;;sprintf((yyval.value), "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}}
#line 1905 "limbaj.tab.c"
    break;

  case 127: /* EXP: EXP '/' EXP  */
#line 421 "limbaj.y"
                  {if(symbolManager.is_int((yyvsp[0].value)))  {int a=atoi((yyvsp[-2].value)), b=atoi((yyvsp[0].value)); int c=a/b;sprintf((yyval.value), "%d", c);}
                      else if(symbolManager.is_float((yyvsp[0].value))) {float a=atof((yyvsp[-2].value)), b=atof((yyvsp[0].value)); float c=a/b;;sprintf((yyval.value), "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}}
#line 1915 "limbaj.tab.c"
    break;

  case 128: /* EXP: '(' EXP ')'  */
#line 427 "limbaj.y"
                  { (yyval.value)=(yyvsp[-1].value);}
#line 1921 "limbaj.tab.c"
    break;

  case 129: /* EXP: VALUE  */
#line 428 "limbaj.y"
            { strcpy((yyval.value), (yyvsp[0].value));}
#line 1927 "limbaj.tab.c"
    break;

  case 130: /* EXP: VARIABLE_NAME  */
#line 429 "limbaj.y"
                    { if(!symbolManager.is_value_null((yyvsp[0].name))) {printf("ERROR! Line %d, variable \"%s\" not initialised.\n", yylineno, (yyvsp[0].name)); 
                    flag_error = 1; exit(0);} 
                     if(!symbolManager.lookup((yyvsp[0].name))) 
                    {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, (yyvsp[0].name)); flag_error = 1;
                    exit(0);}
                    if(!symbolManager.is_int(symbolManager.get_value((yyvsp[0].name))) && !symbolManager.is_float(symbolManager.get_value((yyvsp[0].name)))) {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); 
                            flag_error = 1;    exit(0);}  
                    strcpy((yyval.value),symbolManager.get_value((yyvsp[0].name)));
                    }
#line 1941 "limbaj.tab.c"
    break;


#line 1945 "limbaj.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 446 "limbaj.y"


void yyerror(const char * s){
printf("error: %s at line:%d\n",s,yylineno);
}

int main(){
  yyparse();
  printf("%s", printare);
  if(flag_error == 0)
    symbolManager.print_to_file();
}
