/* Criptografia "Ingênua" dos dados. */

# include <stdio.h>
# include <stdlib.h>


int main(int argc, char *argv[]){
    FILE *e, *s;
    char c;
    if(argc!=3){
    puts("Uso: cript <origem> <destino>\n");
    exit(1);
    }

    if( (e=fopen(argv[1],"rb")) == NULL){
        puts("Arquivo não pôde ser aberto\n");
        exit(1);
    }

    if( (s=fopen(argv[2],"wb")) == NULL){
        puts("Arquivo não pôde ser escrito\n");
        exit(1);
    }

    while(1){
        c = fgetc(e);
        if (feof(e)) break;
        fputc(~c, s);
    }
    fclose(e);
    fclose(s);
    return 0;
}
