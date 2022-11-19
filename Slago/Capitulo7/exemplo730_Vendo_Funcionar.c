/* Uma lista encadeada eh uma estrutura 
 * recursiva formada por um ponto inicial 
 * e sua recursao.
 * O ponto inicial eh um ponteiro que aponta
 * para uma estrutura formada por um item
 * e o ponteiro para o proximo item:
 * (item,prox).
 *
 * tipo "lista" eh um ponteiro para o tipo
 * "estrutura no".*/

# include <stdio.h>
# include <stdlib.h>


typedef struct no {
    char item;
    struct no *prox;
} *lista;


void insere(lista *p, char x)
{
    lista n = malloc(sizeof(struct no));
    if(n==NULL){
        printf(
        "Algo deu errado. Finalizando...\n"
        );
        exit(1);
    }
    n->item = x;
    n->prox = *p;
    *p = n;
}

void lendo(lista *x)
{
    if((*x)->prox!=NULL)
        lendo(&((*x)->prox));
    printf("%c\n",(*x)->item);
}

int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    lendo(&L);
    while(L!=NULL){
        printf("%c\n",L->item);
        L = L->prox;
    }
    return 0;
}
