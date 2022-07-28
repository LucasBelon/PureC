/* Uma versao do comando cat do sistema operacional
 * UNIX.*/


# include <stdio.h>

int main(void){
    int c;
    while((c = getchar())!='+')
        putchar(c);

    return 0 ;
}
