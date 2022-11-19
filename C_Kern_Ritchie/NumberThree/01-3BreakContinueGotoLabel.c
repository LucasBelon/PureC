/* We have two elements, break and continue, 
 * they're kind of antagonistic, and behaves
 * differently depending on the loop they're in.
 * */
# include <stdio.h>
# define MAXLINE 1000
# define LOOPNUM 1000

int main() /* Removes ending whites and tabs */
{
    int c, i, j, k ;
    char line[MAXLINE] = "My Name is Belon" ;
    printf("This is the Break example\n") ;
    printf("The original string is \"%s\"\n\n", line) ;
    i = 0 ;
    while ((c = line[i]) != '\0'){
        if (c == 'o'){
            printf("\nTerminating, we've reached the 'o' letter\n") ;
            break ;
        }
        printf("character: %c\n",c);
        ++i ;
    }

/* For now we must see that we quit the while
 * loop before it reached an arbitrary letter
 * of our string. It also works, in the same
 * way with for loops. But it will not be that
 * similar with the other command, the continue.*/
    printf("\nThis is the continue example with a for loop\n") ;
    for (i = -5 ; i < 11 ; ++i){
        if (i == 0){
            continue ;
        }
        printf("Our number is: %d\n", i) ;
    }
    i = -6 ;
    printf("\nThis is the continue example with a while loop\n") ;
    while (i < 10){
        ++i ;
        if (i == 0){
            continue ;
        }
        printf("Our number is: %d\n", i) ;
        /* If we put the ++i step here at the end we would end
         * into a endless loop. So in order to make it run, it was
         * necessary to do this little trick with the 'i' variable*/
    }
    /* The book brings us what are the command goto and labels.
     * When we have a nested loop, and we want to exit of multiple
     * loops and go to some statement right after it, we can use
     * goto to do it.*/

    printf("\nThis is a goto and label example\n") ;

    for (i = 0 ; i < LOOPNUM ; ++i){
        for (j = 0 ; j < LOOPNUM ; ++j){
            for (k  = 0 ; k < LOOPNUM; ++k){
                if (k + LOOPNUM*(j+LOOPNUM*i) == 500){
                    printf("I'm tired of this loop bro\n") ;
                    goto endit ;
                }
                printf("We ran %d times\n",k + LOOPNUM*(j+LOOPNUM*i)) ;
            }
        }
    }
    printf("The loop ended completely\n") ;
    endit:
        printf("We're finally free!\n") ;
    /* In this case our label is the 'endit',
     * that says "Jump to that part of the code"*/
}
/* This code is at page 68 (the last of the chapter) */
