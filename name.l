%{

%}

%%
[a-zA-Z]+[\n] {
	printf("Hello ");
	printf(yytext);
	return 0;	
}
%%

int main() {
	yylex();
}
int yywrap()
{
	return(1);
}