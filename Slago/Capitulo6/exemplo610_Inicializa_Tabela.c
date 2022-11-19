/* Inicializando uma agenda.*/

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
    static PESSOA agenda[] = {
        { "Itivaldo Buzo", "850-9973", {27, 7, 1970} },
        { "Roberto Soares", "266-0879", {15, 11, 1971} },
        { "Márcia Ueji", "576-8292", { 9, 5, 1966} }, 
        { "Silvio Lago", "851-7715", {18, 3, 1968} },
        { "Mie Kobayashi", "834-0192", { 4, 12, 1973} }
    };
    return 0 ;
}
