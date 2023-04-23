# include "../headers/moveNaves.h"

// Passo 2: segunda função para mover algum elemento que emite lasers.
// Nesse caso para mover as naves.


int
analisa_limites(char ** matriz, int direcao, int ja_atingiu){
    for(int linha = 1; linha <= LINHA_MAXIMA; linha++)
    {
        for(int coluna = 1; coluna <= COLUNA_MAXIMA; coluna++)
        {
            // Rodamos a matriz procurando a nave para
            // analisarmos seus índices
            if ( *(coluna + *(linha + matriz)) == NAVE )
            {
                if (coluna == COLUNA_MAXIMA && direcao == DIREITA) 
                    return ATINGIU_DIREITA;

                if (coluna == 1 && direcao == ESQUERDA) 
                    return ATINGIU_ESQUERDA;

                // Como saltamos de 2 em 2 ao se mover para baixo,
                // preciso avaliar duas fileiras de naves.
                if (linha == LINHA_MAXIMA && direcao == BAIXO)
                    return ATINGIU_EMBAIXO;
            }
        }
    }
    return ja_atingiu;
}

void
acoesDeMovimento(int coluna, int linha, int delta_X, int delta_Y, char **matriz, return_moveNaves * retorno){
    if (*(coluna + delta_X + *( linha + delta_Y + matriz)) == CANHAO )
    {
        *(coluna + delta_X + *( linha + delta_Y + matriz)) = EXPLOSAO;
        *(coluna + *( linha + matriz)) = ' ';
        retorno->jogador_atingido = 1;
    }
    else if (*(coluna + *( linha + delta_Y + matriz)) == LASER_CANHAO )
    {
        *(coluna + delta_X + *( linha + delta_Y + matriz)) = ' ';
        *(coluna + *( linha + matriz)) = ' ';
        retorno->quantidade_atingidas += 1;
    }
    else
    {
        *(coluna + delta_X + *( linha + delta_Y + matriz)) = NAVE;
        *(coluna + *( linha + matriz)) = ' ';
    }
}

return_moveNaves
coreMoveNaves(char **matriz, int direcao){
    // Essa função é uma das coisas mais feias que eu já
    // escrevi em toda a minha vida. Mas vou deixar como
    // está por estar muito claro o que ela faz.
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
                    acoesDeMovimento(coluna, linha, 0, -direcao, matriz, &retorno);
                    coluna++;
                }
                else // direcao == esquerda ou direita
                {
                    acoesDeMovimento(coluna, linha, direcao, 0, matriz, &retorno);
                    coluna++;
                }
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

    retorno.limite_atingido = analisa_limites(matriz, direcao, retorno.limite_atingido);

    if(!retorno.limite_atingido){
        retorno = coreMoveNaves(matriz, direcao);
    }
    return retorno;
}

