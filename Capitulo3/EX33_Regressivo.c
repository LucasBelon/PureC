/* Dado um valor n, exiba uma contagem regressiva.
 * OBS: Fiz de duas maneiras diferentes num unico
 * loop, com uma variavel que se incrementa e outra
 * que se decrementa.*/

# include <stdio.h>
# define FIM 10
# define INICIO 0

int main(){
    int c, n;
    for (n = FIM, c = INICIO; n >= INICIO; --n, c++)
        printf("%d \t %d \n", n, FIM-c);
    return 0;
}
