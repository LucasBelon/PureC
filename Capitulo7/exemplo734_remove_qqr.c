/* Removendo o 4o item
 * de uma lista encadeada.*/
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


void remover(lista *p)
{
    lista n = *p;
    if (n == NULL ) return;
    *p = n->prox;
    free(n);
}


lista acessa(lista p, int i)
{
    while(i-->1 && p != NULL) p= p->prox;
    return p;
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
    insere(&L, 'd');
    insere(&L, 'e');
    insere(&L, 'f');

    lista p = acessa(L, 2);
    insere(&p->prox,'*');
    lendo(&L);

    putchar('\n');

    p = acessa(L,3);
    remover(&p->prox);
    lendo(&L);
    return 0;
}


