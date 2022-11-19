/* This program is meant to read a group of lines
 * and print the biggest of them.*/
# include <stdio.h>
#define MAXLINESIZE    1000    /*Max size of a line*/

int readline(s, lim) /* reads the line in s, returns the size*/
char s[] ;
int lim ;
{
    int c, i ;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!= '\n'; ++ i){
        s[i] = c ;
    }
    if (c == '\n') {
        s[i] = c ;
        ++i ;
    }
    s[i] = '\0' ;
    return (i) ;
}

void copy (s1, s2) /* copies the size of 21 in s2; We'll assume that s1 fits at s2*/
char s1[], s2[] ;
{
    int i ;

    i = 0 ;
    while ((s2[i]=s1[i]) != '\0'){
        ++i ;
    }
}

int main(){
    int size ; /* Current size of the line*/
    int max ; /* Max size until now*/
    char line[MAXLINESIZE] ; /* current line*/
    char keeper[MAXLINESIZE] ; /* biggest kept line*/

    max = 0 ;
    while ( (size = readline(line, MAXLINESIZE)) > 0){
        if (size > max){
            max = size ;
            copy (line, keeper) ;
        }
    }
    if (max > 0){ /* input had one line*/
        printf("%s",keeper) ;
    }
    return 0 ;
}


/* This program is on page 37 of the book*/
