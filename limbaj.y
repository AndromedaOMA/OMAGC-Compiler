%{
#include "OOP_func.h"
extern char* yytext;
extern int yylineno;
int yylex();
void yyerror(const char *s);

int flag_error = 0;
char printare[1024];
char function_name[256];

class SymbolManager symbolManager;
%}

%union
{  
    char* data_type;
    char* name;
    char* value;
}
%start BEGIN
%token MAIN
%token FUNCTION PRINT CLASS ARRAY CL_AS
%token IF WHILE FOR CALL ELSE
%token EVAL TYPEOF
%token <name> VARIABLE_NAME
%token <value> INT_VALUE BOOL_VALUE STRING_VALUE CHAR_VALUE FLOAT_VALUE
%type <value> VALUE EXP
%token <data_type> DATA_TYPE
 
%left OR
%left AND 
%left GRE LES GEQ LEQ NEQ EQ
%left '+' '-'
%left '*' '/'
%left '(' ')'
%%

BEGIN : CLASS_BODY
      | CLASS_VALUE
      | BEGIN CLASS_VALUE

      | STMT
      | BEGIN STMT

      | FUNC
      | BEGIN FUNC
      | FUNCTION_ANTET
      | BEGIN FUNCTION_ANTET
      | EVAL_FUNC
      | BEGIN EVAL_FUNC
      | TYPEOF_FUNC
      | BEGIN TYPEOF_FUNC
      
      | MAIN_START
      ;

//===================================CLASS_SECTION===============================================

CLASS_BODY :  VARIABLE_NAME CLASS VARIABLE_LIST'{' STMT_LIST '}'';' 
                {symbolManager.push_class($1);};

VARIABLE_LIST : VARIABLE_NAME {symbolManager.push_variables("class_variable" , $1 , "NULL");}
                | VARIABLE_LIST ',' VARIABLE_NAME {symbolManager.push_variables("class_variable" , $3 , "NULL");};

STMT_LIST : STMT_CLASS ';' 
          | STMT_LIST STMT_CLASS ';' 

STMT_CLASS : DATA_TYPE VARIABLE_NAME '=' EXP{symbolManager.push_variables($1 , $2 , $4);}
            | DATA_TYPE VARIABLE_NAME {symbolManager.push_variables($1 , $2 , "NULL");};

CLASS_VALUE :  VARIABLE_NAME CL_AS VARIABLE_NAME '=' EXP ';' {
                    if(!symbolManager.check_variable_class($1 , $3)) 
                        {printf("ERROR! Line %d, variable \"%s\" or \"%s\"does not exist.\n", yylineno, $1 , $3);
                        flag_error = 1;
                        exit(0);}
                    if(symbolManager.update_value_class($1 , $3 , $5) == 0)
                        {printf("ERROR! Line %d, variables \"%s\" and \"%s\" not a same data_type.\n", yylineno, $1 , $3);
                        flag_error = 1;
                        exit(0);}
                    };

//=======================================GLOBAL_SECTION==============================================

STMT : DATA_TYPE VARIABLE_NAME '=' EXP ';' {if(symbolManager.lookup($2))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                if(!symbolManager.check_data_type($1,$4))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);}
                                symbolManager.push_symbol($1, $2, $4, "global");}
     | DATA_TYPE VARIABLE_NAME ';' {if(symbolManager.lookup($2))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                 if(symbolManager.is_const($1)){printf("ERROR! Line %d, const must be initialised.\n", yylineno);flag_error = 1;
                                exit(0);}  
                                symbolManager.push_symbol($1, $2, "NULL", "global");}
     | VARIABLE_NAME '=' EXP ';' {if(symbolManager.is_const(symbolManager.get_data_type($1))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, $1);
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.lookup($1)) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $1);
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.check_data_type(symbolManager.get_data_type($1),$3))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);} symbolManager.reassign_value($1, $3);}
     
//=======================================FUNCTION_SECTION============================================

FUNC: FUNC_CALL ';'

