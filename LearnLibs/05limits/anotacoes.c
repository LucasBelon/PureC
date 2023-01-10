/**/

# include <stdio.h>
# include <limits.h>

int main(void){
    printf("Charmax: %d\n",CHAR_MAX);
    printf("SCharmax: %d\n",SCHAR_MAX);
    printf("UCharmax: %d\n",UCHAR_MAX);
    printf("Charmin: %d\n",CHAR_MIN);
    printf("SCharmin: %d\n",SCHAR_MIN);
    printf("Multibyte char: %d\n",MB_LEN_MAX);
    char a = -1;
    /* Char definido como -1 é um int 255.
     * Ele dá a volta pra definir os valores
     * de char.*/
    printf("%d\n",a);
    return 0;
}
