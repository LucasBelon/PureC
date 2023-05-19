# include "../headers/moveLaserNaves.h"

void
moverLaserNave (int coluna, int linha, char **matriz, retorno_MLNaves * retorno){
    if (linha == LINHA_MAXIMA)
    {
        *(coluna + *( linha + matriz)) = ' ';
    }
    else if ( *(coluna + *( linha + 1 + matriz)) == LASER_CANHAO )
    {
        *(coluna + *( linha + 1 + matriz)) = ' ';
        *(coluna + *( linha + matriz)) = ' ';
        retorno->lasers_Atingidos += 1;
    }
    else if (*(coluna + *( linha + 1 + matriz)) == CANHAO ) 
    {
        *(coluna + *( linha + 1 + matriz)) = EXPLOSAO;
        *(coluna + *( linha + matriz)) = ' ';
        retorno->Canhao_Atingido += 1;
    }
    else
    {
        *(coluna + *( linha + 1 + matriz)) = LASER_NAVE;
        *(coluna + *( linha + matriz)) = ' ';
    }
}

retorno_MLNaves 
moveLasersNaves(char ** matriz){
    retorno_MLNaves retorno = {
        .Canhao_Atingido = 0,
        .lasers_Atingidos = 0
    };
    for(int linha = LINHA_MAXIMA; linha >= 1; --linha)
    {
        for(int coluna = 1; coluna <= COLUNA_MAXIMA; ++coluna)
        {
            if ( *(coluna + *(linha + matriz)) == LASER_NAVE)
            {
                moverLaserNave(coluna, linha, matriz, &retorno);
            }
        }
    }
    return retorno;
}

