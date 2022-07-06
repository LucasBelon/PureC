/* Criando uma estrutura para armazenar uma data */


# include <stdio.h>

int main(){
    struct {
        int dia;
        int mes;
        int ano;
    } hoje;

    hoje.dia = 5;
    hoje.mes = 7;
    hoje.ano = 2022;

    printf("%02d/%02d/%04d\n",hoje.dia, hoje.mes, hoje.ano);
    return 0 ;
}
