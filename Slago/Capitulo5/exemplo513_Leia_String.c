/* Leitura de string via teclado */

# include <stdio.h>

int main(void){
    char n[21];
    printf("Qual o seu nome?\n");
    gets(n);
    printf("Ola %s\n", n);
    return 0 ;
}
