%{
    #include <string.h> 
    int lines = 0;
    int words = 0;
    int characters = 0;
%}

%%
\n { lines++; }         
[a-zA-Z]+ { words++; 
    characters += strlen(yytext); } 
. { characters++; }   
%%

int main() {
    yylex();
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, characters);
    return 0;
}

int yywrap()
{
}