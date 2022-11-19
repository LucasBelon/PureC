/* Operadores de adicao e subtracao com ponteiros e inteiros*/


# include <stdio.h>

int main(void){
    short int* p = (short int*) 0x1000;
    // int* p = (int*) 0x1000;
    // Um short int tem metade dos bytes de um int 
    // no meu sistema (nao sei quanto a outros sistemas)
    p++  ; printf("%p ", p);
    p-=3 ; printf("%p ", p);
    p+=2 ; printf("%p ", p);
    p--  ; printf("%p\n", p);

    return 0 ;
}
