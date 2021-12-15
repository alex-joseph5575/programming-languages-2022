/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         lambda_nat_parse
#define yylex           lambda_nat_lex
#define yyerror         lambda_nat_error
#define yydebug         lambda_nat_debug
#define yynerrs         lambda_nat_nerrs
#define yylval          lambda_nat_lval
#define yychar          lambda_nat_char
#define yylloc          lambda_nat_lloc

/* First part of user prologue.  */
#line 6 "LambdaNat4.y"

/* Begin C preamble code */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

typedef struct lambda_nat__buffer_state *YY_BUFFER_STATE;
YY_BUFFER_STATE lambda_nat__scan_string(const char *str);
void lambda_nat__delete_buffer(YY_BUFFER_STATE buf);
extern int yyparse(void);
extern int yylex(void);
extern int lambda_nat__init_lexer(FILE * inp);
extern void yyerror(const char *str);

ListExp reverseListExp(ListExp l)
{
  ListExp prev = 0;
  ListExp tmp = 0;
  while (l)
  {
    tmp = l->listexp_;
    l->listexp_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}

/* Global variables holding parse results for entrypoints. */
Program YY_RESULT_Program_ = 0;
ListExp YY_RESULT_ListExp_ = 0;
Exp YY_RESULT_Exp_ = 0;

/* Entrypoint: parse Program from file. */
Program pProgram(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}

/* Entrypoint: parse Program from string. */
Program psProgram(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}

/* Entrypoint: parse ListExp from file. */
ListExp pListExp(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExp_;
  }
}

