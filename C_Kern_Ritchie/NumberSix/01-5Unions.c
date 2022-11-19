/* Here we learn about unions.
 * Basically it will allocate memory
 * enough to the biggest type in our
 * variable list. It's something like
 * "This variable may be an int, a char
 * or a float. Do something so I can use
 * this variable to keep any of those values"*/


# include <stdio.h>

int main(){
    union etiq_u {
        int vali ;
        float valf ;
        char *vala ;
    } valu ;
    /* valu will have enough space so
     * it can store the biggest of the
     * three data types. 
     * if typeu is a variable used to remember 
     * what the type of valu, then we can write:*/
    if (typeu == INT){
        printf("%d\n", valu.vali) ;
    }
    else if (typeu == FLOAT) {
        printf("%f\n", valu.valf) ;        
    }
    else if (typeu == STRING){
        printf("%s\n",valu.vala) ;
    }
    else {
        printf("incorrect type %d in typeu \n", typeu) ;
    }

    return 0 ;
}
