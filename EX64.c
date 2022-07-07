/* Defina um tipo de estrutura para armazenar um 
 * horario composto de hora, minutos e segundos. 
 * Crie e inicialize uma variavel desse tipo e, 
 * em seguida, mostre seu valor no video usando 
 * o formato "99:99:99". */

# include <stdio.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
} HORARIO;


int main(void){
    HORARIO agora = {8, 1, 58};
    printf("%02d:%02d:%02d\n",
            agora.hora,
            agora.minuto,
            agora.segundo);

    return 0 ;
}
