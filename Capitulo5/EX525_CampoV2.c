/* Crie uma funcao que recebe um campo minado e
 * marca, para cada posicao livre, o numero de
 * posicoes adjacentes que contem bombas, conforme
 * exemplificado a seguir
 *
 * ##########
 * #*1001*3*#
 * #331012*2#
 * #**100232#
 * #23212*2*#
 * #*11*3221#
 * #22323*21#
 * #1*4*223*#
 * #2**21011#
 * ##########
 * (Exemplo = tabuleiro 10x10)*/

# include <stdio.h>
# include <stdlib.h>

# define TABULEIRO '0'
# define BOMBA '*'
# define randomico rand
# define BORDA '#'

void inicializa_campo(campo, tam_y, tam_x)
    int tam_y;
    int tam_x;
    char campo[tam_y][tam_x];
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
{
    int y_rand = randomico()%(tam_y-2) + 1;
    int x_rand = randomico()%(tam_x-2) + 1;
    if (n_bomba!=0 && campo[y_rand][x_rand]==BOMBA){
        insere_bomba(campo, tam_y, tam_x, n_bomba);
    }
    else if (n_bomba!=0){
        campo[y_rand][x_rand]=BOMBA;
        insere_bomba(campo, tam_y, tam_x, n_bomba-1);
    }
}


int numero_bombas_contorno(campo, tam_y, tam_x, pos_y, pos_x)
    int tam_y, tam_x, pos_x, pos_y;
    char campo[tam_y][tam_x];
{
    int num_bombas = 0;
    for (int i=-1; i<2; ++i){
    for (int j=-1; j<2; ++j){
        if (campo[pos_y+i][pos_x+j] == BOMBA)
            num_bombas += 1;
    }}
    return num_bombas;
}


void marca_N_bomba_contorno(campo,tam_y,tam_x)
    int tam_y;
    int tam_x;
    char campo[tam_y][tam_x];
{
    for(int i = 1; i < tam_y-1; ++i){
    for (int j = 1; j < tam_x-1; ++j){
        if (campo[i][j] != BOMBA)
            campo[i][j] += numero_bombas_contorno(campo, tam_y, tam_x, i, j);
    }}
}


int main(void){
    int tam_y=10;
    int tam_x=20;
    char campo[tam_y][tam_x];
    
    int max = (tam_x-2)*(tam_y-2);
    max /= 4;

    int num_bombas=max;

    inicializa_campo(campo, tam_y, tam_x);
    insere_bomba(campo, tam_y, tam_x, num_bombas);
    marca_N_bomba_contorno(campo, tam_y, tam_x);
    visualiza_campo(campo, tam_y, tam_x);

    return 0 ;
}
