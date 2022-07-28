/* Criando um tipo de estrutura rotulada.*/


# include <stdio.h>

int main(void){
    typedef struct data {
        int dia;
        int mes;
        int ano;
    };

    struct data hoje;
    struct data ontem, amanha;
    
    hoje.dia = 5;
    hoje.mes = 7;
    hoje.ano = 2022;

    ontem.ano = amanha.ano = hoje.ano;
    ontem.mes = amanha.mes = hoje.mes;
    ontem.dia = hoje.dia-1;
    amanha.dia = hoje.dia+1;

    printf("%02d/%02d/%02d\n",ontem.dia, ontem.mes, ontem.ano);
    printf("%02d/%02d/%02d\n",hoje.dia, hoje.mes, hoje.ano);
    printf("%02d/%02d/%02d\n",amanha.dia, amanha.mes, amanha.ano);
    return 0 ;
}
