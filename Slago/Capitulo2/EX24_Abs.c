/* Dado um numero real qualquer informe seu valor absoluto */

# include <stdio.h>

int main(){
    float num_real;
    
    printf("Informe um numero real:\n");
    scanf("%f", &num_real);

    if (num_real<0)
        num_real = num_real*(-1);

    printf("Seu numero em modulo eh %f\n",num_real);

    return 0;
}