/* Entrypoint: parse ListExp from string. */
ListExp psListExp(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp1(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp1(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp2(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp2(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp3(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp3(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp4(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp4(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp6(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp6(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp9(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp9(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp10(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp10(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp13(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp13(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp15(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp15(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp16(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp16(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp17(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp17(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp5(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp5(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp7(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp7(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp8(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp8(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp11(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp11(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp12(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp12(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from file. */
Exp pExp14(FILE *inp)
{
  lambda_nat__init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

/* Entrypoint: parse Exp from string. */
Exp psExp14(const char *str)
{
  YY_BUFFER_STATE buf;
  lambda_nat__init_lexer(0);
  buf = lambda_nat__scan_string(str);
  int result = yyparse();
  lambda_nat__delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}


/* End C preamble code */

#line 780 "Parser.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int lambda_nat_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _SYMB_7 = 259,                 /* _SYMB_7  */
    _SYMB_9 = 260,                 /* _SYMB_9  */
    _SYMB_10 = 261,                /* _SYMB_10  */
    _SYMB_6 = 262,                 /* _SYMB_6  */
    _SYMB_4 = 263,                 /* _SYMB_4  */
    _SYMB_5 = 264,                 /* _SYMB_5  */
    _SYMB_2 = 265,                 /* _SYMB_2  */
    _SYMB_8 = 266,                 /* _SYMB_8  */
    _SYMB_0 = 267,                 /* _SYMB_0  */
    _SYMB_3 = 268,                 /* _SYMB_3  */
    _SYMB_1 = 269,                 /* _SYMB_1  */
    _SYMB_11 = 270,                /* _SYMB_11  */
    _SYMB_12 = 271,                /* _SYMB_12  */
    _SYMB_13 = 272,                /* _SYMB_13  */
    _SYMB_14 = 273,                /* _SYMB_14  */
    _SYMB_15 = 274,                /* _SYMB_15  */
    _SYMB_16 = 275,                /* _SYMB_16  */
    _SYMB_17 = 276,                /* _SYMB_17  */
    _SYMB_18 = 277,                /* _SYMB_18  */
    _SYMB_19 = 278,                /* _SYMB_19  */
    _SYMB_20 = 279,                /* _SYMB_20  */
    _INTEGER_ = 280                /* _INTEGER_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 709 "LambdaNat4.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Program program_;
  ListExp listexp_;
  Exp exp_;

#line 862 "Parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE lambda_nat_lval;
extern YYLTYPE lambda_nat_lloc;
int lambda_nat_parse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__SYMB_7 = 4,                    /* _SYMB_7  */
  YYSYMBOL__SYMB_9 = 5,                    /* _SYMB_9  */
  YYSYMBOL__SYMB_10 = 6,                   /* _SYMB_10  */
  YYSYMBOL__SYMB_6 = 7,                    /* _SYMB_6  */
  YYSYMBOL__SYMB_4 = 8,                    /* _SYMB_4  */
  YYSYMBOL__SYMB_5 = 9,                    /* _SYMB_5  */
  YYSYMBOL__SYMB_2 = 10,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_8 = 11,                   /* _SYMB_8  */
  YYSYMBOL__SYMB_0 = 12,                   /* _SYMB_0  */
  YYSYMBOL__SYMB_3 = 13,                   /* _SYMB_3  */
  YYSYMBOL__SYMB_1 = 14,                   /* _SYMB_1  */
  YYSYMBOL__SYMB_11 = 15,                  /* _SYMB_11  */
  YYSYMBOL__SYMB_12 = 16,                  /* _SYMB_12  */
  YYSYMBOL__SYMB_13 = 17,                  /* _SYMB_13  */
  YYSYMBOL__SYMB_14 = 18,                  /* _SYMB_14  */
  YYSYMBOL__SYMB_15 = 19,                  /* _SYMB_15  */
  YYSYMBOL__SYMB_16 = 20,                  /* _SYMB_16  */
  YYSYMBOL__SYMB_17 = 21,                  /* _SYMB_17  */
  YYSYMBOL__SYMB_18 = 22,                  /* _SYMB_18  */
  YYSYMBOL__SYMB_19 = 23,                  /* _SYMB_19  */
  YYSYMBOL__SYMB_20 = 24,                  /* _SYMB_20  */
  YYSYMBOL__INTEGER_ = 25,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 26,                  /* $accept  */
  YYSYMBOL_Program = 27,                   /* Program  */
  YYSYMBOL_ListExp = 28,                   /* ListExp  */
  YYSYMBOL_Exp1 = 29,                      /* Exp1  */
  YYSYMBOL_Exp2 = 30,                      /* Exp2  */
  YYSYMBOL_Exp3 = 31,                      /* Exp3  */
  YYSYMBOL_Exp4 = 32,                      /* Exp4  */
  YYSYMBOL_Exp6 = 33,                      /* Exp6  */
  YYSYMBOL_Exp9 = 34,                      /* Exp9  */
  YYSYMBOL_Exp10 = 35,                     /* Exp10  */
  YYSYMBOL_Exp13 = 36,                     /* Exp13  */
  YYSYMBOL_Exp15 = 37,                     /* Exp15  */
  YYSYMBOL_Exp16 = 38,                     /* Exp16  */
  YYSYMBOL_Exp17 = 39,                     /* Exp17  */
  YYSYMBOL_Exp = 40,                       /* Exp  */
  YYSYMBOL_Exp5 = 41,                      /* Exp5  */
  YYSYMBOL_Exp7 = 42,                      /* Exp7  */
  YYSYMBOL_Exp8 = 43,                      /* Exp8  */
  YYSYMBOL_Exp11 = 44,                     /* Exp11  */
  YYSYMBOL_Exp12 = 45,                     /* Exp12  */
  YYSYMBOL_Exp14 = 46                      /* Exp14  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   64

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  69

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   769,   769,   771,   772,   773,   775,   776,   778,   779,
     781,   782,   784,   785,   787,   788,   789,   791,   792,   794,
     795,   796,   797,   799,   800,   802,   803,   804,   806,   807,
     809,   810,   812,   814,   816,   818,   820,   822,   824
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
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_SYMB_7",
  "_SYMB_9", "_SYMB_10", "_SYMB_6", "_SYMB_4", "_SYMB_5", "_SYMB_2",
  "_SYMB_8", "_SYMB_0", "_SYMB_3", "_SYMB_1", "_SYMB_11", "_SYMB_12",
  "_SYMB_13", "_SYMB_14", "_SYMB_15", "_SYMB_16", "_SYMB_17", "_SYMB_18",
  "_SYMB_19", "_SYMB_20", "_INTEGER_", "$accept", "Program", "ListExp",
  "Exp1", "Exp2", "Exp3", "Exp4", "Exp6", "Exp9", "Exp10", "Exp13",
  "Exp15", "Exp16", "Exp17", "Exp", "Exp5", "Exp7", "Exp8", "Exp11",
  "Exp12", "Exp14", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280
};
#endif

#define YYPACT_NINF (-21)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       2,   -21,     2,   -14,     2,     2,   -20,     2,   -21,   -21,
      15,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     5,     4,
     -21,     6,   -21,    11,   -21,   -21,   -21,    23,   -21,   -21,
      25,    22,   -21,    20,    10,    24,   -21,   -21,     4,     4,
       4,   -21,     4,     2,     4,   -21,     2,     2,    26,     2,
     -21,   -21,     3,   -21,   -21,   -21,   -21,    13,     2,    18,
       2,    28,     2,    27,     2,   -21,     2,   -21,   -21
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    25,     0,     0,     0,     0,     0,     0,    30,    28,
       0,     2,    32,     7,     9,    11,    33,    35,    18,    37,
      38,    27,    29,     4,    13,    16,    34,    22,    36,    24,
       0,     0,    14,     0,     0,     0,    15,     1,     0,     0,
       0,    23,     0,     3,     0,    31,     0,     0,     0,     0,
      19,    20,    17,    26,     5,    21,     6,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,    12,     8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -21,   -21,    -5,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,    -1,   -21,   -21,    -2,   -21,   -21,   -21,   -18,     7,
      29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      30,    34,    32,    33,    35,    36,     1,     2,     1,     2,
      31,    38,    39,    38,    39,    37,     3,    42,     4,     5,
      50,    51,     6,    43,    40,     7,     8,     9,     8,     9,
      44,    45,    46,    47,    48,    60,    62,    49,    54,    58,
      52,    53,    66,     0,    56,    57,    64,    59,    41,     0,
       0,    55,     0,     0,     0,     0,    61,     0,    63,     0,
      65,     0,    67,     0,    68
};

static const yytype_int8 yycheck[] =
{
       2,    21,     4,     5,    24,     7,     4,     5,     4,     5,
      24,     8,     9,     8,     9,     0,    14,    11,    16,    17,
      38,    39,    20,    12,    19,    23,    24,    25,    24,    25,
       7,     6,    10,    13,    24,    22,    18,    13,    43,    13,
      40,    42,    15,    -1,    46,    47,    18,    49,    19,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,    14,    16,    17,    20,    23,    24,    25,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      40,    24,    40,    40,    21,    24,    40,     0,     8,     9,
      19,    46,    11,    12,     7,     6,    10,    13,    24,    13,
      44,    44,    35,    37,    28,    45,    40,    40,    13,    40,
      22,    40,    18,    40,    18,    40,    15,    40,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    26,    27,    28,    28,    28,    29,    29,    30,    30,
      31,    31,    32,    32,    33,    33,    33,    34,    34,    35,
      35,    35,    35,    36,    36,    37,    37,    37,    38,    38,
      39,    39,    40,    41,    42,    43,    44,    45,    46
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     3,     4,     1,     8,     1,
       6,     1,     7,     1,     2,     2,     1,     3,     1,     3,
       3,     3,     1,     2,     1,     1,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ListExp  */
#line 769 "LambdaNat4.y"
                  { (yyval.program_) = make_Prog((yyvsp[0].listexp_)); YY_RESULT_Program_= (yyval.program_); }
#line 2044 "Parser.c"
    break;

  case 3: /* ListExp: %empty  */
#line 771 "LambdaNat4.y"
                      { (yyval.listexp_) = 0; YY_RESULT_ListExp_= (yyval.listexp_); }
#line 2050 "Parser.c"
    break;

  case 4: /* ListExp: Exp  */
#line 772 "LambdaNat4.y"
        { (yyval.listexp_) = make_ListExp((yyvsp[0].exp_), 0); YY_RESULT_ListExp_= (yyval.listexp_); }
#line 2056 "Parser.c"
    break;

  case 5: /* ListExp: Exp _SYMB_0 ListExp  */
#line 773 "LambdaNat4.y"
                        { (yyval.listexp_) = make_ListExp((yyvsp[-2].exp_), (yyvsp[0].listexp_)); YY_RESULT_ListExp_= (yyval.listexp_); }
#line 2062 "Parser.c"
    break;

  case 6: /* Exp1: _SYMB_1 _SYMB_20 _SYMB_2 Exp  */
#line 775 "LambdaNat4.y"
                                    { (yyval.exp_) = make_EAbs((yyvsp[-2]._string), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2068 "Parser.c"
    break;

  case 7: /* Exp1: Exp2  */
#line 776 "LambdaNat4.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2074 "Parser.c"
    break;

  case 8: /* Exp2: _SYMB_13 Exp _SYMB_3 Exp _SYMB_18 Exp _SYMB_11 Exp  */
#line 778 "LambdaNat4.y"
                                                          { (yyval.exp_) = make_EIf((yyvsp[-6].exp_), (yyvsp[-4].exp_), (yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2080 "Parser.c"
    break;

  case 9: /* Exp2: Exp3  */
#line 779 "LambdaNat4.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2086 "Parser.c"
    break;

  case 10: /* Exp3: _SYMB_16 _SYMB_20 _SYMB_3 Exp _SYMB_14 Exp  */
#line 781 "LambdaNat4.y"
                                                  { (yyval.exp_) = make_ELet((yyvsp[-4]._string), (yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2092 "Parser.c"
    break;

  case 11: /* Exp3: Exp4  */
#line 782 "LambdaNat4.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2098 "Parser.c"
    break;

  case 12: /* Exp4: _SYMB_16 _SYMB_17 _SYMB_20 _SYMB_3 Exp _SYMB_14 Exp  */
#line 784 "LambdaNat4.y"
                                                           { (yyval.exp_) = make_ERec((yyvsp[-4]._string), (yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2104 "Parser.c"
    break;

  case 13: /* Exp4: Exp5  */
#line 785 "LambdaNat4.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2110 "Parser.c"
    break;

  case 14: /* Exp6: _SYMB_12 Exp  */
#line 787 "LambdaNat4.y"
                    { (yyval.exp_) = make_EHd((yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2116 "Parser.c"
    break;

  case 15: /* Exp6: _SYMB_19 Exp  */
#line 788 "LambdaNat4.y"
                 { (yyval.exp_) = make_ETl((yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2122 "Parser.c"
    break;

  case 16: /* Exp6: Exp7  */
#line 789 "LambdaNat4.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2128 "Parser.c"
    break;

  case 17: /* Exp9: Exp10 _SYMB_15 Exp10  */
#line 791 "LambdaNat4.y"
                            { (yyval.exp_) = make_ELE((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2134 "Parser.c"
    break;

  case 18: /* Exp9: Exp10  */
#line 792 "LambdaNat4.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2140 "Parser.c"
    break;

  case 19: /* Exp10: Exp10 _SYMB_4 Exp11  */
#line 794 "LambdaNat4.y"
                            { (yyval.exp_) = make_EPlus((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2146 "Parser.c"
    break;

  case 20: /* Exp10: Exp10 _SYMB_5 Exp11  */
#line 795 "LambdaNat4.y"
                        { (yyval.exp_) = make_EMinus((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2152 "Parser.c"
    break;

  case 21: /* Exp10: Exp11 _SYMB_6 Exp12  */
#line 796 "LambdaNat4.y"
                        { (yyval.exp_) = make_ETimes((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2158 "Parser.c"
    break;

  case 22: /* Exp10: Exp11  */
#line 797 "LambdaNat4.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2164 "Parser.c"
    break;

  case 23: /* Exp13: Exp13 Exp14  */
#line 799 "LambdaNat4.y"
                    { (yyval.exp_) = make_EApp((yyvsp[-1].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2170 "Parser.c"
    break;

  case 24: /* Exp13: Exp14  */
#line 800 "LambdaNat4.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2176 "Parser.c"
    break;

  case 25: /* Exp15: _SYMB_7  */
#line 802 "LambdaNat4.y"
                { (yyval.exp_) = make_ENil(); YY_RESULT_Exp_= (yyval.exp_); }
#line 2182 "Parser.c"
    break;

  case 26: /* Exp15: Exp16 _SYMB_8 Exp15  */
#line 803 "LambdaNat4.y"
                        { (yyval.exp_) = make_ECons((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2188 "Parser.c"
    break;

  case 27: /* Exp15: Exp16  */
#line 804 "LambdaNat4.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2194 "Parser.c"
    break;

  case 28: /* Exp16: _INTEGER_  */
#line 806 "LambdaNat4.y"
                  { (yyval.exp_) = make_EInt((yyvsp[0]._int)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2200 "Parser.c"
    break;

  case 29: /* Exp16: Exp17  */
#line 807 "LambdaNat4.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2206 "Parser.c"
    break;

  case 30: /* Exp17: _SYMB_20  */
#line 809 "LambdaNat4.y"
                 { (yyval.exp_) = make_EVar((yyvsp[0]._string)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2212 "Parser.c"
    break;

  case 31: /* Exp17: _SYMB_9 Exp _SYMB_10  */
#line 810 "LambdaNat4.y"
                         { (yyval.exp_) = (yyvsp[-1].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2218 "Parser.c"
    break;

  case 32: /* Exp: Exp1  */
#line 812 "LambdaNat4.y"
           { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2224 "Parser.c"
    break;

  case 33: /* Exp5: Exp6  */
#line 814 "LambdaNat4.y"
            { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2230 "Parser.c"
    break;

  case 34: /* Exp7: Exp8  */
#line 816 "LambdaNat4.y"
            { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2236 "Parser.c"
    break;

  case 35: /* Exp8: Exp9  */
#line 818 "LambdaNat4.y"
            { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2242 "Parser.c"
    break;

  case 36: /* Exp11: Exp12  */
#line 820 "LambdaNat4.y"
              { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2248 "Parser.c"
    break;

  case 37: /* Exp12: Exp13  */
#line 822 "LambdaNat4.y"
              { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2254 "Parser.c"
    break;

  case 38: /* Exp14: Exp15  */
#line 824 "LambdaNat4.y"
              { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2260 "Parser.c"
    break;


#line 2264 "Parser.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 827 "LambdaNat4.y"


void yyerror(const char *str)
{
  extern char *lambda_nat_text;
  fprintf(stderr,"error: %d,%d: %s at %s\n",
  lambda_nat_lloc.first_line, lambda_nat_lloc.first_column, str, lambda_nat_text);
}
