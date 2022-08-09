/* Dados uma distancia e o total
 * de litros de combustivel gasto
 * por um automovel para percorre-la,
 * informe o consumo medio*/

# include <stdio.h>

int main(){

    float kilometragem, litros_combustivel;

    printf("informe a distancia[km] e\
            \ro gasto de combustivel[l]:\n");

    scanf("%f %f",&kilometragem, &litros_combustivel);

    printf("\nO consumo Medio foi de %.2fkm/l\n", 
            kilometragem/litros_combustivel);

    return 0;
}
