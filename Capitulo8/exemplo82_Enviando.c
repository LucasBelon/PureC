/* Enviando dados a impressora.
 *
 * Existem alguns arquivos padrão para 
 * entrada e saida de dados
 * +-----------------------------------------------+
 * |Ponteiro|Finalidade     |Dispositivo   |Arquivo|
 * |stdin   |entrada padrão |teclado       |con    |
 * |stdout  |saída padrão   |vídeo         |con    |
 * |stderr  |padrão de erros|vídeo         |−      |
 * |stdaux  |auxiliar       |porta serial  |aux    |
 * |stdprn  |impressora     |porta paralela|prn    |
 * +-----------------------------------------------+
 *
 * A função fprintf() recebe, além de um const char*, 
 * um ponteiro para um dos arquivos de I/O padrão.
 * Temos o mesmo para fscanf().
 * */


# include <stdio.h>

int main(void){
    fprintf(stdout, "1, 2, 3, testando...\n");
    
    return 0 ;
}
