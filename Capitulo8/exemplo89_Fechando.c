/* O fechamento de um arquivo eh importante por
 * dois motivos.
 * 1 - Se o arquivo foi aberto para gravacao e o
 * buffer nao foi completamente preenchido, o
 * fechamento garante que ele seja descarregado
 * em disco.
 * 2 - o fechamento libera a area de conexao 
 * alocada na abertura do arquivo.*/


# include <stdio.h>
# include <stdlib.h>

int main(void){
    FILE *a, *e, *s;

    fclose(s);   /* Fecha somente o arquivo s*/
    fcloseall(); /* Fecha os arquivos restantes*/
    // Closeall esta dando erro, nao sei pq.

    return 0 ;
}