FUNC_CALL : CALL VARIABLE_NAME '(' FUNC_CALL_PARAM ')' {if(!symbolManager.look_function($2))
                                                          {printf("ERROR! Line %d, function not declared.\n", yylineno);
                                                          flag_error = 1;
                                                          exit(0);
                                                          }
                                                        }
          | CALL VARIABLE_NAME '(' FUNC_CALL ')' 

FUNC_CALL_PARAM : EXP           
                | FUNC_CALL_PARAM ',' EXP

FUNCTION_ANTET : FUNCTION FUNCTION_BLOCK

FUNCTION_BLOCK : DATA_TYPE VARIABLE_NAME '('  INT_VALUE ',' FUNCTION_PARAMETERS ')' FUNCTION_BODY 
                                                                  {if(symbolManager.check_signature($1, $2, $4))
                                                                    symbolManager.push_function($1, $2, $4, "global");
                                                                  else {printf("ERROR! Line %d, function signature already exists.\n", yylineno); flag_error = 1; exit(0);}
                                                                  }

FUNCTION_PARAMETERS : DATA_TYPE VARIABLE_NAME {symbolManager.push_function_param($1, $2, "NULL", "antet");}
                    | FUNCTION_PARAMETERS ',' DATA_TYPE VARIABLE_NAME {symbolManager.push_function_param($3, $4, "NULL","antet");}

FUNCTION_BODY : '{' FUNC_BLOCK '}'

FUNC_BLOCK : DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_function_param($1, $2, $4, "function");}  
          |  FUNC_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_function_param($2, $3, $5, "function");}
          |  DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_function_param($1, $2, "NULL", "function");}
          |  FUNC_BLOCK DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_function_param($2, $3, "NULL", "function");}
          |  FUNC_BLOCK ARRAY ARRAY_FUNC ';'
          |  ARRAY ARRAY_FUNC ';'
          |  PRINT_FUNC ';' 
          |  FUNC_BLOCK PRINT_FUNC ';' 

PRINT_FUNC : PRINT '(' VALUE ',' VARIABLE_NAME ')' { 
        if(symbolManager.lookup_function_variable($5))
      {
        char buff[256];
        strcpy(buff,$3);
        buff[strlen(buff)-1]='\0';
        strcpy(buff,buff+1);
        strcat(printare, buff);
          strcat(printare, symbolManager.variable_value_by_scope($5));
          strcat(printare,"\n");   
      }
      else
        if(symbolManager.lookup($5))
      {
        char buff[256];
        strcpy(buff,$3);
        buff[strlen(buff)-1]='\0';
        strcpy(buff,buff+1);
        strcat(printare, buff);
        strcat(printare,symbolManager.get_value($5));
        strcat(printare,"\n");
      }
      else
      {
        printf("ERROR! Line %d, \"%s\" not declared in this scope.\n",yylineno, $5);
        flag_error = 1;
        exit(0);
      }
      }
      
EVAL_FUNC : DATA_TYPE VARIABLE_NAME '=' EVAL '(' EXP ')' ';'{if(symbolManager.lookup($2))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                if(!symbolManager.check_data_type($1,$6))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);}
                                symbolManager.push_symbol($1, $2, $6, "function");}

          | VARIABLE_NAME  '=' EVAL '(' EXP ')' ';'{if(symbolManager.is_const(symbolManager.get_data_type($1))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, $1);
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.lookup($1)) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $1);
                                flag_error = 1;exit(0);}
                                    if(!symbolManager.check_data_type(symbolManager.get_data_type($1),$5))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);} symbolManager.reassign_value($1, $5);}

TYPEOF_FUNC: DATA_TYPE VARIABLE_NAME '=' TYPEOF '(' EXP ')' ';' {if(symbolManager.lookup($2))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1; exit(0);}
                                if(symbolManager.is_int($6)) symbolManager.push_symbol($1, $2, "integer", "function");
                                else if(symbolManager.is_float($6)) symbolManager.push_symbol($1, $2, "float", "function");}

          | VARIABLE_NAME  '=' TYPEOF '(' EXP ')' ';' {if(symbolManager.is_const(symbolManager.get_data_type($1))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, $1);
                                flag_error = 1;exit(0);}
                                if(!symbolManager.lookup($1)) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $1); flag_error = 1;exit(0);}
                                if(symbolManager.is_int($5)) symbolManager.reassign_value($1, "integer");
                                else if(symbolManager.is_float($5)) symbolManager.reassign_value($1, "float");}
           
