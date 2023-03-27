/*Continuação*/
# include <stdio.h>
#include <stdlib.h>

int main(void){
    /* Funções para IO de caracteres:   pg263 */

    /* int fgetc(FILE *fp);
     *
     * fgetc pega o próximo caractere de uma
     * stream de dados. Parece simples, mas
     * ela também altera a posição do índice
     * do arquivo.
     * "Obtém o próximo uchar, convertido como
     * int, e avança o indicador de posição
     * associado."
     * Retorna o proximo caractere do input
     * stream.
     * Se der erro retorna EOF.
     * Qual o retorno? Adicionar o tipo de 
     * retorno
     * em todas as funções subsequentes.
     */


    /* char * fgets(char *buf, 
     * int size, 
     * FILE *fp);
     *
     * Esse pega uma quantidade de caracteres
     * e armazena num buffer, um array de chars.
     * Parece que esse não converte chars em ints
     * Ele para de armazenar em \n ou EOF. 
     * O caractere nulo é adicionado 
     * automaticamente no fim da array.
     * Se ler algo vazio, retorna ponteiro nulo.
     */


    /* int fputc(int ch, FILE *fp);
     *
     * Escreve ch na stream, ch é convertido para
     * uchar. Retorna o caractere que foi escrito
     * se bem sucedido, se erro, retorna EOF.
     */


    /* int fputs(const char *s, FILE *fp);
     *
     * Escreve uma string apontada por s na
     * stream. O caractere nulo não é escrito.
     * Retorna EOF caso erro, senão retorna um
     * valor não negativo.
     */


    /* int getc(FILE *fp);
     *
     * Equivalente a fgetc, mas implementado
     * como uma macro.
     */


    /* int getchar(void);
     *
     * Equivalente ao getc, com o 
     * argumento stdin embutido.
     * Retorna o próximo caractere da stream 
     * apontada por stdin. Se a stream está no 
     * EOF, getchar retorna EOF. Se um erro de 
     * leitura ocorre, o indicador de erro é 
     * configurado e getchar retorna EOF.
     *
     */


    /* gets não existe mais */

    /* int putc(int ch, FILE *fp);
     *
     * Equivalente a fputc, mas implementado como
     * macro.
     * Retorna o caractere escrito. Se houver
     * erro, retorna EOF.
     */


    /* int putchar(int ch);
     *
     * Equivalente a putc, mas com o argumento
     * stdout embutido.
     * Retorna o caractere escrito. Se houver
     * erro, retorna EOF.
     */


    /* int puts(const char *s);
     *
     * Escreve a string apontada por s para o
     * stdout e adiciona o caractere \n ao 
     * término da operação. O caractere \0 não é
     * escrito.
     * Retorna EOF em erro. Se não, um valor
     * não negativo.
     */


    /* int ungetc(int ch, FILE *fp);
     *
     * Devolve um caractere, e apenas um 
     * caractere, à stream. Leituras subsequentes
     * poderão obter esse caractere. Uma chamada
     * à qualquer função de posição de arquivo
     * descarta o caractere.
     * Se forem devolvidos caracteres demais, a 
     * operação pode terminar em erro.
     * */


    // Funções para IO direto:   pg266
    /* size_t fread(void *ptr, 
     * unsigned long size, 
     * unsigned long nmemb, 
     * FILE *stream)
     * Lê até nmemb itens de size de tamanho,
     * para o ponteiro apontado por ptr, a 
     * partir da stream. O indicador de 
     * posição do arquivo, se definido, avança
     * o número de caracteres lidos com sucesso.
     * Erros são indeterminados.
     * Retorna o número de elementos lidos 
     * com sucesso.
     * */

    //testando fread
    /*
    struct le_dez_chars {
        char array[10];
    };

    struct le_dez_chars *espaco = 
        malloc(sizeof(struct le_dez_chars));

    FILE *File = fopen("teste.txt", "rb");
    int leu = 
        fread(espaco->array, 
                sizeof(struct le_dez_chars),
                2, 
                File);

    printf("Leu: %d\n\
        \rconteúdo:\n%s\n", leu, espaco->array);
    */

    /* size_t fwrite(void *ptr, 
     * unsigned long size, 
     * unsigned long nmemb, 
     * FILE *stream)
     * Escreve até nmemb itens de size de tamanho, do
     * ponteiro apontado por ptr, para a stream.
     * O indicador de posição do arquivo, se definido,
     * avança o número de caracteres escritos com sucesso.
     * Erros são indeterminados.
     * Retorna o número de elementos escritos com sucesso.
     *
     * */

    /*
    typedef struct {
        char *letra;
        int idade;
        long teste1;
        short teste2;
    } ESTRUTURA;
    // Só pra lembrar, essa é uma estrutura nomeada mas não
    //  rotulada. O rótulo permite a criação, dentro da
    //  estrutura, de um ponteiro que aponta para ela mesma.
    //  Uma forma de recursividade.
    //  O nome permite criar uma espécie de novo tipo,
    //  como abaixo.

    ESTRUTURA * espaco = 
        malloc(sizeof(ESTRUTURA));
    char lucas[] = "lucas\n";
    espaco->letra = lucas;
    espaco->idade = 24;
    espaco->teste1= 7483828;
    espaco->teste2 = 27452;

    
    FILE *File = fopen("teste.txt", "ab");
    int escreveu = 
        fwrite(espaco, 
                sizeof(ESTRUTURA),
                1, 
                File);

    printf("ESCREVEU: %d\n\
        \rconteúdo:\n%s%d%ld%hd\n", 
        escreveu,
        espaco->letra,
        espaco->idade,
        espaco->teste1,
        espaco->teste2);
    */

    /* Com essas funções eu consigo gravar dados
     * diretamente no formato da minha estrutura.
     * Gravar números em binário, quando possível,
     * é sempre melhor. Agiliza a leitura, não precisa
     * converter e pode ser assimilado à uma estrutura.
     * */


    // Funções de posicionamento em arquivo:   pg 267
    // fgetpos, fseek, fsetpos, ftell, rewind

    /* int fgetpos(FILE *fp, fpos_t *pos)
     *
     * Armazena a posição contida na stream
     * fp, na variável pos. A variável pos 
     * armazena informações úteis para o uso
     * da função fsetpos().
     * Retorna zero se bem sucedido. Retorna
     * um valor não nulo e inclui o erro em
     * errno. 
     * */


    // "whence" == "de onde"
    /* int fseek(FILE *fp,
     * long offset,
     * int whence)
     *
     * Altera o indicador de posição da stream
     * apontada por fp.
     * Para streams binárias, a nova posição é 
     * obtida somando offset a partir da
     * posição indicada por whence.
     * Se whence é definido por
     * SEEK_SET, SEEK_CUR ou SEEK_END, o
     * offset será dado a partir do início do
     * arquivo, a partir da posição atual, ou
     * a partir do fim do arquivo, 
     * respectivamente.
     * Uma chamada bem sucedida à fseek limpa o
     * indicador eof para a stream e desfaz 
     * quaisquer dos efeitos de ungetc para a
     * stream em questão.
     * Retorna zero para bem sucedido. Retorna
     * não nulo para erro.
     * PRECISO MUITO TESTAR. MELHOR APRENDER
     * TODAS AS MOVIMENTAÇÕES ANTES*/


    /* int fsetpos(FILE *fp, const fpos_t *pos)
     *
     * Configura o indicador de posição da stream
     * apontada por fp, a partir de pos, que deve
     * antes ser obtido por fgetpos().
     * Retorna zero no sucesso. Retorna não nulo
     * caso de falha e indica erro em errno.
     * */

    /* Posso gravar uma posição específica
     * com fgetpos(), e então retornar à essa
     * posição com fsetpos(). A função fseek()
     * dá mais liberdade de movimento, mas é
     * também mais complicada de se usar.*/


    /* long int ftell(FILE *fp) 
     *
     * Ftell obtém a posição atual da stream
     * apontada por fp. Para uma stream binária,
     * são os bytes a partir do início. Para uma
     * stream de texto, não necessariamente será
     * o número de bytes. Pode ser usado por
     * fseek para retornar o indice de posição
     * para um local desejado.
     * Retorna o valor da posição atual na stream
     * se bem sucedido. No erro retorna -1L e 
     * um valor positivo em errno.
     * */


    /* void rewind(FILE *fp) 
     *
     * Retorna o indicador de posição da stream
     * para o começo do arquivo. É equivalente a
     * (void) fseek(stream, 0L, SEEK_SET). 
     * Não retorna valores.
     * */


    // Manuseio de erros:   pg 268
    // clearerr, feof, perror

    /* void clearerr(FILE *fp) 
     * 
     * Limpa o eof e indicador de erro da stream
     * Não retorna.
     * */


    /* int feof(FILE *fp)
     *
     * Testa o indicador de fim de arquivo na
     * stream fp. 
     * Retorna zero se, e somente se, eof foi
     * definido na stream.
     * */


    /* int ferror(FILE *fp) 
     *
     * Testa indicador de erros na stream.
     * Retorna não nulo se o indicado for 
     * definido para a stream*/


    /* void perror(const char *msg)
     *
     * Mapeia uma mensagem de erro para um
     * dado código de erro em errno. Também
     * imprime uma mensagem de erro para a 
     * saída de erros padrão. */
}
