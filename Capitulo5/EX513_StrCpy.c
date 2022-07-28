/* Codifique a funcao strcpy(s,t) que copia o conteudo
 * da string t para a string s. Essa funcao e util
 * quando precisamos realizar uma atribuicao entre
 * strings; Por exemplo para atribuir a constante 
 * "teste" a uma string x basta escrever
 * strcpy(x, "teste")*/

//# include <stdio.h>
# define MAX 8

void strcpy(char x[], char t[])
{
    int i=0;
    while(t[i]!='\0'){
        x[i]=t[i];
        ++i;
    }
}

int main(void){
    char t[] = "teste";
    char x[MAX];
    strcpy(x, t);
    printf("%s\n",x);
    return 0 ;
}
