/* Exercício 7.23. Codifique a função 
 * destroi(x), que libera todos os nós
 * existentes numa lista encadeada x.*/

# include <stdio.h>
# include <stdlib.h>

typedef struct no{
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


lista remover(lista *p)
{
    lista n = *p;
    if (n == NULL ) return *p;
    *p = n->prox;
    free(n);
    return *p;
}

/* Repete operação enquanto não for
 * passado um ponteiro nulo*/
void destroi(lista *p, lista (*f)(lista*))
{
    while((f(p))!=NULL);
}

/* Soma 1 no item, devolve prox*/
lista soma_um(lista *p)
{
    (*p)->item+=1;
    *p = (*p)->prox;
    return *p;
}


int main(void){
    lista L= NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    lista atual = L;
    //destroi(&atual, soma_um);
    destroi(&L, remover);

    if (L==NULL) printf("Apagamos\n");
    while(L!=NULL) {
        printf("%c\n",L->item);
        L = L->prox;
    }
}
