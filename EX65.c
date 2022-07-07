/* Defina um tipo de estrutura para armazenar os dados de um
 * voo como, por exemplo, os nomes das cidades de origem e 
 * destino, datas e horarios de partida e chegada. Crie uma
 * variavel desse tipo e atribua valores aos seus membros
 * usando a notacao de ponto e, depois, inicializacao.*/

typedef struct {
    int hora;
    int minuto;
    int segundo;
} HORA;

typedef struct {
    int dia;
    int mes;
    int ano;
    HORA horario;
} TEMPO;

typedef struct {
    char cidade[30];
    TEMPO tempo;
} INFO_VOO;

typedef struct {
    INFO_VOO origem;
    INFO_VOO destino;
} VOO;


# include <stdio.h>

int main(void){
    VOO voo1;
    strcpy(voo1.origem.cidade, "Sao Paulo");
    strcpy(voo1.destino.cidade, "Rio de Janeiro");
    voo1.origem.tempo.horario.hora = 23;
    voo1.origem.tempo.horario.minuto = 53;
    voo1.origem.tempo.horario.segundo = 0;
    voo1.origem.tempo.dia = 20;
    voo1.origem.tempo.mes = 8;
    voo1.origem.tempo.ano = 2020;
    voo1.destino.tempo.horario.hora = 1;
    voo1.destino.tempo.horario.minuto = 15;
    voo1.destino.tempo.horario.segundo = 35;
    voo1.destino.tempo.dia = 21;
    voo1.destino.tempo.mes = 8;
    voo1.destino.tempo.ano = 2020;

    VOO voo2 = { 
    {"Sao Paulo",
        {20,8,2020,
            {23,53,0}}},
    {"Rio de Janeiro", 
        {21,8,2020,
            {1,15,35}}}
                };
    
    return 0 ;
}
