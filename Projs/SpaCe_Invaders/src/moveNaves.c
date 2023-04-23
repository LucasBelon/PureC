# include "../headers/imprimeMatriz.h"
# include "../headers/moveNaves.h"

// Passo 2: segunda função para mover algum elemento que emite lasers.
// Nesse caso para mover as naves.


int
analisa_limites(char ** matriz, int direcao, int ja_atingiu){
    for(int linha = 1; linha <= LINHA_MAXIMA; linha++){
        for(int coluna = 1; coluna <= COLUNA_MAXIMA; coluna++)
        {
            if ( *(coluna+*(linha + matriz)) == NAVE )
            {
                if ((linha == LINHA_MAXIMA && direcao == BAIXO) ||
                        (linha == LINHA_MAXIMA-1 && direcao == BAIXO)) 
                    return ATINGIU_EMBAIXO;
                if (coluna == COLUNA_MAXIMA && direcao == DIREITA) 
                    return ATINGIU_DIREITA;
                if (coluna == 1 && direcao == ESQUERDA) 
                    return ATINGIU_ESQUERDA;
            }
        }
    }
    return ja_atingiu;
}

return_moveNaves
coreMoveNaves(char **matriz, int direcao){
    return_moveNaves retorno = 
    {
        .limite_atingido = 0,
        .jogador_atingido = 0,
        .quantidade_atingidas = 0
    };
    // Andar da direita pra esquerda, mas de baixo
    // pra cima.
    for(int linha = LINHA_MAXIMA; linha >= 1; --linha)
    {
        for(int coluna = 1; coluna <= COLUNA_MAXIMA; ++coluna)
        {
            if ( *(coluna + *(linha + matriz)) == NAVE )
            {
                if (direcao == BAIXO)
                {
                    if (linha == LINHA_MAXIMA || linha == LINHA_MAXIMA - 1)
                    {
                        retorno.limite_atingido = ATINGIU_EMBAIXO;
                        return retorno;
                    }
                    if (*(coluna + *( linha - direcao + matriz)) == CANHAO )
                    {
                        *(coluna + *( linha - direcao + matriz)) = EXPLOSAO; 
                        *(coluna + *( linha + matriz)) = ' '; 
                        retorno.jogador_atingido += 1;
                    }
                    else if (*(coluna + *( linha - direcao + matriz)) == LASER_CANHAO )
                    {
                        *(coluna + *( linha - direcao + matriz)) = ' '; 
                        *(coluna + *( linha + matriz)) = ' '; 
                        retorno.quantidade_atingidas += 1;
                    }
                    else
                    {
                        *(coluna + *( linha - direcao + matriz)) = NAVE; 
                        *(coluna + *( linha + matriz)) = ' '; 
                    }
                }
                else // direcao == esquerda ou direita
                {
                    if (*(coluna + direcao + *( linha + matriz)) == CANHAO )
                    {
                        *(coluna + direcao + *( linha + matriz)) = EXPLOSAO; 
                        *(coluna + *( linha + matriz)) = ' '; 
                        retorno.jogador_atingido += 1;
                    }
                    else if ( *(coluna + direcao + *( linha + matriz)) == LASER_CANHAO )
                    {
                        *(coluna + direcao + *( linha + matriz)) = ' '; 
                        *(coluna + *( linha + matriz)) = ' '; 
                        retorno.quantidade_atingidas += 1;
                    }
                    else
                    {
                        *(coluna + direcao + *( linha + matriz)) = NAVE; 
                        *(coluna + *( linha + matriz)) = ' '; 
                    }
                }
                coluna++; // Para pular as naves já deslocadas para a direita.
            }
        }
    }
    return retorno;
}

return_moveNaves 
moveNaves(int direcao, char ** matriz){
    // Definindo variável de retorno.
    return_moveNaves retorno = {
        .jogador_atingido = 0,
        .limite_atingido = 0,
        .quantidade_atingidas = 0
    };
    return_moveNaves retorno_coreMNaves = {
        .jogador_atingido = 0,
        .limite_atingido = 0,
        .quantidade_atingidas = 0
    };
    retorno.limite_atingido = analisa_limites(matriz, direcao, retorno.limite_atingido);

    if(!retorno.limite_atingido){
        retorno_coreMNaves = coreMoveNaves(matriz, direcao);
        retorno.jogador_atingido += retorno_coreMNaves.jogador_atingido;
        retorno.quantidade_atingidas += retorno_coreMNaves.quantidade_atingidas;
        retorno.limite_atingido = retorno_coreMNaves.limite_atingido;
    }
    return retorno;
}

