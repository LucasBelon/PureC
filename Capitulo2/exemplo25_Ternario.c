/* O uso do operador condicional
 * as vezes chamado de operador ternario*/

# include <stdio.h>

int main(){
    float n;

    printf("Digite um numero e direi seu valor absoluto:\n");
    scanf("%f",&n);
    printf("O valor absoluto de %f eh %f\n",n, n>0?n:-n);
    return 0;
}
