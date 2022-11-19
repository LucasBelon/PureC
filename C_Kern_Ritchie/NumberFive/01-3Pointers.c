/* Here we'll see that we're also giving
 * To the function the location of our variable.
 * Which means that we're giving to the function
 * a higher privilege than only read
 * I wrote those first four lines before testing.
 * On the 01-2 file we did a change at a variable,
 * and it's not the same as to do a change at a
 * array. Arrays exists with the help of pointers,
 * The name of an array is a pointer to the element
 * of index zero. Giving the name of an array to a
 * function _IS_ to give it the location of the
 * variable.
 * Think about it. An array can be tremendously long,
 * and if a function want to copy that array it may cause
 * an overflow, so this behaviour is understandable.
 * */

# include <stdio.h>
# define ARRAYSIZE 10

void test(array)
int array[] ;
{
    array[0] = 99 ;
    array[2] = 99 ;
}

int main(){

    int a[ARRAYSIZE] ;
    int i ;

    for (i=0 ; i < ARRAYSIZE ; ++i){
        a[i] = i ;
    }
    for (i=0 ; i < ARRAYSIZE ; ++i){
        printf("Test1, index %d, value %d\n",i, a[i]) ;
    }
    test(a) ;
    for (i=0 ; i < ARRAYSIZE ; ++i){
        printf("Test2, index %d, value %d\n",i, a[i]) ;
    }
}
