/* Codifique a funcao strins(s,c,p), que insere o 
 * caracter s na posicao p da string s. Se a posicao 
 * p nao existe em s, o caracter deve ser inserido 
 * no final da string.  */


int strlen(y)
char y[];
{
    int i=0;
    while (y[i]!='\0') i++;
    return i;
}


void strins(s,c,p)
    char s[];
    int p;
    char c;
{
    int max_index = strlen(s);
    if (p>=max_index){
        s[max_index] = c;
        s[max_index+1] = '\0';
    }
    else {
        int i = 0;
        while ((max_index-p) >= i){
            s[max_index+1-i] = s[max_index-i];
            ++i;
        }
        s[max_index-i+1] = c;
    }
}


int main(void){
    char s[] = "Insira [] Aqui";
    int p = 8;
    char c = 'x';

    strins(s,c,p);
    printf("%s\n", s);
    return 0 ;
}
