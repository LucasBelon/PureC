/* Operador Ternario como argumento de funcao. */

# include <stdio.h>

int main(){
    int x, y;
    
    printf("Informe dois valores:");
    scanf("%d %d", &x, &y);
    
    printf("Maximo: %d", (x>y) ? x : y);

    return 0;
}
