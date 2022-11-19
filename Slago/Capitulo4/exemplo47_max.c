/* Determinando o maximo entre dois valores.
 * perceba que a execucao do primeiro return impede
 * a execucao do segundo, mesmo sem termos colocado
 * a parte else do if.*/

# include <stdio.h>

double max(double a, double b)
{
    if (a > b) return a;
    return b;
}

int main(){
    double x=2, y=3;
    printf("Testando funcao max:%f", max(x,y));
    return 0;
}
