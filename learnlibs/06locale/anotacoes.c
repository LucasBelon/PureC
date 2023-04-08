/* Arquivo para verificacao da lib locale.h*/

# include <stdio.h>
# include <locale.h>

/* A biblioteca define duas funções, um tipo, e
 * algumas macros. O tipo definido é uma
 * estrutura que deve conter, em qualquer ordem,
 * pelo menos os seguintes itens:
 * */

//struct lconv {
//    char *decimal_point;        /* "." */
//    char *thousands_sep;        /* "" */
//    char *grouping;             /* "" */
//    char *int_curr_symbol;      /* "" */
//    char *currency_symbol;      /* "" */
//    char *mon_decimal_point;    /* "" */
//    char *mon_decimal_sep;      /* "" */
//    char *mon_grouping;         /* "" */
//    char *positive_sign;        /* "" */
//    char *negative_sign;        /* "" */
//    char int_frac_digits;   /* CHAR_MAX */
//    char frac_digits;       /* CHAR_MAX */
//    char p_cs_precedes;     /* CHAR_MAX */
//    char p_sep_by_space;    /* CHAR_MAX */
//    char n_cs_precedes;     /* CHAR_MAX */
//    char n_sep_by_space;    /* CHAR_MAX */
//    char p_sign_posn;       /* CHAR_MAX */
//    char n_sign_posn;       /* CHAR_MAX */
//} CONF_LOCALE;

/* As macros definidas são NULL e
 * LC_ALL
 * LC_COLLATE
 * LC_CTYPE
 * LC_MONETARY
 * LC_NUMERIC
 * LC_TIME
 * As macros se expandem para valores distintos
 * utilizáveis como primeiro argumento da função
 * setlocale(). Outras macros que se iniciam com
 * LC_ também podem existir a depender da
 * implementação.
 * */

int main(void){
    // Locale control
    
    /* char *setlocale(
     * int category,
     * const char *locale)
     *
     * Seleciona a porção correta do locale
     * especificada por category e locale. Pode
     * ser usada para alterar uma parte ou todo o
     * locale do programa. O valor LC_ALL usado
     * como category dita o locale do programa
     * todo. LC_COLLATE afeta funçôes de
     * separação de palavras strcoll() e
     * strxfrm(). 
     * Retorna uma string com o locale atual. Não
     * deve ser alterada, mas pode ser
     * sobrescrita por chamadas subsequentes da
     * mesma função. */


    /* struct lconv *localeconv(void)
     *
     * Configura os componentes da estrutura
     * lconv com o locale atual.
     * Retorna um ponteiro para a estrutura
     * preenchida.
     * */


    return 0;
}
