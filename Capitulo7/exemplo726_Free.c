/* Liberacao de uma area alocada dinamicamente.*/


# include <stdio.h>
# include <stdlib.h>


int main(void){
    int i, n;
    char *p;

    p = (char*)malloc(100*sizeof(char));
    if ( p==NULL ){
        puts("memoria insuficiente\n");
        exit(1);
    }

    free(p);

    return 0 ;
}

