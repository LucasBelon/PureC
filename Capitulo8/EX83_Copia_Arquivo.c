/* Crie um programa para fazer copias de arquivos
 * texto, transferindo caracter por caracter. O
 * programa deve receber os nomes dos arquivos de
 * origem e destino via argumentos da linha de 
 * comando e deve usar as funcoes fgetc() e fputc()
 * para leitura e gravacao, respectivamente. [Dica:
 * a funcao fputc() deve receber como argumentos o
 * caracter e o ponteiro do arquivo no qual ele sera
 * gravado, nessa ordem.*/

# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *e;
    if ((e=fopen(argv[1], "w")) == NULL){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }

    fclose(e);



    return 0 ;
}
