/* Problemas com ponteiros de tipos incompativeis. */


# include <stdio.h>

int main(void){
    int v = 0x4142;
    char * a;
    int * b;
    long * c;
    a = b = c = &v; 
    printf("%c %x %lx\n", *a, *b, *c);
    return 0 ;
}
