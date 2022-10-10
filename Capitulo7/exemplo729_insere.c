/* Uma lista encadeada eh uma estrutura 
 * recursiva formada por um ponto inicial 
 * e sua recursao.
 * O ponto inicial eh um ponteiro que aponta
 * para uma estrutura formada por um item
 * e o ponteiro para o proximo item:
 * (item,prox).*/

# include <stdio.h>
# include <stdlib.h>


typedef struct no {
    char item;
    struct no *prox;
} *lista;


/* O nome da estrutura eh um ponteiro?
 * e o rotulo eh um nome qualquer?
 * Fazemos isso para declarar p ex:
 * lista n = malloc() [void pointer]
 * ao inves de
 * lista * n = malloc() */


/* Param da funcao eh ponteiro de ponteiro.
 * passamos o endereço como argumento*/
void insere(lista *p, char x)
{
    lista n = malloc(sizeof(struct no));
    if(n==NULL){
        printf("Algo deu errado. Finalizando...\n");
        exit(1);
    }
    n->item = x;
    n->prox = *p;
    *p = n;
    printf("inserimos com sucesso %c\n", x);
}

void lendo(lista *p)
{
    if ((*p)!=NULL){
        printf("%c", (*p)->item);
        p = &(*p)->prox;
        lendo(p);
    }
}

int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    lendo(&L);

    return 0;
}
