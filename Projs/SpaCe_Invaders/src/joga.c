# include "../headers/joga.h"

/* int -> [bool, int]

Recebe um inteiro que representa a quantidade de naves, implementa de
fato o jogo de acordo com as regras do enunciado e retorna uma lista
com o resultado do jogo:

[resultado, pontuacao]

resultado é uma variável booleana que vale True se o jogador venceu
ou False se o jogador perdeu.

Para o jogador vencer:
- O jogador precisa destruir todas as naves

Para o jogador perder:
- O jogador precisa ser atingido pelo tiro de alguma nave
- Ou alguma nave precisa alcançar a linha LINHA_MAXIMA da matriz do
jogo
- Ou o jogador precisa ser atingido por alguma nave

pontuacao é uma variável inteira que armazena a quantidade de pontos
que o jogador fez. A pontuação é definida da seguinte forma:

+PONTOS_ACERTOU_LASER pontos se o jogador consegue acertar 1 tiro em
alguma nave
+PONTOS_ACERTOU_NAVE  pontos se o jogador consegue acertar 1 tiro em
algum tiro de alguma nave

A ordem das ações no jogo é:
- tiros anteriores do jogador se movem
- imprime o estado do jogo na tela
- usuário informa se quer atirar ou se mover e a ação escolhida é
realizada
- tiros anteriores das naves se movem
- naves atiram (de acordo com o sorteio de números aleatórios)
- naves se movem (de acordo com a rodada - se move apenas nas pares:
direita, baixo, esquerda, baixo, direita, etc...

Dentro de cada função de movimentação e de emissão de lasers é
necessário verificar se houve colisões para aumentar a pontuação,
para terminar o jogo ou para limpar a tela removendo os elementos que
sumiram por terem passado do limite da tela (tiros que subiram demais
e tiros que desceram demais)

Sempre que o jogo terminar, deve imprimir o status final da
matriz do jogo
*/ 

return_Joga joga(int quantidadeNaves){
    // Criação da matriz que manterá o estado do jogo.
        char ** matriz = criaBufferMatriz();

    // Inserção dos elementos nulos e bordas da matriz.
    iniciaCaractereMatriz(matriz);

    // Adicionar interface de usuário aqui.
    // Inserção dos inimigos e do jogador na matriz.
    criaElementos(COLUNA_MAXIMA - 3 , matriz);

    // Inicialização das estruturas:
    // Retorno da função joga
    return_Joga retorno = 
    {
        .pontuacao = 0, 
        .resultado = 1
    };

    // Retorno da função moveNaves
    return_moveNaves return_moveN;

    // Informações Gerais para controle do jogo:
    Controle_Do_Jogo General_Control = 
        {.acaoDoJogador = 0,
         .fimDeJogo = 0,
         .rodada = 1,
         .direcaoNaves = DIREITA};

    /*
    // Adicionando um tiro de nave para parar a iteração
    // (Apenas para testes, remover mais tarde)
    matriz[LINHA_MAXIMA][COLUNA_MAXIMA - 3] = LASER_NAVE;
    */


    // Variáveis para auxílio da direção das naves.
    int indice_ciclico = 0;
    int direcao_ciclica[] = {DIREITA, ESQUERDA};

    // Loop do jogo
    while (!General_Control.fimDeJogo){
        // complete o loop seguindo a ordem das ações explicada no
        // enunciado e no docstring desta função acima.

        /* A ordem das ações no jogo é:*/
        // - tiros anteriores do jogador se movem

        // - imprime o estado do jogo na tela
        imprimeMatriz(matriz);
        // - usuário informa se quer atirar ou se mover
        //  e a ação escolhida é realizada
        printf("Escolha uma ação:\n\
              \rMover:  [e] Esquerda | [d] Direita\n\
              \rAtirar: [l] Laser\n");

        // Preciso esvaziar o buffer do stdout
        // para minha opção ser mostrada na tela.
        fflush(stdout);

        // Existe um caractere de nova linha 
        // no buffer que precisa ser consumido pelo espaço
        // à esquerda do %c
        scanf(" %c", &General_Control.acaoDoJogador);
        // Se eu decidisse usar um buffer[1024] nada disso
        // teria acontecido.

        // Tratamento do input do usuário.
        // Se o fim de jogo foi definido pela movimentação, o resultado
        // deve ser alterado.
        switch (General_Control.acaoDoJogador) {
            case '[': case 'E': case 'e':
                retorno.resultado = 
                    moveCanhao(ESQUERDA, matriz);
                if(retorno.resultado == PERDEU){
                   imprimeMatriz(matriz); 
                   return retorno;}
                break;
            case ']': case 'D': case 'd':
                retorno.resultado = 
                    moveCanhao(DIREITA, matriz);
                if(retorno.resultado == PERDEU){
                   imprimeMatriz(matriz); 
                   return retorno;}
                break;
            /* PRECISO COLOCAR O RETORNO DA FUNÇÃO EM ALGUM LUGAR
             * LIDAR COM ISSO MAIS TARDE */
            case '~': case 'L': case 'l':
                emiteLaserCanhao(matriz);
                break;
            /* -------------------------------------------------- */
            default:
                puts("Nenhuma opção válida foi encontrada. Seguindo partida");
                break;
        }

        // - tiros anteriores das naves se movem

        // - naves atiram (de acordo com o sorteio de números aleatórios)
        retorno_emiteLaserNaves return_emiteLaserNaves;
        return_emiteLaserNaves = emiteLasersNaves(matriz);
        if (return_emiteLaserNaves.acertou_jogador == 1){
            retorno.resultado = PERDEU;
            imprimeMatriz(matriz);
            return retorno;
        }
        else
            retorno.pontuacao += return_emiteLaserNaves.colisao_de_lasers*PONTOS_ACERTOU_LASER;

        // - naves se movem (de acordo com a rodada - se move apenas nas pares:
        //   direita, baixo, esquerda, baixo, direita, etc...
        if (General_Control.rodada%2)
        {
            return_moveN = moveNaves(General_Control.direcaoNaves, matriz) ;

            if (return_moveN.limite_atingido)
            {
                if (return_moveN.limite_atingido == ATINGIU_EMBAIXO)
                {
                    retorno.resultado = PERDEU;
                    imprimeMatriz(matriz);
                    return retorno;
                }
                return_moveN = moveNaves(BAIXO, matriz) ;


                indice_ciclico = (indice_ciclico + 1)%2;
                General_Control.direcaoNaves = direcao_ciclica[indice_ciclico];
            }
            General_Control.fimDeJogo +=
                return_moveN.jogador_atingido;


            retorno.pontuacao += PONTOS_ACERTOU_NAVE * return_moveN.quantidade_atingidas;
        }
        General_Control.rodada += 1;
    }

    // Imprimimos uma última vez a matriz após encerrar o loop do jogo.
    imprimeMatriz(matriz);
    return retorno;
}
