/* This code is meant to answer exercise 1-10 from page 31 of the book
 * write a program that prints words from your input, one by line*/

#define EOF -1
#define YES 1
#define NO  0

main(){
    int c, inword ;

    inword = NO ;
    while ((c = getchar()) != EOF){
        if (inword == YES){
            putchar(c) ;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            inword = NO ;
            putchar('\n') ;
        }
        else if (inword == NO){
            inword = YES ;
            putchar(c) ;
        }
    }
}
/*Why this program is different from the other one?
 * The putchar puts on the output things, and we're using it, so no printf here.
 * When 'inword' becomes 'YES' we need to putchar the present character.
 * This will make us to print the first character of every word, so we put a new
 * if statement that bring the rest of them. It need to be located before or after the
 * if-else statements that changes the 'inword' state, or else it would always be
 * printing the wrong character.
 * Every time the 'inword' changes to 'NO' we need to print a new line, and we do it by
 * putting as an argument the '\n' to the putchar() 
 *
 * The exercise 1-11 is boring. I would need to nest some if-else's, and I'm not on the mood*/
