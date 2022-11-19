/* This code was inspired from page 93 of the book */

# include <stdio.h>
# define INDEX 4
# define ARRAYSIZE 10

int main(){
    int a[ARRAYSIZE] ;
    int *pa ; /*Starting the Pointer Variable*/
    int i ; /*Starting my count variable for my loops*/
    int x ; /*Starting the variable that will be a clone of "*pa"*/

    /* Adding some numbers to "a" so we can see something happening*/
    for (i=0; i<ARRAYSIZE; ++i){
        a[i] = i ;
        /*The index of an element will be the same as the value of it.*/
    }

    pa = &a[INDEX] ;
    x = *pa ;
    printf("x=*pa; printing x: %d \n", x) ;
    printf("pa = &a[%d], printing *pa: %x (in hex)\n", INDEX, *pa);
    /* Pointers points to the memory, they're written in hex!*/
    printf("Printing (*pa+'0'): %c (in char)\n", (*pa+'0') );
    printf("pa = &a[%d], printing *pa: %d \n", INDEX, *pa );
    printf("Printing *(pa+1): %d \n", (*(pa+1)) );
}
