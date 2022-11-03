/* Exercício 8.1. Mostre como o programa 
 * cat pode ser usado para: 
 * a) imprimir um arquivo de texto na 
 * impressora. 
 * b) fazer uma cópia de um arquivo de 
 * texto.*/

# include <stdio.h>
# include <stdlib.h>

int main(void){
    fprintf(stdout,
        "Texto enviado para stdout\n");
    system("cat Exemplo.txt > copia.txt");
    return 0;
}
