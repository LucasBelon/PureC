/* Usando notacao de ponteiros com vetores. */


# include <stdio.h>

int main(void){
    static int v[5] = {17, 29, 36, 44, 51};
    int i;
    for (i = 0; i<5; ++i) printf("%d ", *(v+i)) ;
    putchar('\n');
    return 0 ;
}
