/* Exercício 8.3. Crie um programa para
 * fazer cópias de arquivos texto, 
 * transferindo caracter por caracter. 
 * O programa deve receber os nomes dos 
 * arquivos de origem e destino via 
 * argumentos da linha de comando e deve 
 * usar as funções fgetc() e fputc() 
 * para leitura e gravação, 
 * respectivamente. [Dica: a função 
 * fputc() deve receber como argumentos 
 * o caracter e o ponteiro do arquivo no
 * qual ele será gravado, nessa ordem.] */

# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc>3){
        puts(
        "Numero de argumentos excedido\n"
        );
        exit(1);
    }

    FILE *origem; //Pont arq origem
    FILE *destino;//Pont arq destino
    int c;        //Char buff
    if ((origem=fopen(argv[1], "r")) 
        == NULL){
        printf(
        "Arquivo origem nao pode ser aberto\n"
        );
        exit(1);
    }

    if ((destino=fopen(argv[2], "w"))
        == NULL){
        printf(
        "Arquivo destino n pode ser aberto\n"
        );
        exit(1);
    }
    while((c=fgetc(origem))!=EOF){
        fputc(c,destino);
    }

    fclose(origem);
    fclose(destino);
    return 0 ;
}
