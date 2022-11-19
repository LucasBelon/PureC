/* Criando uma matriz de caracteres.*/


# include <stdio.h>

void mostra_Sequencial(char (*matcar)[8])
{
    char* v = &matcar[0][0]; // Vetor aponta para primeiro item de matcar
    // Imprimindo matcar elemento por elemento.
    // o caractere '\0' foi substituido por '+' para
    // podermos visualizar os bytes desperdiçados
    for (int i=0; i<24; ++i) {
        if (*(v+i)=='\0') putchar('+');
        else printf("%c", *(v+i));}    
}


int main(void){
    static char matcar[3][8] = {"Azul","Verde","Amarelo"};
    mostra_Sequencial(matcar);
    return 0 ;
}


/* Espaço alocado na matriz (ver proximo exemplo):
 *
 *    0   1   2   3   4   5   6   7
 *  +---+---+---+---+---+---+---+---+
 * 0| a | z | u | l | \0|   |   |   |
 *  +---+---+---+---+---+---+---+---+
 * 1| v | e | r | d | e | \0|   |   |
 *  +---+---+---+---+---+---+---+---+
 * 2| a | m | a | r | e | l | o | \0|
 *  +---+---+---+---+---+---+---+---+
 *
 *  Vemos claramente que existe o desperdicio de 5 bytes
 *  (por termos caracteres de tamanho char).
 *  Os elementos sao inicializados sequencialmente, 
 *  O programa acima exibe essa visualizacao sequencial.
 *  Tambem mostra a existencia de outros caracteres '\0'
 *  onde, na matriz, nada esta definido.
 * */
