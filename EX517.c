/* Codifique a funcao strpos(s,c), que devolve 
 * a posicao da primeira ocorrencia do caracter 
 * c na string s; ou -1 caso ele nao ocorra em s. */

# include <stdio.h>

int strpos(s,c)
char s[];
char c;
{
    int i = 0;
    while(s[i] != '\0'){
        if (s[i] == c) return i;
        ++i;
    }
    return -1;
}


int main(void){
    char string[] = "Ocorrencia da primeira letra";
    char c = 'l';
    printf(\
"A ocorrencia de %c na \
string \"%s\" eh no indice %d.",\
c, string, strpos(string,c)\
    );
    return 0 ;
}
