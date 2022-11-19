/* What happens when we try to operate mathematically using characters?
 * That's what we'll find out*/

# include <stdio.h>

# define STRINGLEN 100

/* Turns 'string' into a integer */
int atio(string)
char string[] ;
{
    int i, n ;
    n = 0 ;
    for (i = 0 ; string[i] >= '0' && string[i] <= '9' ; ++i){
        n = 10 * n + string[i] - '0' ;
    }
    return (n) ;
}

int main(){
    char converted ;
    char convert[STRINGLEN] = "7" ;
    /* Remember that hen we're dealing with single characters
       we must use single quotes */
    converted = atio(convert) ;
    printf("The number converted to number is: %d\n", converted) ;
    printf("The number in string is \"%c\"\n", converted) ;
}

/* This code is at page 47 of the book (the atoi, but named differently function) 
 * 
 * I've written "atio" 'cause the C lang already has an atoi function, that was written
 * by K&R, so writing an atoi function would overwrite it. */
