/* Seja 'e' uma variavel contendo o numero
 * de erros detectados num certo processo, 
 * codifique uma instrucao capaz de exibir 
 * saidas como:
 *
 * 1 erro detectado.
 * 5 erros detectados.*/

# include <stdio.h>

int main(){
    float salario;
    int tem_Bonus = 0;
    printf("Digite o salario para que eu faça o reajuste:");
    scanf("%f", &salario);
    if (salario<=750)
        tem_Bonus = 1;
    salario = salario*(1+0.05) + (100*tem_Bonus);

    printf(\
"Seu salario reajustado eh %.2f, e voce \
%s o bonus",
salario,
tem_Bonus ? "recebeu" : "nao recebeu"
    );

    return 0;
}
