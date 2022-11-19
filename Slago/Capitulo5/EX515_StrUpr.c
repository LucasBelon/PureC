/* Codifique a funcao strupr(s), que converte 
 * a string s em maiuscula. Por exemplo, se x 
 * armazena "Teste", apos a chamada strupr(x), 
 * x estara armazenando "TESTE" */

// (a - A) = 32;
// a = 97
// A = 65
# include <stdio.h>

# define ALFAMIN 65
# define ALFAMAX 90
# define alfamin 97
# define alfamax 122


void strupr(s)
char s[];
{
    int i = 0;
    while (s[i]!='\0'){
        if (s[i]>=alfamin && s[i]<=alfamax)
            s[i] -= 32;
        ++i;
    }
}


int main(void){
    char s[] = "Teste";
    strupr(s);
    printf("%s\n", s);
    return 0 ;
}
/*
    for(int i=0; i<200; ++i){
        printf(" %c=%d |",i, i);
        if (i%5 == 0) printf("\n");
    }
    */

