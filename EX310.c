/* Numa agencia bancaria, as contas sao identificadas
 * por numeros de ate seis digitos seguidos de um digito
 * verificador, calculado conforme exemplificado a seguir.
 * Dado um numero de conta n, exiba o numero de conta
 * completo correspondente.
 *
 * Seja n =7314 o numero da conta.
 * 1o adicionamos os digitosde n obtendo a soma
 * 7+3+1+4= 15=s
 * 2o calulamos o resto da divisao de s por 10
 * e obtemos o digito d=5
 * o numero da conta completo:007314-5*/

# include <stdio.h>

int main(){
    int n, s=0, d, conta;

    printf("Digite o numero n da conta:\n");
    scanf("%d", &n);
    while (n>999999){
        printf("n da conta muito grande. Redigite:\n");
        scanf("%d", &n);
    }
    
    conta = n;

    while (n!=0){
        s += n%10;
        n /= 10;
    }
    d = s%10;
    printf("O Numero completo eh:\n%06d-%d", conta, d);
    return 0;
}
