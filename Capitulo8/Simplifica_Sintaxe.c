/* Exibindo o conteudo de um arquivo em video.*/


# include <stdio.h>
# include <stdlib.h>

void Abre_Fecha(void (*funcao)(int, FILE*))
{
    FILE *e;
    char nome[100];
    int c;

    printf("Arquivo: ");
    gets(nome);

    if ((e=fopen(nome, "r")) == NULL){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }
    funcao(c, e );
    fclose(e);
}

void func(int c, FILE *e)
{
    while(1){
        c = fgetc(e);
        if (feof(e)) break;
        putchar(c);
    }
}
int main(void){
    Abre_Fecha(func);
    return 0 ;
}
