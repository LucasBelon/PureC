/* Acesso recursivo ao item da lista*/

# include <stdio.h>
# include <stdlib.h>
# include <assert.h>

# define cabeca(p) ((p)->item)
# define cauda(p) ((p)->prox)


typedef struct no {
    char item;
    struct no * prox;
} * lista;


void insere(lista *p, char x)
{
    lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = *p;
    *p = n;
}


int comprimento(lista L)
{
    if (L == NULL)
        return 0;
    else 
        return 1 + comprimento(cauda(L));
}


char acessa(lista L, int pos)
{
    assert(L!=NULL);
    if(pos==1) return cabeca(L);
    else return acessa(cauda(L), pos-1);
}


int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    insere(&L, 'd');

    int c = comprimento(L);
    printf("Comprimento: %d\n", c);
    char d = acessa(L,3);
    printf("Acesso 3: %c\n",d);
}
