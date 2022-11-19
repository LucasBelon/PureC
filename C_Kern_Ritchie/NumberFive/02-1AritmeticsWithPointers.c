/* This is at page 96 of the book.
 * This program is meant to show how a simple
 * memory manager can work. It works over what is
 * called a buffer. Dept details are at the bottom
 * of this file.*/

# include <stdio.h>
# define NULL 0 /* Value of a pointer if any error occurs */
# define SIZEALLOC 1000 /* Size of available space */

static char bufaloc[SIZEALLOC] ; /* Space for aloc */
static char *aaloc = bufaloc ; /* Next free position */

char *aloca(n) /* Returns a pointer to 'n' characters */
int n;
{
    if (aaloc+n <= bufaloc + SIZEALLOC) { /* We have space */
        aaloc += n ;
        return (aaloc - n) ; /* Old pointer */
    }
    else { /* We have no space */
        return NULL ;
    }
}

/* free() is another pre-existent function in C*/
void personal_free(p) /* Turn free the space pointed by 'p'*/
char *p ;
{
    if (p >= bufaloc && p < bufaloc + SIZEALLOC){
        aaloc = p ;
    }
}

int main(){
    return 0 ;
}

/* These two functions works this way: we're defining a space with bufaloc,
 * and defining a pointer to it's first element. Using pointers everything
 * works faster. Then we don't actually erase anything, we just put the pointer
 * at some... Point of memory that will tell us if the space that we previously 
 * reserved to our program is already fulfilled or if we can put more things there.
 * More exactly, our space is like a place where we can put chars. Our pointer can
 * jump one by one char (mind the size of this operation). 
 * It defines, and also, constraints lots of things.
 * Main is defined here so the compiler won't say that something is wrong.*/
