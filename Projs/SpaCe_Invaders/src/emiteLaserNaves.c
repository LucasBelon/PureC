# include "../headers/emiteLaserNaves.h"


retorno_emiteLaserNaves
Tenta_Atirar(int linha, int coluna, char **matriz){
    retorno_emiteLaserNaves retorno = {
        .acertou_jogador = 0,
        .colisao_de_lasers = 0
    };
    if (rand()%2){ // Verificando se deve ou não atirar
        if (*(coluna + *(linha + 1 + matriz)) == LASER_CANHAO){
            *(coluna + *(linha + 1 + matriz)) = ' ';
            retorno.colisao_de_lasers = 1;
            return retorno;
        }
        else if (*(coluna + *(linha + 1 + matriz )) == CANHAO){
            *(coluna + *(linha + 1 + matriz )) = EXPLOSAO;
            retorno.acertou_jogador = 1;
            return retorno;
        }
        else {
            *(coluna + *(linha + 1 + matriz )) = LASER_NAVE;
            return retorno;
        }
    }
    return retorno;
}



retorno_emiteLaserNaves
emiteLasersNaves(char **matriz){

    retorno_emiteLaserNaves 
        retorno = {.colisao_de_lasers = 0, .acertou_jogador = 0},
        tenta_atirar;

    // Andar da esquerda pra direita, mas de baixo
    // pra cima.
    for(int linha = LINHA_MAXIMA; linha >= 1; --linha)
    {
        for(int coluna = 1; coluna <= COLUNA_MAXIMA; ++coluna)
        {
            if ( *(coluna + *(linha + matriz)) == NAVE ) // Se eu encontrar uma nave
            {
                if (!(linha == LINHA_MAXIMA || linha == LINHA_MAXIMA+1)){ // Numa posição válida e
                    if ( !(*(coluna + *(linha + 1 + matriz)) == NAVE ) ) { // Se não houver uma nave na linha abaixo
                        // Tenta atirar.
                        // Preciso passar a posição atual, a matriz, e o resto a função que se vire.
                        tenta_atirar = Tenta_Atirar(linha, coluna, matriz);
                        // Preciso adicionar uma coisa por vez ao retorno e depois entregar tudo mastigado pra função principal.
                        retorno.acertou_jogador = tenta_atirar.acertou_jogador;
                        retorno.colisao_de_lasers += tenta_atirar.colisao_de_lasers;
                    }
                }
            }
        }
    }
    return retorno;
}

