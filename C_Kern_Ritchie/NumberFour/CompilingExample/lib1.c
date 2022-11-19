# include <stdio.h>

char lib1(s)
char *s ;
{
    printf("We're at 'lib1.c'\n") ;
    printf("%s\n", s) ;
    return *s ;
}

