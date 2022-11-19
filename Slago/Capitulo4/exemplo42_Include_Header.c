/* Incluindo um arquivo de cabeçalho.*/


# include <stdio.h>

# include "macros.h"

int main(){
    int a, b;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("O maximo eh %d!", max(a,b));

    return 0 ;
}
