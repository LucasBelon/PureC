/*  Primeiro arquivo de anotações
 *  de arquivo em C.
 *
 *  stdio não apenas fornece uma interface 
 *  para manipular arquivos, como também
 *  fornece a criação e destruição de arquivos
 *  temporários*/

# include <stdio.h>

int main(void){
    /*
    //Testando a remoção de um arquivo teste
    int r = remove("teste");
    printf("%d\n",r);
    // return -1 pra caso o arquivo não
    // exista
    */

    /*
    //Testando renomear
    int r = rename("teste", "renomeado");
    printf("%d\n",r);
    //mesma coisa que remove
    */

    /*
    //Testando tmpfile
    FILE * a = tmpfile();
    fputs("Eu nascí pra codar", a);
    FILE * ptr = fopen("novo", "w");
    char buf[1024];
    fgets(buf, 20, a);
    fputs(buf, ptr);
    fclose(ptr);
    fclose(a);
    //Não consegui usar
    */

    //Como testar o fflush?
    //verificar os vídeos jacob sorber.
    //ele faz uns truques com o printf
    //que é bufferizado, e ele precisa 
    //alterar o comportamento para
    //saídas imediatas.

    /*
    //Testando fopen, fclose e fputs
    FILE * teste = fopen("teste","w");
    fputs("Sou o mestre codador", teste);
    fclose(teste);
    */

    /*
    //Teste freopen
    //Ele redireciona uma variável FILE*
    //para um novo arquivo, fechando
    //a stream anterior no processo.
    FILE * teste = fopen("teste","w");
    fputs("Sou o mestre codador\n", teste);
    freopen("teste2", "w", teste);
    fputs("Sou o mestre codador\n\
            \rNo teste2\n", teste);
    fclose(teste);
    */

    /* Vou anotar mas não testar
     * o funcionamento de setbuf() e
     * setvbuf().
     *
     * setbuf() é para
     * setvbuf() o que printf() é para
     * fprintf().
     * setbuf usa as macros _IOFBUF
     * e _IONBUF (para existencia
     * ou null de buffer) para
     * transferir o controle de buffer
     * para uma variável.*/

    /*
    //fprintf(FILE *, const char *, ...)
    FILE * teste = fopen("teste","w");
    fputs("Sou o mestre codador\n", teste);
    fprintf(teste, "Sou o mestre codador\n");
    fclose(teste);
    */

    /*
//fscanf(FILE *restrict,const char *restrict,...)
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

    /* Existe uma forma de enviar pra arrays
     * enquanto nos utilizamos do printf.
    //sprintf(char *, const char *, ...)
    Copiamos pra char *, formatando const char *
    usando os dados de ...
     * 
     * E é óbvio que tem um equivalente pra scanf
//sscanf(const char *restrict, const char *restrict, ...)
    */

    /* Temos como usar uma versão de fprintf
     * que aceita va_args. Isso pode ser útil
     * para compor funções complexas de escrita
     * em arquivo.
    //vfprintf(FILE *, 
    //const char *, 
    //__builtin_va_list)
     * Tem um equivalente pra vfscanf
    //vfscanf(FILE *restrict, 
    //const char *restrict, 
    //__builtin_va_list)
    * e o mesmo vale pra vprintf e vscanf.*/

    // Funções para IO de caracteres:   pg263
    // fgetc, fgets, fputc, fputs, getc, gets,
    // putc, puts, putchar, getchar, ungetc
    //
    /* int fgetc(FILE *fp);
     * fgetc pega o próximo caractere de uma
     * stream de dados. Parece simples, mas
     * ela também altera a posição do índice
     * do arquivo.
     * "Obtém o próximo uchar, convertido como
     * int, e avança o indicador de posição
     * associado."
     * 
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
     * int fputc(int ch, FILE *fp);
     * Escreve ch na stream, ch é convertido para
     * uchar. Retorna o caractere que foi escrito
     * se bem sucedido, se erro, retorna EOF.
     *
     * int fputs(const char *s, FILE *fp);
     * Escreve uma string apontada por s na
     * stream. O caractere nulo não é escrito.
     * Retorna EOF caso erro, senão retorna um
     * valor não negativo.
     *
     * getc(FILE *fp)
     * Equivalente a fgetc, mas implementado
     * como uma macro.
     * Continuar com essas 5 funções abaixo.*/
    // putc, puts, putchar, getchar, ungetc

    // Funções para IO direto:   pg266
    // fread, fwrite

    // Funções de posicionamento em arquivo:   pg 267
    // fgetpos, fseek, fsetpos, ftell, rewind
    
    // Manuseio de erros:   pg 268
    // clearerr, feof, perror

}
