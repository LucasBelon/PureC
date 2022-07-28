/* Uma das aplicacoes mais interessantes de ponteiros
 * eh a alocacao dinamica de memoria, que permite 
 * a um programa requisitar memoria adicional para
 * o armazenamento de dados durante sua execucao.
 *
 * Em geral, apos um programa ter sido carregado
 * para a memoria, parte dela permanece livre. Entao
 * usando a funcao malloc(), o programa pode alocar
 * um pedaco dessa area livre e acessa-lo atraves de
 * um ponteiro.
 *
 * A funcao malloc() exige como argumento o tamanho
 * em bytes da area de memoria que sera alocada.
 * Entao, se o espaco livre eh suficiente para 
 * atender a requisicao, a area eh alocada e seu 
 * endereco eh devolvido; senao, a funcao devolve um
 * ponteiro especial, representado pela constante 
 * NULL. Alem disso, como malloc nao tem conhecimento
 * sobre o tipo dos dados que serao armazenados na
 * area alocada, ela devolve um ponteiro do tipo 
 * void*.
 *
 * Outro ponto importante eh que, como cada tipo de
 * dados pode requerer uma quantidade de memoria 
 * diferente, dependendo da maquina que executa o
 * programa, devemos usar o operador sizeof() para 
 * especificarmos a quantidade de memoria a ser 
 * alocada.
 *
 * Para usar a funcao malloc(), devemos incluir o
 * arquivo stdlib.h ou alloc.h.*/

/* Vetores dinamicos.*/


# include <stdio.h>
# include <stdlib.h>

int main(void){
    int *v, n, i;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    v = malloc( n*sizeof(int) );

    if (v==NULL) exit(1);

    for (i=0; i<n; i++){
        printf("%do. valor: ", i);
        scanf("%d", v+i);
    }
    while(i>0)
        printf("%d ", v[--i]);

    return 0 ;
}
/* O programa cria um vetor cujo tamanho eh 
 * determinado em tempo de execucao.
 * Quando um programa termina, todas as areas
 * alocadas pela funcao malloc() sao automaticamente
 * liberadas. Entretando, se for necessario liberar
 * explicitamente uma dessas areas, podemos usar a 
 * funcao free(). Essa funcao exige como argumento
 * um ponteiro para a area que sera liberada.*/
