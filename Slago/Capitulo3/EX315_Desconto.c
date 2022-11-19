/* Um comerciante precisa informatizar o
 * caixa de sua loja. Para isso ele precisa
 * de um programa que leia uma serie de valores
 * correspondendo aos precos das mercadorias
 * compradas por um cliente (o valor zero finaliza
 * a entrada). Calcule o valor total, subtraia deste
 * valor o desconto devido (vide tabela abaixo) e,
 * finalmente, mostre o valor a ser pago pelo cliente.
 * Codifique esse programa.
 *
 * -------------------------------
 * |      Total       | DESCONTO |
 * |------------------|----------|
 * |Abaixo de R$50,00 |    5%    |
 * |     Ate R$100,00 |   10%    |
 * |     Ate R$200,00 |   15%    |
 * |Acima de R$200,00 |   20%    |
 * -------------------------------
 * */

# include <stdio.h>

int main(){
    float total=0, mercadoria;
    do {
        printf(
        "Digite o preco da mercadoria ou 0 para finalizar: "
        );
        scanf("%f", &mercadoria);
        total += mercadoria;
    }
    while (mercadoria!=0);
    if (total<=50) 
        printf("Total: R$%.2f\n", total*(1-5.0/100));
    else if (total<=100)
        printf("Total: R$%.2f\n", total*(1-10.0/100));
    else if (total<=200)
        printf("Total: R$%.2f\n", total*(1-15.0/100));
    else if (total>200)
        printf("Total: R$%.2f\n", total*(1-20.0/100));


    return 0;
}
