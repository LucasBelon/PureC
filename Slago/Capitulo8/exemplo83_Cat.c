/* Uma versao do comando cat do sistema operacional
 * UNIX.
 *
 * Podemos redirecionar a entrada e saida padrão utilizando
 * ferramentas do sistema operacional, como > e < além do uso
 * de pipes.*/


# include <stdio.h>
# define EOF '+'
int main(void){
    int c;
    while((c = getchar())!=EOF)
        putchar(c);

    return 0 ;
}
