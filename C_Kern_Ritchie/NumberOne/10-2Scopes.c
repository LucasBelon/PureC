/* This program is meant to read a group of lines
 * and print the biggest of them.
 * This program shows what variable scope is, by using
 * the declaration of them, outside even of the main.
 * It forces us to tell our program that the variable is
 * outside of the function itself.*/
# include <stdio.h>
# define MAXLINESIZE    1000    /*Max size of a line*/

char line[MAXLINESIZE] ; /* current line*/
char keeper[MAXLINESIZE] ; /* biggest kept line*/
int max ; /* Max size until now*/

/* Defining functions */
int readline() /* reads the line in s, returns the size*/
{
    int c, i ;
    extern char line[] ;

    for (i = 0; i < MAXLINESIZE-1 && (c=getchar()) != EOF && c != '\n'; ++ i){
        line[i] = c ;
    }
    if (c == '\n') {
        line[i] = c ;
        ++i ;
    }
    line[i] = '\0' ;
    return (i) ;
}

void copy () 
{
    int i ;
    extern char line[], keeper[] ;

    i = 0 ;
    while ((keeper[i]=line[i]) != '\0' )
        ++i ;
    }

int main(){
    int size ; /* Current size of the line*/
    extern int max ; /* Max size until now*/
    extern char keeper[] ; /* biggest kept line*/

    max = 0 ;
    while ( (size = readline()) > 0){
        if (size > max){
            max = size ;
            copy() ;
        }
    }
    if (max > 0){ /* input had one line*/
        printf("%s",keeper) ;
    }
}


/* This program is on page 39 of the book*/
