/* Codifique um programa que indique a quantidade 
 * minima de cedulas equivalente a uma dada quantia 
 * em dinheiro. Considere apenas valores inteiros 
 * e cedulas de 1, 5, 10, 50 e 100 reais. 
 *
 * Quantia: R$ 209
 * 2 cedulas de R$100,00
 * 1 cedula  de R$5,00
 * 4 cedulas de R$1,00*/


# include <stdio.h>
# define TAMANHO 5
int main(void){

    int TAM = TAMANHO - 1;
    int cedulas[TAMANHO]={1,5,10,50,100};
    int quantia;

    int quant_cedulas[TAMANHO];
    for(int i=0; i<TAMANHO;i++) quant_cedulas[i]=0;

    printf("Quantia? R$");
    scanf("%d", &quantia);

    while (quantia>0){
        if (quantia - cedulas[TAM] < 0) --TAM;
        else {
            quant_cedulas[TAM] += 1 ;
            quantia -= cedulas[TAM] ;
        }
    }

    for(int i = TAMANHO - 1; i >= 0; --i){
        if (quant_cedulas[i] != 0)
            printf("%d %s de R$%d,00\n", quant_cedulas[i],(quant_cedulas[i]>1)?"Cedulas":"Cedula ", cedulas[i]);
    }

    return 0 ;
}
