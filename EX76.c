/* Codifique a funcao puts(s), que exibe uma string
 * s no video e, depois, muda o cursor de linha
 *
 * Comentario: Vou usar outro nome para nao sobrescrever
 * a funcao.*/


# include <stdio.h>

/* Funcao Clone puts(s), que coloca na tela uma string
 * e no final, muda o cursor de linha*/
int altPuts(const char* s)
{
    while(*s) putchar(*(s++));
    putchar('\n');
    return 0;
}


int main(void){
    char string[] = "LUCAS";
    altPuts(string);
    return 0 ;
}
