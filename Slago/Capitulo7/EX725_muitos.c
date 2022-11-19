/* Exercício 7.25. Defina e implemente
 * funções recursivas para: 
 * a) acessar o último item de uma lista. 
 * b) verificar se um dado item pertence
 * a uma lista. 
 * c) determinar o total de ocorrências
 * de um dado item. 
 * d) calcular a soma de todos os itens
 * da lista. 
 * e) verificar se duas listas são iguais */

# include <stdio.h>
# include <stdlib.h>
# include <assert.h>


typedef struct no {
    int item;
    struct no * prox;
} * lista;
    
void insere(lista *p, int x){
    lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = *p;
    *p = n;
}


/* Funcao item (a)*/
lista acessaUltimo(lista L){
    if(L->prox!=NULL) 
        return acessaUltimo(L->prox);
    else
        return L;
}

/* Funcao item (b)*/
int verifica_item(lista L, int x){
    if (L==NULL) return 0;
    if (L->item!=x && L->prox!=NULL)
        return verifica_item(L->prox, x);
    else if (L->item==x) return 1;
    else return 0;
}


/* Funcao item (c)*/
int ocorr_item(lista L, int x){
    if (L==NULL) return 0;
    static int cont=0; 
    if(L->prox!=NULL){
        if (L->item==x) cont+=1;
        ocorr_item(L->prox,x);
    }
    else if(L->item==x) cont+=1;
    return cont;
}


/* Funcao item (d)*/
int soma_item(lista L){
    if (L==NULL) return 0;
    static int soma=0;
    if(L->prox!=NULL){
        soma+=L->item;
        soma_item(L->prox);
    }
    else soma+=L->item;
    return soma;
}

/* Funcao item (e)*/
int iguais(lista A, lista B){
    if (A!=NULL && B!=NULL){
        if (A->item==B->item)
            return iguais(A->prox,B->prox);
        else return 0;
    }
    else if(A==NULL && B==NULL) return 1;
    else return 0;
}



int main(void){
    lista L = NULL;
    insere(&L, 3);
    insere(&L, 2);
    insere(&L, 3);
    insere(&L, 1);
    insere(&L, 5);

    lista M = NULL;
    insere(&M, 3);
    insere(&M, 2);
    insere(&M, 3);
    insere(&M, 1);
    insere(&M, 5);

    lista N = acessaUltimo(L);
    printf("ultimo item:%d\n",N->item);

    int ver = verifica_item(L,1);
    printf("%s o item\n",
            ver?"Temos":"Não temos");

    int o = ocorr_item(L,1);
    printf("São %d ocorrências\n", o);

    int s = soma_item(L);
    printf("A soma é %d\n",s);

    int i = iguais(L, M);
    printf("Listas %siguais\n",
            i?"":"não ");

    return 0; 
}
