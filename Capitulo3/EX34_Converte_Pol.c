/* Exiba uma tabela de conversao de polegadas em
 * centimetros, variando as polegadas de 0 a 10,
 * de meio em meio [Dica: 1" = 2.54cm]*/

# include <stdio.h>
# define MAX 10
# define MIN 0
# define PASSO 0.5F
# define DIVISOR 2.54F

int main(){
    float cont;
    for (cont = MIN; cont < MAX+PASSO; cont += PASSO)
        printf(
        "%.2f\"\t=  %.3fcm\n", 
        cont, cont/DIVISOR
        );

    return 0;
}
