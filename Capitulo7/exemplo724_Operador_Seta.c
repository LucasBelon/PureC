/* Uma novidade com relacao a estruturas eh que temos
 * um operador especifico para acessar membros a
 * partir de ponteiros. Usando esse operador, em vez
 * de escrever (*ponteiro).membro podemos escrever
 * ponteiro->membro.
 *
 * Usando o operador seta.*/

# include <stdio.h>

typedef struct {
    char nome[31];
    int idade;
} pessoa;

int main(void){
    pessoa *p, x = {"Silvio", 32};
    p = &x;
    printf("{%s,%d}\n", p->nome, p->idade);

    return 0 ;
}
/* O operador seta eh mais ergonomico. Alem de ser
 * mais elegante.*/
