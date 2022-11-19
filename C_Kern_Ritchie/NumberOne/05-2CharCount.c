/* Alternative version of the character counter program.
 * This time it will use a for loop */

#define EOF 0

main(){

    double nc ;
    
    for (nc = 0 ; getchar() != EOF ; ++nc){
        ;
    }
    printf("%.0f\n",nc) ;
}

/* printf() uses %f for both float and double. We put a .0
 * to suppress the decimal space.
 * The for/while loops verify if there are data to work with
 * before getting into the loop. It puts a little more 
 * of performance on the run.
 * C reads the ASCII table, so our characters can be stored as numbers
 * this code is on page 28 of the book */
