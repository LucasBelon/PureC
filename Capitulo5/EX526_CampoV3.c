/* Codifique uma funcao que recebe como argumentos
 * um campo minado marcado, vide exercicio anterior,
 * e as coordenadas de uma posicao dele. A funcao 
 * deve marcar a posicao indicada como "aberta" e 
 * exibir o campo minado no video, conforme
 * ilustracao a seguir, mostrando apenas as posicoes
 * ja "Abertas". Alem disso, a funcao deve devolver
 * 1 se a posicao estiver livre e 0 se tiver uma 
 * bomba.*/


# include <stdio.h>
# include <stdlib.h>

# define TABULEIRO '0'
# define TAB_JOGADOR '+'
# define BOMBA '*'
# define randomico rand
# define BORDA '#'

void inicializa_campo(campo, tam_y, tam_x, tabuleiro)
    char tabuleiro;
    int tam_y;
    int tam_x;
    char campo[tam_y][tam_x];
{
    for(int i=0;i<tam_y;++i)
    for(int j=0;j<tam_x;++j){
        if(i==0 || i==tam_y-1) campo[i][j]=BORDA;
        else if(j==0 || j==tam_x-1) campo[i][j]=BORDA;
        else campo[i][j]=tabuleiro;}
}


void visualiza_campo(campo, tam_y, tam_x)
    int tam_y;
    int tam_x;
    char campo[tam_y][tam_x];
{
    for(int i=-1;i<tam_y;++i){
    for(int j=-1;j<tam_x;++j){
        if (i==-1) putchar(j+'0');
        else if (j == -1) putchar(i+'0');
        else putchar(campo[i][j]);
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

int mostra_personalizado(campo, campo_jogador, tam_y, tam_x, pos_y, pos_x)
    int tam_y, tam_x;
    int pos_y, pos_x;
    char campo[tam_y][tam_x];
    char campo_jogador[tam_y][tam_x];
{
    if (pos_y < tam_y-1 && pos_y > 0 && pos_x < tam_x-1 && pos_x > 0 ){
        campo_jogador[pos_y][pos_x] = campo[pos_y][pos_x];
        if (campo[pos_y][pos_x] == BOMBA) {
            visualiza_campo(campo_jogador, tam_y, tam_x);
            return 0;
        }
        else {
            visualiza_campo(campo_jogador, tam_y, tam_x);
            return 1;}
    }    
    else {
        puts("Você tentou uma posicao invalida. Tente novamente\n");
        printf("Digite as coordenadas a serem abertas [linha][coluna]:");
        scanf("%d %d", &pos_y, &pos_x);
        return mostra_personalizado(campo, campo_jogador, tam_y, tam_x, pos_y, pos_x); 
    }
}




int main(void){
    int tam_y=10;
    int tam_x=10;
    char campo[tam_y][tam_x];
    char campo_jogador[tam_y][tam_x];
    
    int max = (tam_x-2)*(tam_y-2);
    max /= 4;

    int num_bombas=max;

    inicializa_campo(campo, tam_y, tam_x, TABULEIRO);
    inicializa_campo(campo_jogador, tam_y, tam_x, TAB_JOGADOR);

    insere_bomba(campo, tam_y, tam_x, num_bombas);
    marca_N_bomba_contorno(campo, tam_y, tam_x);
    //visualiza_campo(campo, tam_y, tam_x);

    int pos_x, pos_y;
    printf("Digite as coordenadas a serem abertas [linha][coluna]:");
    scanf("%d %d", &pos_y, &pos_x);
    while(mostra_personalizado(campo, campo_jogador, tam_y, tam_x, pos_y, pos_x)){
        printf("Digite as coordenadas a serem abertas [linha][coluna]:");
        scanf("%d %d", &pos_y, &pos_x);
        visualiza_campo(campo, tam_y, tam_x);
    }
    return 0 ;
}
