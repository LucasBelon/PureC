/* Exercício 2.21. Altere a função remove() 
 * de modo que o valor do item removido da
 * lista seja devolvido como resposta da 
 * função.*/

# include <stdio.h>
# include <stdlib.h>
# include <assert.h>

typedef struct no {
    char item;
    struct no *prox;
} *lista;


lista acessa(lista *p, int i)
{
    while(i-->1 && (*p)->prox!=NULL)
        *p = (*p)->prox;
    return *p;
}

void insere(lista *p, char x)
{
    lista n = malloc(sizeof(struct no));
    assert(n!=NULL);
    n->item = x;
    n->prox = *p;
    *p = n;
}

char remover(lista *p)
{
    lista n = *p;
    *p = (*p)->prox;
    char x = n->item;
    free(n);
    return x;
}
int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');

    lista P = acessa(&L,3);
    printf("Foi removido [%c]\n" ,remover(&P));
    return 0;
}
