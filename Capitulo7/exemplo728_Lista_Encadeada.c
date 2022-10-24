/* Uma lista encadeada eh uma estrutura 
 * recursiva formada por um ponto inicial 
 * e sua recursao.
 * O ponto inicial eh um ponteiro que aponta
 * para uma estrutura formada por um item
 * e o ponteiro para o proximo item:
 * (item,prox).*/

# include <stdio.h>


typedef struct no {
    char item;
    struct no *prox;
} *lista;


int main(void){
    puts(
        "Nó:\n\
        \r[valor, ponteiro Prox]\n\
        \racessamos o nó por um ponteiro\n\
        \rguia 'lista *'. Para acessar o prox\n\
        \ritem, apontamos o ponteiro guia\n\
        \rpara prox\n\n");
    lista L = NULL;
    printf(
        "Com \"lista L = NULL\"\n\
        \rCrio um PONTEIRO que\n\
        \raponta para o endereço:\n\
        \r%p\n\
        \rmas o ponteiro em si tem\n\
        \rendereço %p\n",L,&L);
    return 0;
}
