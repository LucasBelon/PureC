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
    /* Preciso continuar os testes.*/ 
    printf("SHRT_MIN: %d\n",SHRT_MIN);
    printf("SHRT_MAX: %d\n",SHRT_MAX);
    printf("USHRT_MAX: %d\n",USHRT_MAX);
    printf("INT_MIN: %d\n",INT_MIN);
    printf("INT_MAX: %d\n",INT_MAX);
    printf("UINT_MAX: %d\n",UINT_MAX);
    printf("LONG_MIN: %ld\n",LONG_MIN);
    printf("LONG_MAX: %ld\n",LONG_MAX);
    printf("ULONG_MAX: %ld\n",ULONG_MAX);
 
    return 0;
}
