%{
#include <stdio.h>
#include "limbaj.tab.h"
%}
%option noyywrap
%%
 
"int"|"const int"|"bool"|"const bool"|"float"|"const float"|"string"|"const string"|"char"|"const char" { yylval.data_type=strdup(yytext); return DATA_TYPE;}
"MAIN"      {return MAIN;}
"call"      {return CALL;}
"class"     {return CLASS;}
"function"  {return FUNCTION;}
"array"     {return ARRAY;}
"if"        {return IF;}
"else"      {return ELSE;}
"while"     {return WHILE;}
"for"       {return FOR;}
"TRUE"      {yylval.value = strdup(yytext); return BOOL_VALUE;}
"FALSE"     {yylval.value = strdup(yytext); return BOOL_VALUE;}
"Print"     {return PRINT;}
"&&"        {return AND;}
"||"        {return OR;}
"=="        {return EQ;}
"!="        {return NEQ;}
">"         {return GRE;}
"<"         {return LES;}
">="        {return GEQ;}
"<="        {return LEQ;}
"<-"        {return CL_AS;}
"Eval"      {return EVAL;}
"TypeOf"    {return TYPEOF;}
[a-zA-Z][_a-zA-Z0-9]*   {yylval.name=strdup(yytext); return VARIABLE_NAME;}
[0-9]+   {yylval.value=strdup(yytext); return INT_VALUE;}
[0-9]*\.?[0-9]+ {yylval.value = strdup(yytext); return FLOAT_VALUE;}
\"(\\.|[^"])*\" {yylval.value = strdup(yytext); return STRING_VALUE;}
[\'][a-zA-Z][\'] {yylval.value= strdup(yytext); return CHAR_VALUE;}
 
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

%%
 
void yyerror(char *s) {
    fprintf(stderr, "\nERROR ON LINE %d: \n %s \n", yylineno, s);
    exit(0);
}