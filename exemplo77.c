/* Sentencas em C (ponteiros)*/


# include <stdio.h>

int main(void){
    char v = 'A'; 
    // Inicializamos uma variavel char.
    char* q = &v; 
    // Inicializamos um ponteiro char e passamos
    // o endereco de uma variavel char.
    char** p = &q;
    // Inicializamos um ponteiro para ponteiro char
    // e passamos o endereço de uma variavel ponteiro char.
    return 0 ;
}
