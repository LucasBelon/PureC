/* Arquivo para verificacao da lib locale.h*/

# include <stdio.h>

struct lconv {
    char *decimal_point;        /* "." */
    char *thousands_sep;        /* "" */
    char *grouping;             /* "" */
    char *int_curr_symbol;      /* "" */
    char *currency_symbol;      /* "" */
    char *mon_decimal_point;    /* "" */
    char *mon_decimal_sep;      /* "" */
    char *mon_grouping;         /* "" */
    char *positive_sign;        /* "" */
    char *negative_sign;        /* "" */
    char int_frac_digits;   /* CHAR_MAX */
    char frac_digits;       /* CHAR_MAX */
    char p_cs_precedes;     /* CHAR_MAX */
    char p_sep_by_space;    /* CHAR_MAX */
    char n_cs_precedes;     /* CHAR_MAX */
    char n_sep_by_space;    /* CHAR_MAX */
    char p_sign_posn;       /* CHAR_MAX */
    char n_sign_posn;       /* CHAR_MAX */
} CONF_LOCALE;

int main(void){

    return 0;
}
