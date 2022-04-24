%{
    void display(int, char*);
    int flag;
%}
 
%%
[a|e|i|o|u] {
    flag = 1;
    display(flag, yytext);
}
 
. {
    flag = 0;
    display(flag, yytext);
}
%%
 
void main()
{
    printf("Enter a word : \n");
    yylex();
}
 
void display(int flag, char* word)
{
    if (flag == 1)
    {
    printf("\nThe given character %s is a vowel !!\n",word);
    }
    else
    {
    printf("\nThe given character %s is not a vowel !!\n",word);
    }
}
