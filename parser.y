%error-verbose
%locations
%{
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct ASTNode *, int);
int yylex();
%}

%union {
    int    type_int;
    float  type_float;
    char   type_char;
    char   type_id[32];
    struct ASTNode *ptr;
}

//  %type 定义非终结符的语义值类型
%type  <ptr>  program ExtDefList ExtDef Specifier ExtDecList FuncDec CompSt Indices Indice VarList VarDec ParamDec Stm StmList DefList Def DecList Dec Exp Args

// %token 定义终结符的语义值类型
%token <type_int> INT
%token <type_id> ID RELOP TYPE
%token <type_char> CHAR
%token <type_float> FLOAT
%token DPLUS DMINUS LP RP LB RB LC RC LS RS SEMI COMMA
%token PLUS MINUS STAR DIV ASSIGNOP AND OR NOT IF ELSE RETURN STRUCT
%token EXT_DEF_LIST EXT_VAR_DEF FUNC_DEF FUNC_DEC ARRAY_DEF EXT_DEC_LIST PARAM_LIST PARAM_DEC VAR_DEF DEC_LIST DEF_LIST COMP_STM STM_LIST EXP_STMT IF_THEN IF_THEN_ELSE INDICE INDICES
%token FUNC_CALL ARGS FUNCTION PARAM ARG CALL LABEL GOTO JLT JLE JGT JGE EQ NEQ
%token WHILE FOR CONTINUE BREAK  

%left ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right UMINUS NOT DPLUS DMINUS

%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE

%%

program: ExtDefList    { display($1,0); semantic_Analysis0($1);}     //显示语法树,语义分析
         ; 
ExtDefList: {$$=NULL;}
          | ExtDef ExtDefList {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=EXT_DEF_LIST;
                               $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$2;}//每一个EXTDEFLIST的结点，其第1棵子树对应一个外部变量声明或函数
          ;  
ExtDef:   Specifier ExtDecList SEMI   {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=EXT_VAR_DEF;
                               $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$2;}                               //该结点对应外部声明
         |Specifier FuncDec CompSt   {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=FUNC_DEF;  
                                $$->ptr[0]=$1;$$->ptr[1]=$2;$$->ptr[2]=$3;
		$$->pos=$$->ptr[2]->pos=$$->ptr[0]->pos;  }  //该结点对应一个函数定义
         |Specifier ID Indices   {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=ARRAY_DEF;
                                $$->ptr[0] = $1;$$->ptr[1] = $2;$$->ptr[2] = $3;
                                $$->pos = yylineno;}
         | error SEMI   {$$=NULL;}
         ;
Specifier:  TYPE    {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=TYPE;             //生成类型结点，目前仅基本类型
	             $$->pos=yylineno; strcpy($$->type_id,$1);
                     $$->type = !strcmp($1, "int") ? INT :
                                !strcmp($1, "float") ? FLOAT : CHAR;}                      
                ;
    
ExtDecList:  VarDec      {$$=$1;}       /*每一个EXT_DECLIST的结点，其第一棵子树对应一个变量名(ID类型的结点),第二棵子树对应剩下的外部变量名*/
           | VarDec COMMA ExtDecList {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=EXT_DEC_LIST;
                                                           $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[2]=$3;}          //外部变量名列表
           ;  
VarDec:  ID          {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=ID;
                               $$->pos=yylineno; strcpy($$->type_id,$1);}                    //ID结点，标识符符号串存放结点的type_id
         ;
FuncDec: ID LP VarList RP     {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=FUNC_DEC;
                               $$->pos=yylineno;   strcpy($$->type_id,$1); $$->ptr[0]=$3;}  //函数名（存放在$$->type_id）和形参的结点
	|ID LP  RP  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=FUNC_DEC;
                               $$->pos=yylineno;   strcpy($$->type_id,$1); $$->ptr[0]=NULL;}  //无参函数名结点

        ;  
VarList: ParamDec  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=PARAM_LIST;
                               $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=NULL;}     //形式参数列表(最后一个列表结点)
        | ParamDec COMMA  VarList  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=PARAM_LIST;
                               $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;}         //形式参数列表
        ;
ParamDec: Specifier VarDec  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=PARAM_DEC;
                                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$2;}     //形式参数说明
         ;

CompSt: LC DefList StmList RC   {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=COMP_STM; 
                                                $$->pos=$2?$2->pos:($3?$3->pos:yylineno);   $$->ptr[0]=$2;$$->ptr[1]=$3;}     //复合语句
       ;
StmList: {$$=NULL; }  
        | Stm StmList    {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=STM_LIST;  
                                      if($1) $$->pos=$1->pos;else $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$2;}
        ;
Indice:
    LS Exp RS {
        $$ = (struct ASTNode *)malloc(sizeof(struct ASTNode));
        $$->kind = INDICE; 
        $$->pos = yylineno;
        $$->ptr[0] = $2;
    }
    ;
Indices:
    Indice Indices {
        $$ = (struct ASTNode *)malloc(sizeof(struct ASTNode));
        $$->kind = INDICES;  // 确保你有一个定义的类型 `INDICES`
        $$->pos = yylineno;
        $$->ptr[0] = $1;  // 第一个 Indice
        $$->ptr[1] = $2;  // 剩余的 Indices
    }
    | /* ε */ {
        $$ = NULL;
    }
    ;
