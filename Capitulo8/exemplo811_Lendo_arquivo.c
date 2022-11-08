/* */

# include <stdio.h>
# include <stdlib.h>

int main(void){
    FILE *e;
    char nome[100];
    int c;
    puts("Nome do arquivo: \n");
    scanf("%s",nome);
    if ((e=fopen(nome,"r"))==NULL){
        puts("Arquivo não pôde ser aberto\n");
        exit(1);
    }
    while(1){
        c = fgetc(e);
        if (feof(e)) break;
        putchar(c);
    }
    fclose(e);
    return 0;
}
