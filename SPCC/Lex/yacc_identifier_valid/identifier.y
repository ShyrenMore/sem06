%{
#include <studio.h>
#include <stdlib.h>   

int yylex();
void yyerror(char *s);
%}

%token DIGIT LETTER NL UND

%% 

stmt: variable NL {
    printf("valid identifier");
    exit(0);
};

variable: LETTER alphanumeric;

alphanumeric: LETTER alphanumeric | DIGIT alphanumeric | UND alphanumeric | LETTER | DIGIT | UND;

%%

void yyerror(char *msg)
{
    printf("Invalid exp %s", msg);
}

void main()
{
    printf("Enter variable name :: ")
    yyparse();
}