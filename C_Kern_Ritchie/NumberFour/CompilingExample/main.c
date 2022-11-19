# include <stdio.h>
# include "lib1.h"
# include "lib2.h"
# define MAXLEN 100
int main(){
    printf("We're at the beggining of the main\n") ;

    int varlib1 ;
    int varlib2 ;
    char string[MAXLEN] = 
        "I'm executing lib1 as a function inside main's" ;

    lib1(string) ;
    lib2(2,3) ;
    return 0;
}
