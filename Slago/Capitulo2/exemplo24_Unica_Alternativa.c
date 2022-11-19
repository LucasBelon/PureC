/* Numa empresa paga-se R$19.50 a hora e
 * recolhe-se para o imposto de renda 10%
 * dos salarios acima de R$1500,00. Dado o
 * numero de horas trabalhadas por um
 * funcionario, informar o valor de seu
 * salario liquido.*/

# include <stdio.h>

int main(){
    int h;
    float s;

    printf("Horas trabalhadas:\n");
    scanf("%d",&h);

    s = 19.5 * h;

    if (s > 1500)
        s = 0.9*s;

    printf("O salario liquido eh de R$ %.2f\n",s);

    return 0;
}
