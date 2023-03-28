/* Arquivo de anotações sobre stdlib.h*/

# include <stdio.h>
# include <stdlib.h>

// Página 352

int main(void){
    // Funções de conversão de Strings

    /* double atof(const char *nptr)
     *
     * Converte a porção inicial da string s em 
     * double. Exceto para * casos de erro, é 
     * equivalente a:
     *
     * strtod(nptr, (char **) NULL)
     *
     * Retorna o valor convertido.
     * */


    /* int atoi(const char *nptr) 
     *
     * Converte a porção inicial da string nptr 
     * para inteiro. Salvo a ocorrência de erros,
     * é equivalente a
     *
     * (int) strtol(nptr, (char **) NULL, 10)
     *
     * Retorna o valor convertido
     * */


    /* long int atol(const char *s) 
     *
     * Converte a porção inicial da string nptr 
     * para long. Salvo a ocorrência de erros,
     * é equivalente a
     *
     * strtol(nptr, (char **) NULL, 10)
     * 
     * Retorna o valor convertido.
     * */


    /* double strtod(const char *nptr,
     * char **endptr) 
     * 
     * Converte a porção inicial da string nptr 
     * em double. Seu funcionamento se dá 
     * decompondo o alvo em 3, uma porção inicial
     * possivelmente com caracteres isspace, uma
     * porção semelhante à um float, e uma 
     * sequência de caracteres não reconhecidos.
     * O formato esperado para conversão ótima é
     * um sinal, uma sequência não vazia de
     * caracteres que eventualmente contenham um
     * ponto (flutuante), então, opcionalmente,
     * uma sequência indicativa de potência.
     *
     * Retorna o valor convertido. Se a conversão
     * falhar, zero é retornado. Para todos os 
     * efeitos, a string é armazebada em endptr.
     *
     *
     * */


    /* long int strtol(
     * const char *nptr,
     * char **endptr,
     * int base) 
     *
     * Converte a porção inicial para long int.
     * Seu funcionamento se dá 
     * decompondo o alvo em 3, uma porção inicial
     * possivelmente com caracteres isspace, uma
     * porção representando um inteiro por meio 
     * de um radix numa determinada base, e uma 
     * sequência de caracteres não reconhecidos.
     * Esse negócio da base me confundiu. Ver 
     * exemplos mais tarde
     * Retorna o valor convertido. Se der out of
     * range, ele dá erro, igual outras funções 
     * acima
     * */


    /* unsigned long int strtoul(
     * const char *,
     * char **,
     * int) 
     *
     * Mesma coisa que strtol, mas unsigned.
     * */


    // Funções de geradores de sequências
    // pseudo-aleatórias.


    /* int rand(void) 
     *
     * Computa uma sequência de números 
     * pseudo-aleatórios, de 0 a RAND_MAX.
     * Retorma um inteiro pseudo-randômico.
     * */


    /* void srand(unsigned int seed)
     *
     * Usa seu argumento para calcular uma nova
     * sequência de números pseudo-aleatórios
     * para chamadas subsequentes a rand().
     * Não retorna.
     * */


    // Funções de gerenciamento de memória pg356

    /* void *calloc(size_t nmemb, size_t size)
     *
     * Aloca espaço para uma array com nmemb 
     * membros em que cada termo possui size de 
     * tamanho.  O espaço é inicializado com 
     * todos os bytes zero.
     * Retorna um ponteiro nulo ou um ponteiro 
     * para o espaço alocado.
     * */


    /* void free(void *ptr)
     *
     * Desaloca o espaço apontado por ptr. Se ptr
     * é nulo, nada acontece. Se o espaço não
     * tiver sido alocado por malloc, calloc, ou
     * realloc, ou se já tiver sido liberado por 
     * free ou realloc, o comportamento é 
     * indefinido.
     * Não retorna.
     * */


    /* void *malloc(size_t size)
     *
     * Aloca espaço para uma array com nmemb 
     * membros em que cada termo possui size de 
     * tamanho.  O espaço é inicializado sem 
     * alterações prévias na memória.
     * Retorna um ponteiro nulo ou um ponteiro 
     * para o espaço alocado.
     * */


    /* void *realloc(void *ptr, size_t size)
     *
     * Altera o tamanho do objeto apontado por
     * ptr para o tamanho especificado por size.
     * Comportamento semelhante a malloc, não
     * alterando o conteúdo da memória
     * previamente existente. Se o espaço não
     * tiver sido alocado por malloc, calloc, ou
     * realloc, ou se já tiver sido liberado por 
     * free ou realloc, o comportamento é 
     * indefinido.
     * Retorna ponteiro nulo ou um ponteiro para
     * o espaço potencialmente movido. 
     * */
 

    // Funções de comunicação com o ambiente
    // hospedeiro pg 357

    /* void abort(void)
     *
     * A função causa a finalização anormal do
     * programa, a não ser que, recebido o sinal
     * SIGABRT, não haja retorno do programa.
     * O comportamento de se descarregar o buffer
     * fechar streams de arquivos, e apagar 
     * arquivos temporários é dependente da
     * implementação. É retornado para o sistema
     * um sinal para Encerramento MalvSucedido, 
     * por meio da chamada a raise(SIGABRT)
     * Essa função não tem a chance de retornar
     * para quem a chama.
     * */


    /* int atexit( void (*func)(void) )
     *
     * Registra a função argumento para ser
     * chamada no encerramento normal do programa
     * Retorna 0 se bem sucedido
     * */


    /* void exit(int status)
     *
     * causa a finalização normal do programa. Se
     * mais de uma chamada a exit é registrada
     * CONTINUAR AQUI --------------------------
     * */


    // Funções de busca e ordenação


    // Funções de aritmética de inteiros


    // Funções de caractere multibyte


    // Funções de strings multibyte




    return 0;
}
