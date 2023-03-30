/* No stackoverflow aparece que a maior parte do
 * que contém em string.h é código legado, mas
 * que ajuda muito na portabilidade por ser
 * padronizado pelo POSIX. Mas também existe a
 * lib strings.h, com um s ao final, que adiciona
 * ainda mais funções. Sinceramente, o que eu
 * posso fazer é aprender essa biblioteca por
 * aprender e rezar pra ser útil mais tarde. */

/* É tradição usar C para manipular strings como
 * arrays de chars. A única coisa que o C
 * propriamente dito implementa na linguagem é o
 * caractere de "terminado por nulo". A
 * biblioteca padrão do C provê funções que
 * manipulam três formas de strings:
 * Funções cujos nomes começam com mem manipulam
 * sequências de caracteres arbitrários. Um
 * argumento aponta para o começo da string,
 * outro para o número de elementos.
 * Funções cujos nomes começam com strn manipulam
 * sequências de caracteres não nulos. Os
 * argumentos se mantêm, e a string se encerra
 * justamente antes do maior elemento, para o
 * qual o caractere final '\0' é adicionado (não
 * ligamos pra ter um nulo no meio do arquivo).
 * Todas as outras funções cujos nomes começam
 * com str manipulam sequências de caracteres
 * terminados por nulo. Podemos determinar o
 * tamanho da string simplesmente procurando pelo
 * caractere nulo ao final.
 *
 * Algumas funções da biblioteca são muito
 * otimizadas e valem a pena o esforço de
 * aprender.*/

