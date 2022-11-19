/* Inclusao automatica do '\0' em strings constantes */

# include <stdio.h>

int main(void){
    printf("Espaco alocado = %d bytes\n", sizeof("verde e amarelo"));
    return 0 ;
}
