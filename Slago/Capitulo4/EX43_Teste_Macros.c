/* Crie um arquivo com as macros definidas no exercicio 4.2
 * e faça um programa que use esse arquivo para testa-las
 * OBS: Vou usar outra macro para teste.*/

# include <stdio.h>
# include "macros.h"

int main(){
    int x, y;
    printf("Digite Dois inteiros, o primeiro negativo:");
    scanf("%d %d",&x, &y);

    printf("O maior valor eh: %d\n",max(x,y));
    printf("O abs(%d) eh: %d\n",x , abs(x));
    printf("O quad(%d) eh: %d\n", x, quad(x));
    return 0;
}
