/* Dado um caracter informe o seu codigo
 * ASCII em octal, decimal, hexadecimal.*/

# include <stdio.h>
// char -128 a 127
int main(){
    char caractere;

    printf("Escreva um unico caractere: \n");
    scanf("%c",  &caractere);

    printf("Seu caractere em ASCII decimal eh %d \n\
em octal eh %o \n\
em hexadecimal eh %x\n\
e em char eh %c\n",caractere, caractere, caractere, caractere);

    return 0;
}
