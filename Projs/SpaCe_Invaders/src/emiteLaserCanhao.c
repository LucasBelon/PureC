# include "../headers/emiteLaserCanhao.h"

// Passo 3: primeira função para emitir lasers. Nesse caso, para emitir
// um novo laser pelo canhão do jogador.

void
analisaAcimaDoCanhao(int posCanhao, char ** matriz, retorno_emiteLaserCanhao * retorno){
    if (*(posCanhao + *(LINHA_MAXIMA - 1 + matriz)) == NAVE){
        retorno->navesAtingidas += 1;
        *(posCanhao + *(LINHA_MAXIMA - 1 + matriz)) = ' ';
    }
    else if (*(posCanhao + *(LINHA_MAXIMA - 1 + matriz)) == LASER_NAVE){
        retorno->lasersAtingidos += 1;
        *(posCanhao + *(LINHA_MAXIMA - 1 + matriz)) = ' ';
    }
    else
        *(posCanhao + *(LINHA_MAXIMA - 1 + matriz)) = LASER_CANHAO;
}


retorno_emiteLaserCanhao emiteLaserCanhao(char **matriz){
    retorno_emiteLaserCanhao retorno = 
    {
        .navesAtingidas = 0,
        .lasersAtingidos = 0
    };
    char * linha_canhao = *(matriz+LINHA_MAXIMA);
    int indexCanhao = _posCanhao(linha_canhao);

    // Ao emitir, existe um obstáculo imediatamente acima?
    // Ou uma nave, ou um laser inimigo.
    analisaAcimaDoCanhao(indexCanhao, matriz, &retorno);
    return retorno;
}
