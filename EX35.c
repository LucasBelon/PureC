/* Dados um numero real 'x' e um natural 'n',
 * exiba a potencia x elevado a n.*/

# include <stdio.h>

int main(){
    float x, pot;
    int n;
    int cont;
    printf("Escreva x e n para x^n:\n");
    scanf("%f %d", &x, &n);
    pot = x;
    for (cont = 1; cont < n; ++cont){
        pot *= x;
    }
    printf("resultado: %f\n", pot);
    
    return 0;
}
