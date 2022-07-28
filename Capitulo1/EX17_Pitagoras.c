/*Dadas as medidas dos catetos debum triangulo
 * retangulo, informe a medida da hipotenusa
 * [Dica: para calcular a raiz quadrada use a
 * funcao sqrt(), definida no arquivo math.h]*/

# include <stdio.h>
# include <math.h>


int main(){
    float cateto1, cateto2, hipotenusa;

    printf("Diga os valores dos dois catetos:\n");
    scanf("%f %f", &cateto2, &cateto1);

    hipotenusa = sqrt(powf(cateto1,2)+powf(cateto2,2));

    printf("O Valor da hipotenusa para estes catetos eh %.2f\n",
    hipotenusa);
    
    return 0;
}
