/* Codifique a funcao strdel(s,p), que remove 
 * o caracter existente na posicao p da string 
 * s. Se a posicao p nao existe em s, 
 * nada eh feito. */


int strlen(y)
char y[];
{
    int i=0;
    while (y[i]!='\0') i++;
    return i;
}


void strdel(s,p)
char s[];
int p;
{
    int max_index = strlen(s);
    int i = 0;
    if (max_index > p)
        while(i<=max_index){
            s[p+i] = s[p+i+1];
            ++i;
        }
}


int main(void){
    char string[] = "StringTeste";
    int p = 0;
    strdel(string,p);
    printf("%s\n", string);
    return 0 ;
}
