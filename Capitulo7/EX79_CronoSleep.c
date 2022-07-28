/* Usando a funcao sleep, codifique um programa que
 * mostra uma contagem regressiva em segundos.*/


# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[]){
    int tempo = atoi(argv[1]);
    while(tempo--) {
        printf("%d\n",tempo+1);
        sleep(1);
    }


    return 0 ;
}
