/* Intro to pointers, page 89 */

#include <stdio.h>
#include <math.h>

int main(){
    int x, y ;
    int *px ;
    double d ;

    x = 1 ;
    px = &x ; // Key:Value -> Assign to the value
              // Both x and px points to the value 1
    y = *px ; // Key:Value -> Assign to the key(pointer)
              // y points to the pointer.
    d = sqrt((double) *px) ;

    printf("printf y: %d\n", y) ;
    printf("printf d: %.2f\n", d) ;
}