/* O header string.h declara muitas funções, um
 * tipo e uma macro. O tipo size_t (o maior
 * unsigned disponível) e a macro NULL. Vários
 * métodos são utilizados para determinar o
 * comprimento de arrays, mas em todos os casos,
 * um char * ou void * apontam para o caractere
 * inicial da array. Se uma array é acessada além
 * do fim do objeto, o comportamento é
 * indefinido.*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>


int main(void){ //Página 405

    // Funções de cópia de strings.

    /* void * memcpy(void *s1,
     * const void *s2,
     * size_t n)
     *
     * Copia n caracteres de s2 para s1.
     * Retorna o valor de s1.
     * */


    /* void * memmove(void *s1,
     * const void *s2,
     * size_t n)
     *
     * Copia n caracteres de s2 para s1. Faz uso
     * de malabarismo com objetos temporários
     * para garantir que a memória não sobrepõe.
     * Retorna o valor de s1.
     * */


    /* char * strcpy(char *s1, const char *s2)
     *
     * Copia a string s2, inclusive o final nulo,
     * em s1. Se sobrepor memória não se sabe o
     * que acontece.
     * Retorna o valor de s1.
     * */


    /* char * strncpy(char *s1,
     * const char *s2,
     * size_t n)
     *
     * Copia não mais do que n caracteres
     * (caracteres após um caractere nulo não são
     * copiados) de uma string s2 para uma string
     * s1. Se a cópia se dá entre strings que se
     * sobrepõem o comportamento é indefinido. Se
     * a string s2 é menor do que n caracteres,
     * caracteres nulos são adicionados à cópia
     * na string s1, até que todos os n
     * caracteres tenham sido escritos.
     *
     * Retorna o valor de s1.
     * */

    // Funções de concatenação

    /* char *strcat(char *s1, const char *s2)
     *
     * Adiciona uma cópia da string s2 (incluindo
     * o caractere nulo ao final) ao fim da
     * string apontada por s1. O caractere
     * inicial de s2 sobrescreve o caractere nulo
     * do final da string s1. Se a cópia se dá em
     * strings que se sobrepõem, o comportamento
     * é indefinido.
     * Retorna o valor de s1.
     * */


    /* char *strncat(char *s1,
     * const char *s2,
     * size_t n)
     *
     * Adiciona não mais do que n caracteres
     * (caracteres nulos ou que estejam após um
     * caractere nulo não são copiados) da string
     * s2 para o final da string s1. Um caractere
     * nulo é sempre adicionado ao final. Se a
     * cópia se dá entre strings que se sobrepõem
     * o comportamento é indefinido.
     * Retorna o valor de s1
     * */


    // Funções de comparação
    /* O sinal de um valor não nulo que é
     * retornado pelas funções de comparação é
     * determinado pelo sinal da diferença entre
     * os valores comparados. ('a'-'b' = -1)*/


    /* int memcmp(const void *s1,
     * const void *s2, size_t n)
     *
     * Compara os primeiros n caracteres do
     * objeto apontado por s1 com os primeiros n
     * caracteres do objeto apontado por s2.
     * Retorna um inteiro maior, igual, ou menor
     * que zero, de acordo com o objeto apontado
     * por s1 ser maior, igual ou menor que o
     * objeto apontado por s2.
     * */


    /* int strcmp(const char *s1, const char *s2)
     *
     * Compara a string s1 com a string s2.
     * Retorna um valor maior, igual, ou menor
     * que zero, de acordo com a string s1 ser
     * maior, menor ou igual a s2 no momento em
     * que as diferenças forem encontradas.
     * */


    /* int strcoll(const char *s1,
     * const char *s2)
     *
     * Compara a string s1 com a string s2, ambos
     * interpretados com a categoria apropriada
     * de LC_COLLATE em relação ao presente
     * locale.
     * Retorna um valor maior, igual, ou menor
     * que zero, de acordo com a string s1 ser
     * maior, menor ou igual a s2 no momento em
     * que as diferenças forem encontradas.
     * */


    /* int strncmp(const char *s1,
     * const char *s2,
     * size_t n)
     *
     * Compara não mais do que n caracteres
     * (caracteres que procedem caractere nulo
     * não são comparados) de uma string s1 com
     * uma string s2.
     * Retorna um valor maior, igual, ou menor
     * que zero, de acordo com a string s1 ser
     * maior, menor ou igual a s2 no momento em
     * que as diferenças forem encontradas.
     * */


    /* size_t strxfrm(char *s1,
     * const char *2,
     * size_t n)
     *
     * Transforma s2 e armazena em s1, de forma
     * que pode ser comparada ou ordenada pelas
     * outras funções já vistas (qsort e strcmp).
     * Retorna o comprimento da string
     * transformada não incluindo caractere
     * nulo). Se o valor retornado é n ou mais, o
     * conteúdo da array apontada por s1 é
     * indeterminado.
     * */


    // Funções de busca

    /* void *memchr(const void *s,
     * int c,
     * size_t n)
     *
     * Encontra a primeira ocorrência de c
     * (convertido para unsigned char) nos
     * primeiros n caracteres de um objeto
     * apontado por s.
     * Retorna um ponteiro para o caractere
     * localizado, ou um ponteiro nulo se o
     * caractere não aparece no objeto.
     * */


    /* char *strchr(const char *s, int c)
     *
     * Encontra a primeira ocorrência de c
     * (convertido para char) na string s. O
     * caractere final nulo é considerado parte
     * da string.
     * Retorna um ponteiro para o caractere
     * localizado ou um ponteiro nulo na ausência
     * do caractere em s.
     * */


    /* size_t strcspn(const char *s1,
     * const char *s2)
     *
     * "string complement-span"
     * Computa o comprimento do segmento inicial
     * máximo da string s1 que consiste
     * inteiramente de caracteres NÃO presentes
     * na string s2.
     * Retorna o comprimento do segmento.
     * */


    /* char *strpbrk(const char *s1,
     * const char *s2)
     *
     * "string pointer break"
     * Encontra a primeira ocorrência na string
     * s1 de qualquer caractere da string s2.
     * Retorna um ponteiro para o caractere ou um
     * ponteiro nulo caso não haja caractere.
     * */


    /* char *strrchr(const char *s, int c)
     *
     * "string right-to-left character"
     * Encontra a última ocorrência de c
     * (convertido em char) na string s. O
     * caractere nulo final é considerado parte
     * da string.
     * Retorna um ponteiro para o caractere, ou
     * um ponteiro nulo caso c não ocorra na
     * string.
     * */


    /* size_t strspn(const char *s',
     * const char *s2)
     * 
     * "string span"
     * Computa o comprimento do segmento inicial
     * máximo da string s1, que consiste
     * inteiramente de caracteres da string
     * apontada por s2.
     * Retorna o comprimento do segmento.
     * */


    /* char *strstr(const char *s1,
     * const char *s2)
     *
     * Encontra a primeira ocorrência na string 
     * s1 da sequência de caracteres (exceto o 
     * caractere nulo final) contidos na string
     * s2.
     * Retorna um ponteiro para a string
     * encontrada, ou um ponteiro nulo se a
     * string não for encontrada. Se s2 aponta
     * para uma string com comprimento zero, a
     * função retorna s1.
     * */


    /* char *strtok(char *s1, const char *s2)
     *
     * "string token"
     * Uma sequência de chamadas a strtok quebra
     * a string s1 numa sequência de tokens, cada
     * qual deliminado por um caractere da string
     * apontada por s2. A primeira chamada na
     * sequência tem s1 como primeiro argumetno,
     * e é seguida por chamadas com ponteiros
     * nulos como seu primeiro argumento. A
     * string separadora apontada por s2 pode ser
     * diferente de chamada a chamada.
     * A primeira chamada na sequência procura na
     * string s1 pelo primeiro caractere que não
     * ocorre na string separadora s2. Se tal
     * caractere não é encontrado, então não há
     * tokens na string s1 e strtok retorna um
     * ponteiro nulo. Se tal caractere é
     * encontrado, ele é tornado o começo do
     * primeiro token.
     * A função então procura deste ponto por um
     * caractere contido na string separadora, se
     * não encontrado, se extende até o fim da
     * string s1, e buscas subsequentes
     * retornarão um ponteiro nulo. Se tal
     * caractere é encontrado, é sobrescrito por
     * um caractere nulo. Eu não entendi nada.
     * Agora entendi. É uma função do tipo
     * string.split("sep"), que faz string.pop a
     * cada vez que é chamado.
     * Retorna um ponteir para o primeiro
     * caracter do token, ou um ponteiro nulo se
     * não houverem tokens.
     * */


    // Funções miscelânias

    /* void *memset(void *s, int c, size_t n)
     *
     * Copia o valor de c (convertido para
     * unsigned char) em cada um dos n primeiros
     * caracteres apontados por s.
     * Retorna o valor de s.*/


    /* char *strerror(int errnum)
     *
     * Mapeia número de erro errnum para uma
     * string de erro.
     * Retorna um ponteiro para a string, a qual
     * possui conteúdo definido por
     * implementação. O conteúdo não deve ser
     * modificado pelo programa, mas pode ser
     * sobrescrito por uma chamada subsequente ao
     * strerror.
     * */


    /* size_t strlen(const char *s)
     *
     * Computa o comprimento de uma string s.
     * Retorna o número de caracteres que
     * precedem o caractere terminal nulo.*/

    return EXIT_SUCCESS;
}
