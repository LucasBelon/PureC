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

    /* continuar em fprintf*/

    
    return 0;
}
