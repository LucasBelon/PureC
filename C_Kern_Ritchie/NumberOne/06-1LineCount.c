/* This program is meant to be a line counter*/
#define EOF 0

main(){
    
    int c, nl ;

    nl = 0 ;
    while ((c=getchar()) != EOF){
        if (c == '\n'){
            ++nl ;
        }
    }
    printf("%d\n", nl) ;
}
/* In the while body we have a if statement to see 
 * if the character that getchar() gets is a 'new line'
 * character.
 * The '==' sign is the boolean comparator to see if two 
 * things are equal.
 * This code is on page 29 of the book */
