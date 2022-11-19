/* This code is up to show a way to put the c=getchar() 
 * inside the while statement. This way we can shrink a 
 * little the code. */

/*
 *#define EOF   0
 * or
 *#define EOF   -1
 */

#define EOF -1

main(){
    int c ;

    while ( ( c = getchar() ) != EOF ){
        putchar(c) ;
    }
}
/* It takes the c=getchar() from before the while statement
 * to put it into the if-else that lives inside while.
 * It's nice to use the full power of a logic structure.
 * This code is on bottom of page 27 of the book.
 * The existence of the () around the 'c=getchar()' is 
 * necessary, since the '!=' has a higher priority over the '='*/
