/* Codifique um programa para criar uma 
 * variável de tipo anônimo, capaz de 
 * armazenar o título, o autor, a editora 
 * e o ano de publicação de um livro; 
 * atribuir valores aos seus campos e 
 * exibi-la no vídeo.*/


# include <stdio.h>

int main(void){
    struct {
        char titulo[100];
        char autor[50];
        char editora[25];
        int ano;
    } INFO;
    return 0 ;
}
