/* This program is to study the do-while structure.
 * there are a few simple functions that give some color
 * to our example. The do-while is at line 30*/
# include <stdio.h>


void reverse(s) /* reverse the string s*/
char s[] ;
{
    int c, i, j ;

    for (i = 0, j = strlen(s) - 1 ; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c ;
    }
}


void itoa(n, s) /* convert n to characters in s */
char s[] ;
int n ;
{
    int i, signal ;
    
    if ((signal = n) < 0){
        n = -n;
    }
    i = 0 ;
    do { /* Generates the digits in reverse order */
        s[i++] = n % 10 + '0' ; /* Get the next digit */
    }
    while((n /= 10) > 0); /* Removes the digit */
    if (signal < 0){
    s[i++] = '-' ;
    }
    s[i] = '\0' ;
    reverse (s) ;
}
/* As it can be seen, the do-while is a "do it at least
 * once, only then verify and, if true, keep running" */

int main(){
    int n = -12345 ;
    char s[30] ;
    itoa(n,s) ;
    printf("%s\n", s) ;
}
/* This code is at page 64 and 65 (each part at each page) */
