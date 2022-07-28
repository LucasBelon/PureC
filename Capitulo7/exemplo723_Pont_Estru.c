/* Ponteiro para estrutura. */


# include <stdio.h>

typedef struct {
    char nome[31];
    int idade;
} pessoa;

int main(void){
    pessoa *p, x = {"Silvio", 32};
    p = &x;
    printf("{%s,%d}", (*p).nome, (*p).idade);

    return 0 ;
}

/* O operador de selecao de membro (.) tem maior 
 * precedencia que o operador de conteudo (*). Por
 * esse motivo, o uso de parenteses eh obrigatorio
 * em (*p).nome e em (*p).idade.*/
