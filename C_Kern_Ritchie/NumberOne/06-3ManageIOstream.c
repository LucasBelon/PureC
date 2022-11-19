/* This program is meant to copy the input to the output
 * and replace any chain of two or more spaces into only
 * one space.*/

#define EOF 0

main(){
    int c ;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            putchar(c) ;
            while((c = getchar()) == ' '){
                ;
            }
            putchar(c) ;
        }
        else putchar(c) ;
    }
}


/* This code is on page 30, exercise 1-7 of the book
 *
 * My logic is, when we see the first " " we will show it
 * normally, but I'll spend the others inside a while loop*/

/* This version is how to make things simpler.
 * When we enter in the if, the last getchar() is a non " "
 * element. That's why we need to execute one last time
 * the putchar before exiting the if. The loop itself will
 * get a new item from the string, and we won't enter on the else.  */
/*
main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == ' '){
            putchar(c) ;
            while((c = getchar()) == ' ') ;
        }
        putchar(c) ;
    }
}
*/
