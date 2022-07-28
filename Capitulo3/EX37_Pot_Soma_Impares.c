/* O quadrado de um numero natural n eh dado pela soma
 * dos n primeiros numeros impares consecutivos. Por exemplo
 * 1^2=1; 2^2=1+3; 3^2=1+3+5. Dado um numero n, calcule
 * seu quadrado pela soma de impares ao inves do produto.*/

# include <stdio.h>

int main(){
    unsigned long long int x, cont, quadrado=0;
    printf("Calcularei o quadrado pela soma de impares:\n");
    scanf("%lld",&x);
    printf("\n");
    for (cont = 1; cont<=2*x; ++cont) {
        if ((cont%2)!=0){
            quadrado += cont;
            printf("Cont=%lld\n",cont);
        };
    };
    printf("O Quadrado de %lld eh %lld", x, quadrado);
    return 0;
}
