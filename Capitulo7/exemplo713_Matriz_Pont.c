/* Criando um vetor de ponteiros*/


# include <stdio.h>

void mostra_Sequencial(char** sequencia)
{
    char* v = &sequencia[0][0]; // Vetor aponta para primeiro item da sequencia
    // Imprimindo sequencia elemento por elemento.
    // o caractere '\0' foi substituido por '+' para
    // podermos visualizar os bytes desperdiçados
    for (int i=0; i<20; ++i) {
        if (*(v+i)=='\0') putchar('+');
        else printf("%c", *(v+i));}    
}
int main(void){
    static char* vetpnt[3] = {"Azul","Verde","Amarelo"};
    mostra_Sequencial(vetpnt);
    return 0 ;
}
/* No caso do vetor de ponteiros, as strings sao
 * armazenados como elementos do vetor. Se as 
 * strings tem tamanhos iguais, ou muito proximo,
 * esse esquema pode consumir mais memoria pois:
 * alem do espaco usado por elas, precisamos tambem
 * do espaco para armazenar seus enderecos.
 *
 * +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+--+
 * | a | z | u | l |\0 | v | e | r | d | e |\0 | a | m | a | r | e | l | o |\0|
 * +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+--+
 * */
