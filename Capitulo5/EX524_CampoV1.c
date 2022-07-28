/* Usando as funções randomize() e random(),
 * ambas definidas em stdlib.h, crie uma 
 * função para preencher, aleatoriamente, 
 * uma matriz 10×10 representando um campo 
 * minado 8×8. Os limites da matriz devem
 * ser preenchidos com uns e o interior, 
 * com 0´s nas posições livres e 9´s nas
 * posições contendo bombas. Utilize um
 * parâmetro adicional na sua função para 
 * especificar a "facilidade" do campo 
 * minado, de tal modo que quanto maior
 * for a facilidade, menor seja número
 * de bombas no campo. 
 * OBS: -A funcao randomize nao existe mais.
 *      -A funcao random nao eh tao randomica. */

# include <stdio.h>
# include <stdlib.h>

//Caracteres do jogo. Nao sera seguido o enunciado
# define BORDA '#'
# define TABULEIRO '+'
# define BOMBA '*'
//# define randomico random
# define randomico rand

/* Para o proximo exercicio nao sera possivel
 * utilizar valores numericos na borda ou no
 * tabuleiro*/


void inicializa_campo(campo, tam_y, tam_x)
    int tam_y;
    int tam_x;
    char campo[tam_y][tam_x];
/* Toma um tabuleiro de dimensoes x por y e
 * adiciona uma borda e um miolo ao seu centro*/
{
    for(int i=0;i<tam_y;++i)
    for(int j=0;j<tam_x;++j){
        if(i==0 || i==tam_y-1) campo[i][j]=BORDA;
        else if(j==0 || j==tam_x-1) campo[i][j]=BORDA;
        else campo[i][j]=TABULEIRO;}
}


void visualiza_campo(campo, tam_y, tam_x)
    int tam_y;
    int tam_x;
    char campo[tam_y][tam_x];
/* imprime uma matriz de caracteres 
 * (Nao uma matriz de strings) de tamanho
 * qualquer.*/
{
    for(int i=0;i<tam_y;++i){
    for(int j=0;j<tam_x;++j){
        putchar(campo[i][j]);
    }
    putchar('\n');
    }
}


void insere_bomba(campo, tam_y, tam_x, n_bomba)
    int tam_y;
    int tam_x;
    char campo[tam_y][tam_x];
    int n_bomba;
/* Tenta inserir bomba, se ja houver, utiliza-se
 * de recursao ate o sucesso. Recursao infinita se
 * no tabuleiro houver apenas bombas. Aleatoriamente*/
{
    int y_rand = randomico()%(tam_y-2) + 1;
    int x_rand = randomico()%(tam_x-2) + 1;
    /* No caso de um tabuleiro 10x10 foi preciso
     * retirar o equivalente a 2 caracteres das bordas
     * nas 2 coordenadas, limitando o indice randomico
     * a assumir apenas valores de 0 a 8 (=tam-2) e
     * entao garantir que a borda a esquerda nao sera
     * ocupada (=indice+1)*/

    if (n_bomba!=0 && campo[y_rand][x_rand]==BOMBA){
    /* Se ja houver bomba reiniciamos a tentativa e 
     * deixamos um return para a finalizacao da recursao */
        insere_bomba(campo, tam_y, tam_x, n_bomba);
    }
    else if (n_bomba!=0){
    /* Nao ha bomba, inserimos a bomba e realizamos a recursao
     * com argumento numero de bombas subtraido de 1. quando
     * nao houver bombas a funcao terminara em todos os niveis
     * da recursao*/
        campo[y_rand][x_rand]=BOMBA;
        insere_bomba(campo, tam_y, tam_x, n_bomba-1);
    }
}

int main(void){
    int num_bombas=100;
    int tam_y=22;
    int tam_x=23;
    char campo[tam_y][tam_x];
    inicializa_campo(campo, tam_y, tam_x);
    insere_bomba(campo, tam_y, tam_x, num_bombas);
    visualiza_campo(campo, tam_y, tam_x);
    //printf("\n%ld",randomico());
    /* Vou usar randomico%10 pra encontrar posicao*/

    return 0 ;
}