//===========================================MAIN_SECTION============================================

MAIN_START: BEGIN MAIN_STR

MAIN_STR: MAIN '(' ')' '{' MAIN_BLOCK '}'

MAIN_BLOCK: PRINT PRINT_LIST ';'
        | MAIN_BLOCK PRINT PRINT_LIST ';'
        | ARRAY ARRAY_BODY ';'
        | MAIN_BLOCK ARRAY ARRAY_BODY ';'
        | IF_BODY
        | MAIN_BLOCK IF_BODY
        | WHILE_BODY
        | MAIN_BLOCK WHILE_BODY
        | FOR_BODY
        | MAIN_BLOCK FOR_BODY
        | STMT
        | MAIN_BLOCK STMT
        | EVAL_FUNC
        | MAIN_BLOCK EVAL_FUNC
        | TYPEOF_FUNC
        | MAIN_BLOCK TYPEOF_FUNC

IF_BODY : IF '(' BOOL_EXP ')' '{' IF_BLOCK '}' ELSE '{' IF_BLOCK '}'

IF_BLOCK :  DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_symbol($1, $2, $4, "if");}  
          |  IF_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_symbol($2, $3, $5, "if");}
          |  DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_symbol($1, $2, "NULL", "if");}
          |  IF_BLOCK DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_symbol($2, $3, "NULL", "if");}
          |  IF_BLOCK ARRAY ARRAY_IF ';'
          |  ARRAY ARRAY_IF ';'
          |  PRINT_IF ';'
          |  IF_BLOCK PRINT_IF ';' 

PRINT_IF : PRINT '(' VALUE ',' VARIABLE_NAME ')' { if (symbolManager.lookup($5)) {
                                {char buff[256]="";
                                strcpy(buff,$3);
                                buff[strlen(buff)-1]='\0';
                                strcpy(buff,buff+1);
                                strcat(printare,buff);
                                if(symbolManager.value_by_scope($5, "if")!=NULL) strcpy(buff, symbolManager.value_by_scope($5, "if"));
                                else strcpy(buff, symbolManager.get_value($5));
                                strcat(printare,buff);
                                strcat(printare,"\n");}}
                                else {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $5);
                               flag_error = 1; exit(0);}}

ARRAY_IF : DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'{symbolManager.push_array($1, $2, $4, "if");}
           | VARIABLE_NAME '[' INT_VALUE ']' '=' VALUE 




           
ARRAY_FOR : DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'{symbolManager.push_array($1, $2, $4, "for");}
           | VARIABLE_NAME '[' INT_VALUE ']' '=' VALUE       


WHILE_BODY :  WHILE '(' BOOL_EXP ')' '{' WHILE_BLOCK '}' 

WHILE_BLOCK : DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_symbol($1, $2, $4, "while");}  
          |  WHILE_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_symbol($2, $3, $5, "while");}
          |  DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_symbol($1, $2, "NULL", "while");}
          |  WHILE_BLOCK DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_symbol($2, $3, "NULL", "while");}
          |  ARRAY ARRAY_WHILE ';'
          |  WHILE_BLOCK ARRAY ARRAY_WHILE ';'
          |  PRINT_WHILE ';' 
          |  WHILE_BLOCK PRINT_WHILE ';' 

PRINT_WHILE : PRINT '(' VALUE ',' VARIABLE_NAME ')' { if (symbolManager.lookup($5)) {
                                {char buff[256]="";
                                strcpy(buff,$3);
                                buff[strlen(buff)-1]='\0';
                                strcpy(buff,buff+1);
                                strcat(printare,buff);
                                if(symbolManager.value_by_scope($5, "while")!=NULL) strcpy(buff, symbolManager.value_by_scope($5, "while"));
                                else strcpy(buff, symbolManager.get_value($5));
                                strcat(printare,buff);
                                strcat(printare,"\n");}}
                                else {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $5);
                                flag_error = 1; exit(0);}}

