# include <stdio.h>
# include <stdlib.h>


typedef struct no {
    char item;
    struct no *prox;
} *lista;


/* O nome da estrutura eh um ponteiro?
 * e o rotulo eh um nome qualquer?
 * Fazemos isso para declarar p ex:
 * lista n = malloc()
 * [Ponteiro lista = Ponteiro para espaco
 * alocado]
 * ao inves de
 * lista * n = malloc() */


/* Param da funcao eh valor que pont
 * aponta. Estamos alterando a lista,
 * com chamada por REFERENCIA.
 * passamos o endereço como argumento*/
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


int main(void){
    lista L = NULL;
    puts(
        "Nó:\n\
        \r[valor, ponteiro Prox]\n\
        \racessamos o nó por um ponteiro\n\
        \rguia 'lista *'. Para acessar o prox\n\
        \ritem, apontamos o ponteiro guia\n\
        \rpara prox\n\
        \rCom lista L = NULL\"\n\
        \rCrio um PONTEIRO que\n\
        \raponta para o endereço:\n");
    printf(
        "\r%p\n\
        \rmas o ponteiro em si tem\n\
        \rendereço %p\n\
        \rque vou passar para \"insere\"\n\
        \rPara que ele possa usar o ponteiro\n\
        \rem si, e apontá-lo para um novo nó\n",L,&L);
    insere(&L, 'a');
    insere(&L, 'b');
    insere(&L, 'c');
    return 0;
}
