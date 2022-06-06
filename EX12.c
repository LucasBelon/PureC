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
    printf("A circunferencia de um circulo de\n\
raio %.3fcm eh %.3fcm.\n\
A Area desse circulo\n\
eh %.3fcm^2.\n\
O volume de uma esfera\n\
com esse raio eh %.3fcm^3\n",raio, circunferencia, area, volume);

    return 0;
}
