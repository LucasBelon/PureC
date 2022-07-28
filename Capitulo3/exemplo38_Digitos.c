/* Exibe os digitos de um numero.*/


# include <stdio.h>

int main(){
    unsigned int n, d;

    printf("Digite um numero: ");
    scanf("%u", &n);

    printf("Os seus digitos sao: ");

    while ( n!= 0) {
        d = n % 10;
        n /= 10;
        printf("%u ", d);
    }

    return 0 ;
}