ARRAY_WHILE: DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'{symbolManager.push_array($1, $2, $4, "while");}
           | VARIABLE_NAME '[' INT_VALUE ']' '=' VALUE            




FOR_BODY : FOR '(' FOR1 ',' BOOL_EXP ',' FOR2 ')' '{' FOR_BLOCK '}'

FOR1 :  DATA_TYPE VARIABLE_NAME '=' EXP {if(symbolManager.lookup($2))
                                {printf("ERROR! Line %d, variable already declared.\n", yylineno);flag_error = 1;
                                exit(0);}
                                if(!symbolManager.check_data_type($1,$4))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);}
                                symbolManager.push_symbol($1, $2, $4, "for");
                                }
      | VARIABLE_NAME  '=' EXP {if(symbolManager.is_const(symbolManager.get_data_type($1))) {printf("ERROR! Line %d, variable \"%s\" is const, cannot be reassigned.\n", yylineno, $1);
                               flag_error = 1; exit(0);}
                                    if(!symbolManager.lookup($1)) {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $1);
                               flag_error = 1; exit(0);}
                                    if(!symbolManager.check_data_type(symbolManager.get_data_type($1),$3))
                                {printf("ERROR! Line %d, type not expected.\n", yylineno);flag_error = 1;
                                exit(0);} symbolManager.reassign_value($1, $3);}                          


BOOL_EXP : EXP BOOL_TOKENS EXP 
         | BOOL_EXP LOGIC_OPERATORS EXP BOOL_TOKENS EXP 
         ;

LOGIC_OPERATORS : AND 
                | OR          
                ;
BOOL_TOKENS : EQ 
            | NEQ 
            | GRE 
            | LES 
            | GEQ 
            | LEQ 


FOR2 : EXP '=' EXP 

FOR_BLOCK :  DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_symbol($1, $2, $4, "for");}  
          |  FOR_BLOCK DATA_TYPE VARIABLE_NAME '=' EXP ';' {symbolManager.push_symbol($2, $3, $5, "for");}
          |  DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_symbol($1, $2, "NULL", "for");}
          |  FOR_BLOCK DATA_TYPE VARIABLE_NAME  ';' {symbolManager.push_symbol($2, $3, "NULL", "for");}
          |  ARRAY ARRAY_FOR ';'
          |  FOR_BLOCK ARRAY ARRAY_FOR ';'
          |  PRINT_FOR ';' 
          |  FOR_BLOCK PRINT_FOR ';' 


PRINT_FOR : PRINT '(' VALUE ',' VARIABLE_NAME ')' { if (symbolManager.lookup($5)) {
                                {char buff[256]="";
                                strcpy(buff,$3);
                                buff[strlen(buff)-1]='\0';
                                strcpy(buff,buff+1);
                                strcat(printare,buff);
                                if(symbolManager.value_by_scope($5, "for")!=NULL) strcpy(buff, symbolManager.value_by_scope($5, "for"));
                                else strcpy(buff, symbolManager.get_value($5));
                                strcat(printare,buff);
                                strcat(printare,"\n");}}
                                else {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $5);
                                flag_error = 1; exit(0);}}     



ARRAY_BODY : DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'{symbolManager.push_array($1, $2, $4, "global");}
           | VARIABLE_NAME '[' INT_VALUE ']' '=' VALUE {if(symbolManager.is_int($6)) {if(!symbolManager.lookup_array($1))
                                                                        {
                                                                          printf("ERROR! Line %d, \"%s\" not declared.\n",yylineno, $1);
                                                                          flag_error = 1;
                                                                          exit(0);
                                                                        } 
                                                                        if(!symbolManager.check_inside($1, $3))
                                                                        {
                                                                           printf("ERROR! Line %d, index %s out of bound.\n",yylineno, $1);
                                                                           flag_error = 1;
                                                                           exit(0);
                                                                        }
                                                                        symbolManager.push_array_element($1, $3, $6); 
                                                                        }
                                                                        else
                                                                        {
                                                                          printf("ERROR! Line %d, expected type int.\n",yylineno);
                                                                          flag_error = 1;
                                                                          exit(0);
                                                                        } }   

