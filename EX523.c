/* Crie um programa que inicializa e exibe
 * uma matriz representando um tabuleiro 
 * para o jogo da velha conforme a seguir
 *
 *    | o | x 
 * ---+---+---
 *  o | x | o
 * ---+---+---
 *  x |   |  
 *
 *  */


# include <stdio.h>

int main(void){
    const char Velha[5][12] = {
        {' ',' ',' ','|',' ','o',' ','|',' ','x',' ','\0'},
        {'-','-','-','+','-','-','-','+','-','-','-','\0'},
        {' ','o',' ','|',' ','x',' ','|',' ','o',' ','\0'},
        {'-','-','-','+','-','-','-','+','-','-','-','\0'},
        {' ','x',' ','|',' ',' ',' ','|',' ',' ',' ','\0'}
    };
    for(int i=0; i<5;++i){
        printf("%s\n",Velha[i]);
    }
    return 0 ;
}
