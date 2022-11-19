/* Uma estrutura para armazenar dados de uma pessoa.*/


# include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct {
    char nome[31];
    char fone[21];
    DATA nasc;
} PESSOA ;


int main(void){
    PESSOA eu;

    strcpy(eu.nome, "Lucas Gouveia Belon");
    strcpy(eu.fone, "91234-5678");
    eu.nasc.dia = 17;
    eu.nasc.mes = 5;
    eu.nasc.ano = 1973;
    
    return 0 ;
}
