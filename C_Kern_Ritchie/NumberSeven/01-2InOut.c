/* An example of redirecting data*/


# include <stdio.h> /* It handles the io*/
# include <ctype.h> /* It brings the isupper and tolower functions*/
# define EOF '+'
int main(){ /* Convert to lower case */
    int c ;

    while ((c = getchar()) != EOF ){
        putchar( isupper(c) ? tolower(c) : c) ;
    }
    return 0 ;
}
