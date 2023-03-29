/* Arquivo de anotações sobre stdlib.h*/

#include <stdint.h>
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
     * mais de uma chamada a exit é registrada,
     * seu comportamento é indeterminado.
     * Ao final, o controle é devolvido para o 
     * sistema. O sistema receberá o código de 
     * finalização do programa, EXIT_SUCCESS ou
     * EXIT_FAILURE. 
     * Esta função não consegue retornar a quem a
     * chamou
     * */


    /* char* getenv(const char *name)
     *
     * Procura uma "lista do ambiente", atrás de
     * uma sublista que combine com name.
     * Retorna uma string que combina com name,
     * a qual não deve ser alterada.
     * Importante testar mais tarde.
     * */


    // Funções de busca e ordenação pg 358

    /* void *bsearch(
     * const void *key,
     * const void *base,
     * size_t nmemb,
     * size_t size,
     * int (*comparator)(
     *          const void *,
     *          const void * )
     *  )
     * 
     * Algoritmo de busca binária, podendo 
     * receber qualquer tipo de comparador para
     * compor a função.
     * Busca qualquer array de nmemb elementos,
     * com o primeiro elemento apontado por base
     * buscando um objeto apontado por key. O 
     * tamanho de cada elemento da array é size.
     * A função de comparação receberá key e base
     * nesta ordem.
     * Retorna um ponteiro para o elemento
     * encontrado na array, ou, um ponteiro nulo.
     * Não é especificado qual elemento será
     * devolvido caso seja encontrado mais de um.
     */


    /*void qsort(
     * void *base,
     * size_t nmemb,
     * size_t size,
     * int (*comparator)(
     *          const void *,
     *          const void * )
     *  )
     * Ordena qualquer array de nmemb elementos,
     * ascendente a depender da funçâo comparação
     * O tamanho dos elementos da array é size.
     * A função de comparação receberá dois
     * objetos a serem comparados, e a função
     * deve retornar menor que zero, igual a zero
     * ou maior que zero para, respectivamente, 
     * que qsort saiba que o primeiro elemento é
     * menor, igual ou maior do que o segundo.
     * Não retorna.
     * Rever anotações de C.
     */


    // Funções de aritmética de inteiros pg 359

    /* int abs(int j)
     *
     * Computa o valor absolutode j. Se não for 
     * aplicável, o resultado é indefinido.
     * Exemplo: abs(INT32_MIN), pois intmin é 
     * maior em magnitude do que INT32_MAX por 1
     * */

    /* Exemplo:
    printf("  Mínimo:%d\n\
          \r  Máximo: %d\n\
          \rabs(min): %d\n",
                 INT32_MIN,
                 INT32_MAX,
            abs(INT32_MAX)
            );
    */


    /* div_t div(int numerator, int denominator) 
     *
     * Computa o quociente e resto de uma
     * divisão entre numerator e denominator.
     * Se a divisão é inexata, o quociente
     * resultante é um inteiro de menor magnitude
     * do que o quociente algébrico mais próximo.
     * Se o resultado não puder ser representado,
     * o comportamento é indefinido. Se tudo
     * estiver certo, quo*denom+resto = numero
     * original.
     * A função retorna uma estrutura que
     * comprime ambos o quociente e o resto. A
     * estrutura deve ser semelhante a:
     * struct div_t {
     *      int quociente;
     *      int resto;
     * }
     * Em qualquer ordem.
     */


    /* long int labs(long int j)
     *
     * labs é similar a abs, exceto que retorna
     * long int.
     * */


    /* ldiv_t ldiv(long int numer,
     * long int denom)
     *
     * A função ldiv é semelhante a div, exceto
     * que retorna uma estrutura em que seus
     * membros são long int.
     * */


    // Funções de caractere multibyte pg 360
    // As funções desta biblioteca são afetadas
    // pelo locale.

    /* int mblen(const char *s, size_t n)
     * multibyte lenght
     *
     * Se s não é um ponteiro nulo, a função
     * determina o número de bytes contidos no
     * caractere multibyte apontado por s. 
     * Fora o estado de shift de mbtowc(), esta
     * função é equivalente a
     * mbtowc((wchar_t *) 0, a, n);
     * Se s é um ponteiro nulo, retorna um valor
     * não nulo ou nulo caso o encoding do
     * caractere multibyte tem ou não encodings
     * dependentes de estado. Se s não é um
     * ponteiro nulo, a função retorna 0, se s é
     * um caractere nulo, ou o número de bytes
     * que o caractere possui. Ou retorna -1 para
     * caractere inválido.
     * */


    /* int mbtowc(wchar *pwc, const char *s,
     * size_t n)
     *
     * Se s não é um ponteiro nulo, determina o
     * número de bytes contidos no caractere
     * multibyte s. Então determina o código para
     * o valor de wchar_t correspondente. O
     * código correspondente ao caractere nulo é
     * zero. Se o caractere é válido e pwc não é
     * um ponteiro nulo, mbtowc() armazena o
     * código no objeto apontado por pwc. No
     * máximo n bytes de uma array apontada por s
     * serão examinados.
     * Se s é um ponteiro nulo, retorna um valor
     * não nulo ou nulo caso o encoding do
     * caractere multibyte tem ou não encodings
     * dependentes de estado, respectivamente. Se
     * s não é um ponteiro nulo, a função retorna
     * 0, se s é um caractere nulo, ou o número 
     * de bytes que o caractere possui. Ou 
     * retorna -1 para caractere inválido.
     * NÃO TÔ ENTENDENDO. TÁ DIFÍCIL
     * */


    /* int wctomb(char *s, wchar_t wchar)
     *
     * A função determina o número de bytes
     * necessários para representar um caractere
     * multibyte correspondente ao código cujo
     * valor é wchar (incluindo qualquer
     * alteração no shift state). Armazena a
     * representação do caractere multibyte num
     * objeto do tipo lista, apontado por s, se s
     * não é um ponteiro nulo.
     * No máximo ME_CUR_MAX caracteres são
     * armazenados. Se o valor de wchar é zero,
     * wctomb() é deixado em estado de shift
     * inicial.
     * Se s é um ponteiro nulo, wctom() retorna
     * não nulo ou nulo, caso o encoding do
     * caractere multibyte, seja ou não
     * dependente do estado de encoding,
     * respectivamente. Se s não é um ponteiro
     * nulo, wctomb() retorna -1 caso o valor de
     * wchar não corresponde a um caractere
     * multibyte válido, ou retorna o número de
     * bytes contidos no caractere multibyte
     * correspondente ao valor de wchar
     * Nota: Comecei a entender, mas não comecei
     * a gostar
     * */


    // Funções de strings multibyte pg 361

    /* size_t mbstowcs(wchar_t *pwcs,
     * const char *s,
     * size_t n)
     *
     * Converte uma sequência de caracteres
     * multibyte que começam com o estado de
     * shift inicial a partir da lista apontada
     * por s numa sequência de códigos
     * correspondentes e armazena não mais do que
     * n elementos na array apontada por pwcs.
     * Nenhum caractere multibyte após um
     * caractere nulo será examinado ou
     * convertido. Cada caractere multibyte é
     * convertido como se fosse feita uma chamada
     * a mbtowc(), exceto que o estado de shift
     * de mbtowc() não é afetado.
     * Não mais do que n elementos serão
     * modificados na lista apontada por pwcs. Se
     * a operação de cópia tomar lugar entre
     * objetos que se sobrepôem, o comportamento
     * é indefinido.
     * Se um caractere multibyte é encontrado, a
     * função retorna (size_t)-1. Caso contrário,
     * retorna o número de elementos modificados
     * na lista, sem incluir caracteres
     * terminados em nulo.*/


    /* size_t wcstombs(char *s,
     * const wchar_t *pwcs,
     * size_t n)
     *
     * Converte uma sequência de códigos
     * correspondentes a caracteres multibytes de
     * uma lista apontada por pwcs numa sequência
     * de caracteres multibyte que começam com o
     * estado de shift incial e armazena esses
     * caracteres numa array apontada por s,
     * parando se um caractere exceder o limite
     * de n bytes ou se um caractere nulo é
     * armazenado. Cada caractere é convertido
     * como uma chamada a wctomb(). Não mais do
     * que n bytes serão modificados na lista
     * apontada por s. Se a cópia tomar lugar
     * entre objetos que se sobrepõem, o
     * comportamento é indefinido.
     * Se um caractere encontrado não corresponde
     * a um caractere multibyte válido,
     * wcstombs() retorna (size_t)-1. Se não,
     * wcstombs() retorna o número de bytes
     * modificados, não incluindo os terminados
     * em caractere nulo, se houver.*/

    /* Muito interessante todas as funções, mas
     * as últimas me deixaram confuso. Quanto
     * mais vejo sobre a biblioteca padrão, mais
     * simples fica o restante da linguagem C. É
     * uma experiência no mínimo interessante.*/


    return 0;
}
