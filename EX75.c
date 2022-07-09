/* Usando ponteiros, codifique a funcao
 * carrega(v,n), que preenche um vetor v
 * com n valores lidos do teclado.
 *
 * Comentario: Se ele pede uma funcao
 * com o tamanho do vetor imbutido, vou assumir
 * que o vetor v eh do tipo int.*/


# include <stdio.h>

/* Funcao toma um vetor e seu tamanho para adicionar
 * valores em cada um de seus membros.*/
void carrega(int* v, int n)
{
    for (int i=0; i<n;++i){
        printf("Digite o valor para armazenar em v[%d]=",i); 
        scanf("%d",v+i);
    }
}


int main(void){
    int n; printf("Digite o numero n:"); scanf("%d",&n);

    int v[n];

    carrega(v, n);

    for (int i=0; i<n; ++i) printf("%d ", *(v+i));
    putchar('\n');

    return 0 ;
}
