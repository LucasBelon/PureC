/* Codifique a funcao strchr(s,c) que devolve o endereco
 * da primeira ocorrencia do caractere c na string s ou,
 * entao, o valor NULL, caso este caractere nao seja
 * encontrado*/


# include <stdio.h>
#include <string.h>


char *strchar(char *s, char c)
{
    int i = 0;
    while (*(s+i)!='\0' && *(s+i)!=c) ++i;

    return s+i;
}



int main(){
    char s[]="Ola Mundo";
    char c = 'M';

    printf("%p\n", s);
    printf("%p", strchar(s, c));

    
    return 0 ;
}
