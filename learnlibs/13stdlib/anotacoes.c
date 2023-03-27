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



    /* double strtod(const char *, char **) 
     *
     *
     * */


    /* long int strtol(
     * const char *,
     * char **,
     * int) 
     *
     *
     * */


    /* unsigned long int strtoul(
     * const char *,
     * char **,
     * int) 
     *
     *
     * */


    // Funções de geradores de sequências
    // pseudo-aleatórias.


    /* int rand(void) 
     *
     *
     * */


    /* void srand(unsigned int seed)
     *
     *
     * */


    // Funções de gerenciamento de memória

    // Funções de comunicação com o ambiente
    // hospedeiro


    // Funções de busca e ordenação


    // Funções de aritmética de inteiros


    // Funções de caractere multibyte


    // Funções de strings multibyte




    return 0;
}
