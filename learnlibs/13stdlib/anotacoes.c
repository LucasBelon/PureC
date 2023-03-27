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
     *
     *
     * */


    // Funções de gerenciamento de memória pg356

    // Funções de comunicação com o ambiente
    // hospedeiro


    // Funções de busca e ordenação


    // Funções de aritmética de inteiros


    // Funções de caractere multibyte


    // Funções de strings multibyte




    return 0;
}
