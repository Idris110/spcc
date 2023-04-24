%{

%}

%%
[a-zA-Z]+[\n] {printf("Word\n");}
[1-9]+[\n] {printf("Num\n");}
.+[\n] {printf("Both\n");}

%%

int main() {
	yylex();
}
int yywrap()
{
	return(1);
}