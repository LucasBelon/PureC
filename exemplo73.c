
/* Acesso atraves de ponteiro.*/


# include <stdio.h>

int main(void){
    char *p; // Crio Ponteiro
    char v = 'A'; // Crio variavel
    p = &v; // atribuo ao ponteiro o endereço da variavel
    char x; // Cria variavel
    x = *p; // Atribuo a variavel o valor que p aponta
    *p = 'B'; // Atualizo o valor que p aponta.
    printf("%c\n",v); // O valor da variavel v atualiza tambem
    return 0 ;
}
