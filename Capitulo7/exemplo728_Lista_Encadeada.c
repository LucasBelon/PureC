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
    return 0;
}
