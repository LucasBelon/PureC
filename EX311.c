/* Um numero natural eh triangular se eh igual a soma
 * dos n primeiros numeros naturais consecutivos a partir
 * de 1. Por exemplo, 1, 3, 6, 10, 15... são triangulares.
 * Dado um natural n>=1, informe se ele eh triangular*/

# include <stdio.h>

int main(){
    int n, triangular, contador;
    triangular = 0;
    contador = 0;

    printf("Eu direi se seu numero eh triangular:\n");
    scanf("%d",&n);
    
    while(n>triangular){
        triangular += ++contador;
        printf("triangulares: %d\n", triangular);
    }
    if (n==triangular)\
        printf("Seu numero eh triangular\n");
    else
        printf("Seu numero nao eh triangular\n");
    return 0;
}
