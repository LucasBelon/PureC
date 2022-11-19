/* When we're using printf always use double quotes.
 * This program is meant to print a horizontal histogram
 * that shows the length of characters of a word
 * It's about exercise 1-12 in the page 33 of the book*/

#define EOF -1
#define YES 1
#define NO  0

main(){
    int c, i, nc, inword ;

    inword = NO ;
    nc = 0 ;
    while ((c = getchar()) != EOF){
        ++nc ;
        if (c == ' ' || c == '\n' || c == '\t'){
            inword = NO ;
            printf("\n") ;
            for (i = 1; i < nc; ++ i){
                printf("=") ;
            }
            nc = 0 ;
        }
        else if (inword == NO){
            inword = YES ;
        }
    }
    printf("\n") ;
}
/* The logic is: When we're out of a word, when the inword == NO
 * we print the number of characters of the word. We use the 
 * character count program as a base. We print with a for loop
 * the amount of character we have in the word then we make the
 * character counter = 0
 * This code is on page 33 of the book, exercise 1-12  */
