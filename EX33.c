/* Dado um valor n, exiba uma contagem regressiva.
 * 
 * obs do programador:
 * O loop continuará enquanto alguma das condicoes
 * for verdade, usadas com virgulas. equivalente a
 * (n > -1 || c < 11) */

# include <stdio.h>
# define COUNTMAX 10

int main(){
    int c, n;
    for (n = 10, c = 0; n > -1; --n, c++){
        printf("%d \t %d \n", n, COUNTMAX-c);
    }
    return 0;
}
