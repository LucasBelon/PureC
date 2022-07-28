/* Dada uma temperatura em graus
 * Fahrenheit, informe o valor correspondente
 * em graus Celsius. [Dica: C = (F-32) * (5/9)]*/

# include <stdio.h>
int main(){

    float temperatura;

    printf("Escreva a tempera em Graus Fahrenheit: \n");
    scanf("%f",&temperatura);

    printf(\
"A temperatura correspondente em graus Celcius eh %.2f°C\n", 
(temperatura-32)*(5.0/9.0)
    );

    return 0;
}
