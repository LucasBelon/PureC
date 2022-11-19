/* This example, with a function, show us the usability
 *
 * Imagine this: When we use variables, we have some permissions.
 * When we need to use a function to change some data it's not owner
 * of the variable. So the standard is, you can read the value, but you
 * can't overwrite it. Pointers are a way to say "If you want to change, it's
 * right there in the memory, I will not give you a copy of my variable, I wil
 * give you it's location.*/

# include <stdio.h>

void change(px, py)
int *px, *py ;
{
    int temp ;

    temp = *px ;
    *px = *py ;
    *py = temp ;
}

int main(){
    int x = 3 ;
    int y = 5 ;
    int *px ;
    //"px will be the variable that access a value
    //But will not own the value"
    px = &x ;
    //"px is binded to whatever the x variable is

    printf("Before Change: x=%d, y=%d\n", x, y) ;
    change(&x,&y) ;
    printf("After Change: x=%d, y=%d\n", x, y) ;
    *px = 0 ;
    printf("Did *px = 0. X=%d\n", x) ;
}
