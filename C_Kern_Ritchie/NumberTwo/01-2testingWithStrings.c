/* This program is meant to be a test with arrays, specifically
 * a test with strings. The idea is to understand the data types
 * and to use them in a practical example */

# include <stdio.h>

/* When we define the STRINGLEN as 16 (We know that our string has
 * 16 characters, it shows a bad behavior, because it can't reach
 * the stop character '\0'. So every string must contain at least
 * one more character in it's length. Two is the perfect point, 
 * maybe there's a "\n\0" in the end, so two characters*/

# define STRINGLEN 17

/* 
# define STRINGLEN 16
*/

int lenght(s)
char s[] ;
{
    int i ;
    i = 0 ;

    while (s[i] != '\0'){
        ++i ;
    }
    return i ;
}


int main(){
    int c , i;
    char string[STRINGLEN] = "My Name Is Lucas" ;
    char character ;
    i = 0 ;
    while (string[i] != '\0') {
        character = string[i] ;
        c = character ;
        printf("%c\n",c) ;
        ++i ;
    }
    c = lenght(string) + 1 ;
    printf("Length of the string (With stop character): %d\n",c) ;
    return 0 ;
}
 /* This is related to chapter two.
  * It starts at page 42 of the book and ends at page 57*/
