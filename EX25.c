/* */

# include <stdio.h>

int main(){
    float salario;
    int tem_Bonus = 0;
    printf("Digite o salario para que eu faça o reajuste:");
    scanf("%f", &salario);
    if (salario<=750){
        tem_Bonus = 1;
    };
    salario = salario*(1+0.05) + (100*tem_Bonus);

    printf("Seu salario reajustado eh %f, e voce \
%s o bonus", salario, \
tem_Bonus ?"recebeu":"nao recebeu");
    return 0;
}
