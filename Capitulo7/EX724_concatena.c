/* Exercício 7.24. Codifique a função
 * concatena(x,y), que anexa a lista 
 * encadeada y no final da lista x.*/

# include <stdio.h>
# include <stdlib.h>

typedef struct no {
    char item;
    struct no * prox;
} *lista;

void insere(lista *p, char x)
{
    lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = *p;
    *p = n;
}

void concatena(lista *x, lista *y)
{
    lista n = *x;
    while((n->prox)!=NULL) n=n->prox;
    n->prox = *y;
}


void lendo(lista p)
{
    puts("Estamos em lendo\n");
    while(p!=NULL){
        printf("%c\n",p->item);
        p = p->prox;
    }
}

int main(void){
    lista A;
    lista B;
    insere(&A, 'c');
    insere(&A, 'b');
    insere(&A, 'a');
    /* Concatenamos B no FINAL de A*/
    insere(&B, 'f');
    insere(&B, 'e');
    insere(&B, 'd');
    
    concatena(&A, &B);
    lendo(A);

}
