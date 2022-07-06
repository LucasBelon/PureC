# include <stdio.h>
# include <stdlib.h>
# include "Utils.h"

int main(void){
    int tam_y=10;
    int tam_x=10;
    char campo[tam_y][tam_x];
    char campo_jogador[tam_y][tam_x];
    
    int max = (tam_x-2)*(tam_y-2);
    max /= 4;

    int num_bombas=max;

    inicializa_campo(campo, tam_y, tam_x, TABULEIRO);
    inicializa_campo(campo_jogador, tam_y, tam_x, TAB_JOGADOR);

    insere_bomba(campo, tam_y, tam_x, num_bombas);
    marca_N_bomba_contorno(campo, tam_y, tam_x);
    //visualiza_campo(campo, tam_y, tam_x);

    int pos_x, pos_y;
    printf("Digite as coordenadas a serem abertas [linha][coluna]:");
    scanf("%d %d", &pos_y, &pos_x);
    while(mostra_personalizado(campo, campo_jogador, tam_y, tam_x, pos_y, pos_x)){
        printf("Digite as coordenadas a serem abertas [linha][coluna]:");
        scanf("%d %d", &pos_y, &pos_x);
    }
    return 0 ;
}
