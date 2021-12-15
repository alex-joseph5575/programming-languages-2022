#ifndef ABSYN_HEADER
#define ABSYN_HEADER

/* C++ Abstract Syntax Interface generated by the BNF Converter.*/

/********************   TypeDef Section    ********************/

typedef int Integer;
typedef char Char;
typedef double Double;
typedef char* String;
typedef char* Ident;
typedef char* Id;

/********************   Forward Declarations    ***********************/

struct ListExp_;
typedef struct ListExp_ *ListExp;

struct Program_;
typedef struct Program_ *Program;

struct Exp_;
typedef struct Exp_ *Exp;

/********************   Abstract Syntax Classes    ********************/

struct Program_
{
  enum { is_Prog } kind;
  union
  {
    struct { ListExp listexp_; } prog_;
  } u;
};

Program make_Prog(ListExp p0);

struct ListExp_
{
  Exp exp_;
  ListExp listexp_;
};

ListExp make_ListExp(Exp p1, ListExp p2);

struct Exp_
{
  enum { is_EAbs, is_EIf, is_ELet, is_ERec, is_EHd, is_ETl, is_ELE, is_EPlus, is_EMinus, is_ETimes, is_EApp, is_ENil, is_ECons, is_EInt, is_EVar, is_EFix } kind;
  union
  {
    struct { Exp exp_; Id id_; } eabs_;
    struct { Exp exp_1, exp_2, exp_3, exp_4; } eif_;
    struct { Exp exp_1, exp_2; Id id_; } elet_;
    struct { Exp exp_1, exp_2; Id id_; } erec_;
    struct { Exp exp_; } ehd_;
    struct { Exp exp_; } etl_;
    struct { Exp exp_1, exp_2; } ele_;
    struct { Exp exp_1, exp_2; } eplus_;
    struct { Exp exp_1, exp_2; } eminus_;
    struct { Exp exp_1, exp_2; } etimes_;
    struct { Exp exp_1, exp_2; } eapp_;
    struct { Exp exp_1, exp_2; } econs_;
    struct { Integer integer_; } eint_;
    struct { Id id_; } evar_;
    struct { Exp exp_; } efix_;
  } u;
};

Exp make_EAbs(Id p0, Exp p1);
Exp make_EIf(Exp p0, Exp p1, Exp p2, Exp p3);
Exp make_ELet(Id p0, Exp p1, Exp p2);
Exp make_ERec(Id p0, Exp p1, Exp p2);
Exp make_EHd(Exp p0);
Exp make_ETl(Exp p0);
Exp make_ELE(Exp p0, Exp p1);
Exp make_EPlus(Exp p0, Exp p1);
Exp make_EMinus(Exp p0, Exp p1);
Exp make_ETimes(Exp p0, Exp p1);
Exp make_EApp(Exp p0, Exp p1);
Exp make_ENil(void);
Exp make_ECons(Exp p0, Exp p1);
Exp make_EInt(Integer p0);
Exp make_EVar(Id p0);
Exp make_EFix(Exp p0);


#endif