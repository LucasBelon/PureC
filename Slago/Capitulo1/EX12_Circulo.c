/* Descobra os erros no programa a seguir:
 * (Nao possui erros por ja estar corrigido)*/


/* PERIM.C - Calcula o perimetro de uma circunferencia */

# include <stdio.h>
# include <math.h>
// Vou usar M_PI = 3.14159 e pow()


int main(){
    float raio, circunferencia, area, volume;

    printf("Qual o raio do circulo? \n");
    scanf("%f", &raio);
    /*Solicita o raio ao usuario*/

    circunferencia = 2 * M_PI * raio;
    /*calcula a circunferencia e armazena*/
    
    area = M_PI * powf(raio, 2);
    /*calcula a area e armazena*/
    
    volume = (4.0/3.0)* M_PI * powf(raio,3);
    /*calcula o volume e armazena*/

    /* Imprime uma unica grande string, formatada usando a contra-barra
     * para se evitar o uso de varios prints.*/
    printf("A circunferencia de um circulo de\n\
            \rraio %.3fcm eh %.3fcm.\n\
            \rA Area desse circulo\n\
            \reh %.3fcm^2.\n\
            \rO volume de uma esfera\n\
            \rcom esse raio eh %.3fcm^3\n",
            raio, circunferencia, area, volume);

    return 0;
}
