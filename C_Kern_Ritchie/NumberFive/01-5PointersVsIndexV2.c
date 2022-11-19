/* Here we'll play with some equivalency. Now we know that
 * a pointer and a reference aren't the same. I can use 
 * aritmetics with pointers, but I can't do it with references.
 * References are constants, Pointers are variables.*/
# include <stdio.h>
# define ARRAYSIZE 5

/* Here's where the play begins. I'm using a copy of a previous
 * file to keep it simple. I'll implement a function that does
 * pretty much the same thing, but it uses a different convention
 * of "How do I declare this variable?". One way uses the pointer[]
 * format the other uses the *pointer format.*/

void test(array)
int array[] ;
{
    array[0] = 99 ;
    array[2] = 99 ;
}

void second_test(array)
int *array ;
{
    array[1] = 88 ;
    array[3] = 88 ;
}

int main(){

    int a[ARRAYSIZE] ;
    int i ;
    /* I'm putting a lot of zeros now. I don't want to be bothered
     * with different values of different indexes. I'll know which values
     * are changed because it's a simple example.*/
    for (i=0 ; i < ARRAYSIZE ; ++i){
        a[i] = 0 ;
    }

    /* Now I can visualize the array*/
    for (i=0 ; i < ARRAYSIZE ; ++i){
        printf("No_Changes: index %d, value %d\n",i, a[i]) ;
    }

    /* Applying some changes with 'test' function (with [] syntax) */
    test(a) ;
    for (i=0 ; i < ARRAYSIZE ; ++i){
        printf("Test, index %d, value %d\n",i, a[i]) ;
    }

    /* Applying some changes with 'second_test' function 
     * (with * syntax) */
    second_test(a) ;
    for (i=0 ; i < ARRAYSIZE ; ++i){
        printf("Second_test, index %d, value %d\n",i, a[i]) ;
    }
}
