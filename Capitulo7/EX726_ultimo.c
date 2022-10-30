/* Exercício 7.26. Codifique procedimentos
 * recursivos para:
 * a) exibir uma lista. 
 * b) exibir uma lista em ordem inversa.
 * c) inserir um item numa lista ordenada. 
 * d) remover um item de uma lista ordenada. 
 * e) liberar todos os nós de uma lista*/

# include <stdio.h>
# include <stdlib.h>
# include <assert.h>
# define cabeca(p) ((p)->item)
# define cauda(p) ((p)->prox)

typedef struct no {
    int item;
    struct no * prox;
} * lista;


void insere(lista *p, int x){
    lista n = malloc(sizeof(struct no));
    cabeca(n) = x;
    cauda(n) = *p;
    *p = n;
}


void remover(lista *p){
    if (*p==NULL) return;
    lista n = *p;
    *p = cauda(*p);
    free(n);
}


/* Função letra (a) */
void exibir(lista p){
    if(p!=NULL){
        printf("%d\n",cabeca(p));
        exibir(cauda(p));
    }
}


/* Função letra (b) */
void exibir_inverso(lista p){
    if(p->prox!=NULL)
        exibir_inverso(cauda(p));
    printf("%d\n",cabeca(p));
}


lista acessa(lista p, int pos){
    assert(p!=NULL);
    if (pos-->1)
        return acessa(cauda(p), pos-1);
    return p;
}

/* Função letra (c) */ 
void insere_ord(lista *p, int x){
    if (cabeca(*p)<x){
        insere_ord(&cauda(*p), x);
    }
    else insere(p,x);
}


/* Função letra (d) */
void remove_ord(lista *p, int x){
    if (cabeca(*p)!=x)
        remove_ord(&cauda(*p),x);
    else remover(p);
}


/* e) liberar todos os nós de uma lista */
void remove_tudo(lista *p){
    remover(&(*p));
    if(*p==NULL) return;
    remove_tudo(p);
}


int main(void){
    lista L=NULL;
    insere(&L, 4);
    insere(&L, 3);
    insere(&L, 2);
    insere(&L, 1);

    exibir(L);
    putchar('\n');
    exibir_inverso(L);
    putchar('\n');
    insere_ord(&L, 3);
    exibir(L);
    putchar('\n');
    remove_ord(&L,3);
    exibir(L);
    putchar('\n');
    remove_tudo(&L);
    if (L==NULL) puts("vazio\n");
    return 0;
}
