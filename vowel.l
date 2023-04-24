%{
	
%}

%%
[a|e|i|o|u]+ {
	printf("\nVowel\n");
	}
.+ {
	printf("\nNot a vowel\n");
}
%%

void main()
{
	printf("Enter a word : ");
	yylex();
}

int yywrap()
{
	return(1);
}