PRINT_LIST : ARRAY_PRINT;
            | '(' VALUE ',' EXP ')'{
             char buff[256]="";
            strcpy(buff,$2);
            buff[strlen(buff)-1]='\0';
            strcpy(buff,buff+1);
            strcat(printare,buff);
            strcat(printare,$4);
            strcat(printare,"\n");
            };
            ;

ARRAY_FUNC : DATA_TYPE VARIABLE_NAME '[' INT_VALUE ']'{symbolManager.push_array($1, $2, $4, "function");}
           | VARIABLE_NAME '[' INT_VALUE ']' '=' VALUE 

ARRAY_PRINT : '(' VALUE ',' VARIABLE_NAME '[' INT_VALUE ']' ')' {if(!symbolManager.lookup_array($4))
                                                            {printf("ERROR! Line %d, \"%s\" array not found.\n",yylineno, $4);flag_error = 1; exit(0);}
                                                            if(!symbolManager.check_inside($4, $6))
                                                            {printf("ERROR! Line %d, \"%s\" index out of bound.\n",yylineno, $6);flag_error = 1; exit(0);}
                                                            char buff[256]=""; 
                                                            strcpy(buff,$2);
                                                            buff[strlen(buff)-1]='\0';
                                                            strcpy(buff,buff+1);
                                                            strcat(printare,buff);
                                                            sprintf(buff, "%d\n", symbolManager.get_element($4,$6));
                                                            strcat(printare, buff);}

 


// source: https://www.geeksforgeeks.org/yacc-program-to-evaluate-a-given-arithmetic-expression/

EXP : EXP '+' EXP {if(symbolManager.is_int($3))  {int a=atoi($1), b=atoi($3); int c=a+b;sprintf($$, "%d", c);}
                      else if(symbolManager.is_float($3)) {float a=atof($1), b=atof($3); float c=a+b;;sprintf($$, "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}} 

    | EXP '-' EXP {if(symbolManager.is_int($3))  {int a=atoi($1), b=atoi($3); int c=a-b;sprintf($$, "%d", c);}
                      else if(symbolManager.is_float($3)) {float a=atof($1), b=atof($3); float c=a-b;;sprintf($$, "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}}
    
    | EXP '*' EXP {if(symbolManager.is_int($3))  {int a=atoi($1), b=atoi($3); int c=a*b;sprintf($$, "%d", c);}
                      else if(symbolManager.is_float($3)) {float a=atof($1), b=atof($3); float c=a*b;;sprintf($$, "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}} 
    
    | EXP '/' EXP {if(symbolManager.is_int($3))  {int a=atoi($1), b=atoi($3); int c=a/b;sprintf($$, "%d", c);}
                      else if(symbolManager.is_float($3)) {float a=atof($1), b=atof($3); float c=a/b;;sprintf($$, "%f", c);}
                      else
                      {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); flag_error = 1;
                                exit(0);}} 
                               
    | '(' EXP ')' { $$=$2;}
    | VALUE { strcpy($$, $1);}
    | VARIABLE_NAME { if(!symbolManager.is_value_null($1)) {printf("ERROR! Line %d, variable \"%s\" not initialised.\n", yylineno, $1); 
                    flag_error = 1; exit(0);} 
                     if(!symbolManager.lookup($1)) 
                    {printf("ERROR! Line %d, variable \"%s\" not declared.\n", yylineno, $1); flag_error = 1;
                    exit(0);}
                    if(!symbolManager.is_int(symbolManager.get_value($1)) && !symbolManager.is_float(symbolManager.get_value($1))) {printf("ERROR! Line %d, expected an integer or float value.\n", yylineno); 
                            flag_error = 1;    exit(0);}  
                    strcpy($$,symbolManager.get_value($1));
                    }
    ;  

VALUE : INT_VALUE 
      | STRING_VALUE   
      | FLOAT_VALUE   
      | CHAR_VALUE   
      | BOOL_VALUE   
      ;                        
%%

void yyerror(const char * s){
printf("error: %s at line:%d\n",s,yylineno);
}

int main(){
  yyparse();
  printf("%s", printare);
  if(flag_error == 0)
    symbolManager.print_to_file();
}