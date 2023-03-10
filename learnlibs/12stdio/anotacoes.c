/*  Stdio não apenas fornece uma interface 
 *  para manipular arquivos, como também
 *  fornece a criação e destruição de arquivos
 *  temporários*/

# include <stdio.h>

int main(void){
    /* Funções de operação em arquivos.*/

    /* int remove(const char *path);
     * Remove o arquivo de nome apontado por path
     * Retorna -1 pra caso o arquivo não
     * exista. Se bem sucedido, retorna 0.
     *
    //Testando a remoção de um arquivo teste
    int r = remove("teste");
    printf("%d\n",r);
    */


    /* int rename(const char *old_path,
     * const char *new_path);
     * Renomeia o arquivo apontado por old_path
     * para o novo nome new_path.
     * Retorna -1 para inválido. Retorna 0 para
     * bem sucedido.
     *
    //Testando renomear
    int r = rename("teste", "renomeado");
    printf("%d\n",r);
    */


    /* FILE * tmpfile(void);
     * Cria um arquivo temporário (e de quebra 
     * não é um arquivo visível), e armazena numa
     * stream.
     * Retorna o ponteiro para a stream se bem
     * sucedido, caso contrário retorna um
     * ponteiro nulo.
     *
    //Testando tmpfile
    FILE * a = tmpfile();
    fputs("Eu nascí pra codar", a);
    FILE * ptr = fopen("novo", "w");
    char buf[1024];
    fgets(buf, 20, a);
    fputs(buf, ptr);
    fclose(ptr);
    fclose(a);
    */


    /* char * tmpnam(char *s) não existe mais*/


    /* int fclose(FILE *stream);
     * Se existe algo no buffer de gravação, 
     * força o flush do buffer, se não, pula pro
     * próximo passo. Descarta o buffer de
     * leitura, se houver. Fecha a stream 
     * associada ao arquivo.
     * Retorna 0 se bem sucedido, EOF se erros
     * forem detectados.
     *
     * Teste junto de fopen e fprintf.
     */


    /* int fflush(FILE *stream);
     * Esvazia forçadamente o buffer, seja 
     * descartando o conteúdo do buffer de
     * leitura, seja gravando o buffer de 
     * gravação. Se stream == NULL, a ação
     * é executada para todas as streams.
     * Retorna 0 se bem sucedido, EOF se erros 
     * forem detectados
     *
    //Como testar o fflush?
    //verificar os vídeos jacob sorber.
    //ele faz uns truques com o printf
    //que é bufferizado, e ele precisa 
    //alterar o comportamento para
    //saídas imediatas.
    */


    /* FILE * fopen(const char *filename,
     * const char *mode);
     * Função que abre a stream e associa a um
     * arquivo se existente. Detalhes em 
     * anotações.txt
     * Retorna o ponteiro de controle da stream 
     * se bem sucedido. Caso contrário, retorna
     * um ponteiro null.
     *
     * Teste junto de fclose e fprintf.
     */


    /* FILE * freopen(const char * filename,
     * const char * mode,
     * FILE * stream);
     * Ele redireciona uma variável FILE*
     * para um novo arquivo, fechando
     * a stream anterior no processo.
     *
     * freopen me permite usar um mesmo
     * FILE * para manipular diferentes
     * arquivos. Uma economia de memória é
     * sempre bem vinda.
     *
     * Retorna o ponteiro de controle da stream 
     * se bem sucedido. Caso contrário, retorna
     * um ponteiro null.
     *
    // Teste freopen 
    FILE * teste = fopen("teste","w");
    freopen("teste2", "w", teste);
    fclose(teste);
    printf("teste = %p\n", teste);
    free(teste);
    printf("teste = %p\n", teste);
    */


    /* Vou anotar mas não testar
     * o funcionamento de setbuf() e
     * setvbuf().
     *
     * void setbuf(FILE * stream, char *buf);
     * Não retorna.
     *
     * int setvbuf(FILE * stream,
     * char *buf,
     * int mode,
     * size_t size);
     * Retorna zero no sucesso, não zero na falha
     *
     * setbuf() é para
     * setvbuf() o que printf() é para
     * fprintf().
     * setbuf usa as macros _IOFBUF
     * e _IONBUF (para existencia
     * ou null de buffer) para
     * transferir o controle de buffer
     * para uma variável. */


    /* Formatted input/output functions */

    /* int fprintf(FILE *ptr, const char *s, ...)
     * Insere a string s, formatada, na 
     * stream ptr. 
     * Mais detalhes em anotacoes.txt
     * Retorna o número de caracteres 
     * transmitidos. Se falha, um número negativo.
     *
    // Teste fprintf.
    FILE * teste = fopen("teste","w");
    fputs("Sou o mestre codador\n", teste);
    fprintf(teste, "Sou o mestre codador\n");
    fclose(teste);
    free(teste);
    // Testando fopen, fclose e fputs
    FILE * teste = fopen("teste","w");
    char * string = "codador\n";
    fprintf(teste, "Sou o mestre %s", string);
    fclose(teste);
    free string;
    */


    /* int fscanf(FILE *stream, 
     * const char *format, 
     * &var1, &var2, ...);
     * Lê a partir de stream, restringindo com 
     * format, e armazena em var's.
     * Mais informações em anotacoes.txt
     * Retorna EOF se falha. Retorna número de
     * inputs bem sucedidos se bem sucedido.
     *
    // Teste fscanf
    FILE * teste = fopen("teste","r");
    char eba[BUFSIZ];
    fscanf(teste,
    "%25[a-z A-Z\n a-z A-Z\n]",
    eba);
    printf("%s\nNo EBA", eba);
    printf("BUFSIZ=%d\n ",BUFSIZ);
    return 0;
    */
    

    //printf(const char *fmt, ...)
    //Eu não preciso anotar sobre esse.
    //scanf(const char *fmt, ...)
    //Esse também é velho conhecido.


    /* int sprintf(char *s,
     * const char *r,
     * var1, var2, ...);
     * Existe uma forma de enviar pra char *
     * ao invés do stdout com sprintf.
     * Copiamos pra char *s, formatando pelas 
     * restrições de const char *r, usando os 
     * dados de var's
     * Retorna o número de inputs se bem sucedido
     * Retorna EOF se falha.
     * 
     * Não vou testar. */


    /* int sscanf(const char * s, 
     * const char * format, 
     * &var1, &var2, ...);
     * Mesmas considerações que sprintf.
     * Retorna o número de itens adicionados a 
     * variáveis se bem sucedido.
     * Retorna EOF se falha.
     *
     * Não vou testar. */


    /* Temos como usar uma versão de fprintf
     * que aceita va_args. Isso pode ser útil
     * para compor funções complexas de escrita
     * em arquivo.
     * int vfprintf(FILE *, 
     * const char *, 
     * __builtin_va_list);
     *
     * Não vou testar. */


    /* Tem um equivalente pra vfscanf
     * vfscanf(FILE *restrict, 
     * const char *restrict, 
     * __builtin_va_list);
     *
     * E o mesmo vale pra vprintf e vscanf.*/
    
    //---------------------------------------------------------------------------------

    /* Funções para IO de caracteres:   pg263 */

    /* int fgetc(FILE *fp);
     * fgetc pega o próximo caractere de uma
     * stream de dados. Parece simples, mas
     * ela também altera a posição do índice
     * do arquivo.
     * "Obtém o próximo uchar, convertido como
     * int, e avança o indicador de posição
     * associado."
     * Qual o retorno? Adicionar o tipo de retorno
     * em todas as funções subsequentes.
     *
     */

    //---------------------------------------------------------------------------------

    /* 
     * char * fgets(char *buf, 
     * int size, 
     * FILE *fp);
     * Esse pega uma quantidade de caracteres
     * e armazena num buffer, um array de chars.
     * Parece que esse não converte chars em ints
     * Ele para de armazenar em \n ou EOF. 
     * O caractere nulo é adicionado 
     * automaticamente no fim da array.
     * Se ler algo vazio, retorna ponteiro nulo.
     * 
     */


    /* int fputc(int ch, FILE *fp);
     * Escreve ch na stream, ch é convertido para
     * uchar. Retorna o caractere que foi escrito
     * se bem sucedido, se erro, retorna EOF.
     *
     */


    /* int fputs(const char *s, FILE *fp);
     * Escreve uma string apontada por s na
     * stream. O caractere nulo não é escrito.
     * Retorna EOF caso erro, senão retorna um
     * valor não negativo.
     *
     */


    /* int getc(FILE *fp);
     * Equivalente a fgetc, mas implementado
     * como uma macro.
     *
     */


    /* int getchar(void);
     * equivalente ao getc, com o 
     * argumento stdin embutido.
     * Retorna o próximo caractere da stream 
     * apontada por stdin. Se a stream está no 
     * EOF, getchar retorna EOF. Se um erro de 
     * leitura ocorre, o indicador de erro é 
     * configurado e getchar retorna EOF.
     *
     */


    /* gets não existe mais
     *
     * int putc(int ch, FILE *fp);
     * Equivalente a fputc, mas implementado como
     * macro.
     * Retorna o caractere escrito. Se houver
     * erro, retorna EOF.
     *
     */


    /* int putchar(int ch);
     * Equivalente a putc, mas com o argumento
     * stdout embutido.
     * Retorna o caractere escrito. Se houver
     * erro, retorna EOF.
     *
     */


    /* int puts(const char *s);
     * Escreve a string apontada por s para o
     * stdout e adiciona o caractere \n ao 
     * término da operação. O caractere \0 não é
     * escrito.
     * Retorna EOF em erro. Se não, um valor
     * não negativo.
     *
     */


    /* int ungetc(int ch, FILE *fp);
     * Devolve um caractere, e apenas um 
     * caractere, à stream. Leituras subsequentes
     * poderão obter esse caractere. Uma chamada
     * à qualquer função de posição de arquivo
     * descarta o caractere.
     * Se forem devolvidos caracteres demais, a 
     * operação pode terminar em erro.
     * */




    /* Me pergunto se não vale a pena separar
     * esse arquivo em vários. Já temos 360 linhas
     * */

    // Funções para IO direto:   pg266
    // fread, fwrite

    // Funções de posicionamento em arquivo:   pg 267
    // fgetpos, fseek, fsetpos, ftell, rewind
    
    // Manuseio de erros:   pg 268
    // clearerr, feof, perror
}
