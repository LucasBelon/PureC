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


void remover(lista *p)
{
    lista n = *p;
    if (n == NULL ) return;
    *p = n->prox;
    free(n);
}


int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    lendo(&L);
    remover(&L);
    lendo(&L);
    return 0;
}
