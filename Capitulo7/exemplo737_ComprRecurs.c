/* Calculo recursivo do comprimento da
 * lista <a, b, c>*/

# include <stdio.h>
# include <stdlib.h>

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


int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    insere(&L, 'd');

    int c = comprimento(L);
    printf("Comprimento: %d\n", c);
}
