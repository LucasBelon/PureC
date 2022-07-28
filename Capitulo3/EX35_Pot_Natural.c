/* Dados um numero real 'x' e um natural 'n',
 * exiba a potencia x elevado a n.*/

# include <stdio.h>

int main(){
    float x, pot;
    int n, contador;
    
    printf("Escreva x real e n natural para x^n:\n");
    scanf("%f %d", &x, &n);
    
    pot = x;
    
    for (contador = 1; contador < n; ++contador)
        pot *= x;

    printf("resultado: %f\n", pot);
    
    return 0;
}
