/* Exibindo o conteudo de um arquivo em video.*/


# include <stdio.h>
# include <stdlib.h>


int main(void){
    FILE *e;
    char nome[100];
    int c;

    puts("Arquivo: ");
    gets(nome);

    if ((e=fopen(nome, "r")) == NULL){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }

    while(1){
        c = fgetc(e);
        if (feof(e)) break;
        putchar(c);
    }
    fclose(e);

    return 0 ;
}
