/* This program is here to see how the printing using 
 * the ascii works, and what are it's limits*/

# include <stdio.h>

# define SHIFTNUMBER 2
# define LINELENGHT 5
# define ASCII_A 49
# define ASCII_END 128

int main(){
    int step ;
    for ( step = ASCII_A ; step < ASCII_END ; ++step ) {
        printf("Char:' %c 'Num: %d \t", step, step) ;
        if ( ( (step + SHIFTNUMBER) % LINELENGHT ) == 0 ){
            printf("\n") ;
        }
        if (step+2 == ASCII_END){
            ++step ;
            printf("\nChar: BSpace Num: %d \t", step) ;
        }
    }
    printf("\n") ;
}

