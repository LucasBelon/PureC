/* Acesso ao i-ésimo item de uma
 * lista encadeada.*/
# include <stdio.h>
# include <stdlib.h>


typedef struct no {
    char item;
    struct no *prox;
} *lista;

void insere(lista *p, char x){
    lista n = malloc(sizeof(struct no));
    puts("Crio um ponteiro 'n' que aponta\n\
            \rpara um endereço que o malloc\n\
            \rdisponibilizou.\n");
    if(n==NULL){
        printf("Algo deu errado. Finalizando...\n");
        exit(1);
    }
    puts("O espaço disponibilizado pode ser preenchido\n\
            \rcom o char da função insere\n");
    n->item = x;
    n->prox = *p;
    printf("Inseri no endereço %p o char %c\n",
            n, x);
    printf("Coloco como n->prox o endereço que p aponta\n\
            \rendereço que p aponta: %p\n\
            \rou seja, n aponta para item anterior.\n\
            \rA primeira adição vai apontar para NULL\n",*p);
    *p = n;
    printf("Atualizo meu ponteiro p para apontar para onde n\n\
            \r foi alocado. Novo endereço que p aponta:\n\
            \r%p\n",*p);
    printf("inserimos com sucesso %c\n", x);
}



void remover(lista *p)
{
    lista n = *p;
    if (n == NULL ) return;
    *p = n->prox;
    free(n);
}


lista acessa(lista p, int i)
{
    while(i-->1 && p != NULL) p= p->prox;
    puts(
    "Iteramos através dos ponteiros\n\
    \rE encontramos o endereço da posição\n\
    \rretornando um ponteiro para essa\n\
    \rposição\n"
    );
    return p;
}


/* Funcão lê recursivamente a lista
 * encadeada. Assim, imprimi na ordem
 * de criação dos elementos */
void lendo(lista *x)
{
    if((*x)->prox!=NULL)
        lendo(&((*x)->prox));
    printf("%c\n",(*x)->item);
}


int main(void){
    lista L = NULL;
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    insere(&L, 'd');
    insere(&L, 'e');
    insere(&L, 'f');

    lista p = acessa(L, 2);
    insere(&p->prox,'*');
    lendo(&L);
    return 0;
}
/* Para inserir num espaço qualquer 
 * não utilizo P diretamente, mas sim
 * um ponteiro p->prox, na função
 * insere. Assim posso spawnar um novo
 * nó e adicionar na lista. As operações
 * de remanejamento do ponteiro anterior
 * e seguinte são as mesmas que na
 * inserção pela ponta.*/
