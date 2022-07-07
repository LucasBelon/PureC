/* Inicialização de estruturas aninhadas*/


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
    PESSOA amigo = {"Lucas Belon", "91234-5678", {25, 12, 1200} };
    return 0 ;
}
