/* Exercício 7.22. Verifique o que acontece 
 * quando a função acessa() é chamada para
 * acessar uma posição antes da primeira ou
 * então após a última.
 *
 * R: Como a função Acessa foi definida para
 * não acessar posições além, eventualmente
 * o programa quebra, ou encontra um endereço
 * inválido. Isso pode se dar devido ao 
 * ponteiro final que aponta para NULL, ou
 * pela ausência de um ponteiro para posições
 * anteriores.*/

# include <stdio.h>
# include <stdlib.h>

typedef struct no {
    char item;
    struct no *prox;
} *lista;

void insere(lista *p, char x)
{
    lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = *p;
    *p = n;
}

lista acessa(lista p, int pos)
{
    while(pos-->1 && p!=NULL)
        p = p->prox;
    return p;
}

int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');

    lista X = acessa(L, 1);
    printf("Char: %c\n",X->item);
    X = acessa(L, 2);
    printf("Char: %c\n",X->item);
    X = acessa(L, 3);
    printf("Char: %c\n",X->item);
    X = acessa(L, 4);
    printf("Char: %c\n",X->item);
    X = acessa(L, 0);
    printf("Char: %c\n",X->item);
    return 0;
    
}
