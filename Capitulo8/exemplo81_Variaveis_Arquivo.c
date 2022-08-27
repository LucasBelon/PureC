/* Criando variaveis de arquivo. 
 * Para usar um arquivo, precisamos criar um
 * ponteiro do tipo FILE. Esse tipo definido em 
 * stdio.h eh uma estrutura contendo, entre outras
 * coisas, um ponteiro para o buffer e um ponteiro
 * para a posicao corrente dentro dele.
 *
 * O esquema de entrada bufferizada existe para que
 * sejam requisitados menos acessos ao disco para
 * ganho de velocidade.
 *
 * +-------+    +--------+    +-----+
 * |Teclado| -> |Programa| -> |Video|
 * +-------+    +--------+    +-----+
 *                  |^
 *                  v|
 *               +------+
 *               |Buffer|
 *               +------+
 *                  |^
 *                  v|
 *                +-----+
 *                |Disco|
 *                +-----+
 *                  */

# include <stdio.h>

FILE *arq, *entrada, *saida;

int main(void){

    return 0 ;
}
