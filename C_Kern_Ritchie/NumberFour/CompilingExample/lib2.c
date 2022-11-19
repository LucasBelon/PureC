# include <stdio.h>

int lib2(x,y)
int x, y;
{
    printf("We're at 'lib2.c'\n") ;
    printf("%d\n", (x+y)) ;
    return 0 ;
}

