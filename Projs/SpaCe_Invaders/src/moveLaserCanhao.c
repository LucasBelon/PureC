# include "../headers/moveLaserCanhao.h"

void
moverLaser (int coluna, int linha, char **matriz, retorno_MLCanhao * retorno){
    if (linha == 1)
    {
        *(coluna + *( linha + matriz)) = ' ';
    }
    else if (*(coluna + *( linha - 1 + matriz)) == LASER_NAVE )
    {
        *(coluna + *( linha - 1 + matriz)) = ' ';
        *(coluna + *( linha + matriz)) = ' ';
        retorno->lasers_Atingidos += 1;
    }
    else if (*(coluna + *( linha -1 + matriz)) == NAVE ) 
    {
        *(coluna + *( linha - 1 + matriz)) = ' ';
        *(coluna + *( linha + matriz)) = ' ';
        retorno->naves_Atingidas += 1;
    }
    else
    {
        *(coluna + *( linha - 1 + matriz)) = LASER_CANHAO;
        *(coluna + *( linha + matriz)) = ' ';
    }
}

retorno_MLCanhao 
moveLasersCanhao(char ** matriz){
    retorno_MLCanhao retorno = {
        .naves_Atingidas = 0,
        .lasers_Atingidos = 0
    };
    // Andar da direita pra esquerda, mas de baixo
    // pra cima.
    for(int linha = LINHA_MAXIMA; linha >= 1; --linha)
    {
        for(int coluna = 1; coluna <= COLUNA_MAXIMA; ++coluna)
        {
            if ( *(coluna + *(linha + matriz)) == LASER_CANHAO)
            {
                moverLaser(coluna, linha, matriz, &retorno);
            }
        }
    }
    return retorno;
}