Stm:   Exp SEMI    {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=EXP_STMT; 
                               $$->pos=yylineno;   $$->ptr[0]=$1;}
      | CompSt      {$$=$1;   }         //复合语句结点直接最为语句结点，不再生成新的结点
      | RETURN Exp SEMI    {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=RETURN; 
                                          $$->pos=yylineno;   $$->ptr[0]=$2;}
      | IF LP Exp RP Stm %prec LOWER_THEN_ELSE    {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=IF_THEN;
                                          $$->pos=$3->pos;   $$->ptr[0]=$3; $$->ptr[1]=$5;}
      | IF LP Exp RP Stm ELSE Stm    {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=IF_THEN_ELSE;
                                          $$->pos=$3->pos;   $$->ptr[0]=$3; $$->ptr[1]=$5;$$->ptr[2]=$7;}
      | WHILE LP Exp RP Stm   {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=WHILE;
                                               $$->pos=$3->pos;   $$->ptr[0]=$3; $$->ptr[1]=$5;}
      | FOR LP Exp SEMI Exp SEMI Exp RP Stm {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=FOR;
                                          $$->pos=$3->pos;   $$->ptr[0]=$3;$$->ptr[1]=$5;$$->ptr[2]=$7;$$->ptr[3]=$9;}
      ;

DefList: {$$=NULL; }
        | Def DefList      {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=DEF_LIST;   
                    if ($1) $$->pos=$1->pos; else $$->pos=yylineno;     $$->ptr[0]=$1;$$->ptr[1]=$2;} //局部变量定义语句序列
        | error SEMI   {$$=NULL;}
        ;
Def:    Specifier DecList SEMI  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=VAR_DEF;  
                                          $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$2;} //局部变量定义语句序列
        ;
DecList: Dec {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=DEC_LIST;
                                          $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=NULL;} //局部变量
       | Dec COMMA DecList   {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=DEC_LIST;
                                          $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;} //局部变量定义语句序列
	   ;
Dec:     VarDec  {$$=$1;}
       | VarDec ASSIGNOP Exp  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=ASSIGNOP;
                                          $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;}  //局部变量初始化结点
       ;

Exp:    Exp ASSIGNOP Exp  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=ASSIGNOP;
                                             $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;strcpy($$->type_id,"ASSIGNOP");}

      | Exp AND Exp  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=AND;
                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;strcpy($$->type_id,"AND");}
      | Exp OR Exp   {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=OR;
                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;strcpy($$->type_id,"OR");}
      | Exp RELOP Exp {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=RELOP;
                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;
                                strcpy($$->type_id,$2);}  //词法分析关系运算符号自身值保存在$2中
      | Exp PLUS Exp  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=PLUS;
                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;strcpy($$->type_id,"PLUS");}
      | Exp MINUS Exp {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=MINUS;
                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;strcpy($$->type_id,"MINUS");}
      | Exp STAR Exp {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=STAR;
                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;strcpy($$->type_id,"STAR");}
      | Exp DIV Exp  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=DIV;
                                $$->pos=yylineno;   $$->ptr[0]=$1;$$->ptr[1]=$3;strcpy($$->type_id,"DIV");}
      | LP Exp RP     {$$=$2;}
      | MINUS Exp %prec UMINUS  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=UMINUS;
                                $$->pos=yylineno;   $$->ptr[0]=$2;strcpy($$->type_id,"UMINUS");}
      | NOT Exp       {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=NOT;
                                $$->pos=yylineno;   $$->ptr[0]=$2;strcpy($$->type_id,"NOT");}
      | DPLUS  Exp       {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=DPLUS;strcpy($$->type_id,"DPLUS");
                                  $$->pos=yylineno;   $$->ptr[0]=$2;}  //这里仅有前缀，还需后缀形式，以及--
      | ID LP Args RP  {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=FUNC_CALL;
                                $$->pos=yylineno; strcpy($$->type_id,$1);  $$->ptr[0]=$3;}
      | ID LP RP      {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=FUNC_CALL;
                                $$->pos=yylineno; strcpy($$->type_id,$1);  $$->ptr[0]=NULL;}
      | ID                 {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=ID;
                               $$->pos=yylineno;  strcpy($$->type_id,$1);}                                   //变量
      | INT          {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=INT;
                               $$->pos=yylineno;  $$->type=INT;$$->type_int=$1;}    //整型常量
      | FLOAT     {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=FLOAT;
                               $$->pos=yylineno; $$->type=FLOAT; $$->type_float=$1;}    //浮点常量
      | CHAR      {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=CHAR;
                                $$->pos=yylineno;  $$->type=CHAR;$$->type_char=$1;}
      ;
Args:    Exp COMMA Args    {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=ARGS;
                                               $$->pos=yylineno;  $$->ptr[0]=$1;$$->ptr[1]=$3;} 

       | Exp              {$$=(struct ASTNode *)malloc(sizeof(struct ASTNode)); $$->kind=ARGS;
                               $$->pos=yylineno;  $$->ptr[0]=$1;$$->ptr[1]=NULL;} 

       ;
       
%%

int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return 0;
	yylineno=1;
	yyparse();
	return 0;
	}
#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}