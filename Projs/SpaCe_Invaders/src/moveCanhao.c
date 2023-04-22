# include "../headers/moveCanhao.h"

int
_posCanhao(char *linha_canhao){
    for(int i = 0; i < (COLUNA_MAXIMA + 2); ++i)
        if ( *( linha_canhao + i ) == CANHAO )
            return i;

    return -1;
}


int
_proxPosic(int pos_atual, int direcao){
    int prox_pos = pos_atual + direcao;

    if (prox_pos == 0)
        return COLUNA_MAXIMA;

    else if (prox_pos == COLUNA_MAXIMA + 1)
        return 1;

    else
        return prox_pos;
}


int
_moveu(int pos_atual, int prox_pos, char * linha_canhao){
    if ( *(linha_canhao + prox_pos) == LASER_NAVE )
    {
        *(linha_canhao + pos_atual) = ' ';
        *(linha_canhao + prox_pos) = EXPLOSAO;
        return PERDEU;
    }

    else {
        *(linha_canhao + pos_atual) = ' ';
        *(linha_canhao + prox_pos) = CANHAO;
        return VENCEU;
    }
}

int
moveCanhao(int direcao, char **matriz){
    // Estou usando as Macros VENCEU e PERDEU como substitutos
    // à True e False.
    
    // Para essa função só interessa os dados da linha
    // onde a nave pode estar. Então... vou simplificar
    // as coisas armazenando essa linha numa variável:
    char * linha_canhao = *(matriz+LINHA_MAXIMA);

    // Primeiro preciso saber onde está o canhão.
    int indexCanhao = _posCanhao(linha_canhao);

    // Preciso saber para qual índice o canhão irá
    // "pousar" antes de fazer os movimentos.
    // Se ele estiver no limite da tela ele pode pular
    // para o outro canto da tela.
    int proxima_posicao = _proxPosic(indexCanhao, direcao);

    // Depois preciso saber o que há nos entornos,
    // se o canhão for acertado preciso movê-lo e 
    // então substituir pela representação de explosão.
    // Isso encerra as responsabilidades de nossa função.
    return _moveu(indexCanhao, proxima_posicao, linha_canhao);
}

