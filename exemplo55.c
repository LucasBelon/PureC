/* Inicializacao de vetor com valores iniciais insuficientes: */


# include <stdio.h>
# define max 5

int main(void){
    static int A[max] = {9, 3, 2, 7};
    auto int i;

    for (i=0; i<max; i++)
        printf("%d", A[i]);

    printf("\n");
    return 0 ;
}
