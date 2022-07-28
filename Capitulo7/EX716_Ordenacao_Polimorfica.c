/* A biblioteca padrao da lingagem C oferece uma
 * funcao polimorfica para ordenacao de vetores
 * cujo prototipo eh o seguinte:
 *
 * void qsort(void *v, int n, int t, 
 * int (*c)(const void *, const void *) );
 * 
 * sendo v um ponteiro para o vetor a ser ordenado,
 * n o numero de elementos no vetor, t o tamanho em
 * bytes de cada elemento e c um ponteiro para a
 * funcao de comparacao a ser usada durante a 
 * ordenacao. A novidade nesse prototipo eh o tipo
 * void *, que serve para declarar ponteiros capazes
 * de receber qualquer tipo de endereco. Isso quer 
 * dizer que, por exemplo, o parametro v pode receber
 * como valor inicial tanto o endereco de um
 * vetor de caracteres quanto o endereco de um vetor
 * de numeros reais ou ainda um vetor de estruturas.
 * O unico problema com ponteiros void eh que nao
 * eh permitido o acesso a dados a partir deles e,
 * portanto, temos que usar casts com eles. Com base
 * nessas informacoes, crie um vetor de estruturas e
 * tente ordena-lo por cada um de seus campos, um
 * de cada vez, usando a funcao qsort().
 *
 * A funcao comparadora precisa retornar tres 
 * possiveis valores:
 * Valor maior do que zero se o primeiro valor
 * for maior do que o segundo.
 * Valor menor do que zero se o segundo valor
 * for maior do que o primeiro.
 * Zero se os valores forem iguais. 
 *
 * Preciso converter o ponteiro de void para
 * int para conseguir obter o valor corretamente.
 * O casting eh essa conversao entre tipos.
 * */


# include <stdio.h>
# include <stdlib.h>
# define TAM 6

typedef struct {
    int numero;
    char letra;
} NumLetra;


int compara_Numero(const void* a, const void* b)
{
    return ( (*(NumLetra*)a).numero - (*(NumLetra*)b).numero );
}


int compara_Letra(const void* a, const void* b)
{
    return ( (*(NumLetra*)a).letra - (*(NumLetra*)b).letra );
}


int main(void){
    NumLetra a = {1, 'b'};
    NumLetra b = {2, 'a'};
    NumLetra c = {3, 'd'};
    NumLetra d = {1, 'e'};
    NumLetra e = {4, 'c'};
    NumLetra f = {4, 'a'};
    int tam = TAM;
    NumLetra vetor[TAM] = {a, b, c, d, e, f};
    /* Nao ter levado em conta o tamanho azedou
     * meu programa. Essa uma linha poderia ter 
     * economizado uma hora da minha vida. */
    int bytes = sizeof(NumLetra);
    
    /* Visualizar o original antes de 
     * visualizar as ordenacoes. */
    for (int i = 0; i<TAM; ++i) 
        printf("%d %c \n",
                vetor[i].numero, 
                vetor[i].letra);
    putchar('\n');
    
    qsort(vetor, tam, bytes, compara_Letra);
    for (int i = 0; i<TAM; ++i) 
        printf("%d %c \n", 
                vetor[i].numero, 
                vetor[i].letra);
    putchar('\n');
    
    qsort(vetor, tam, bytes, compara_Numero);
    for (int i = 0; i<TAM; ++i) 
        printf("%d %c \n", 
                vetor[i].numero, 
                vetor[i].letra);
    putchar('\n');

    return 0 ;
}
