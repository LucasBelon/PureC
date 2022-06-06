/* Dado um numero natural n, calcule seu fatorial n!*/

# include <stdio.h>

int main(){
    long double  n, x;
    
    printf("Calcularei o fatorial de seu numero:\n");
    scanf("%Lf",&n);
    for (x=n-1; x>0; --x){
        n *= x;
    }
    
    printf("Resultado: %.0Lf\n",n);
    return 0;
}
