/* Codifique a funcao strcat(s,t), que concatena
 * a string t ao final da string s. Por exemplo, 
 * se x armazena "facil" e y armazena "idade", 
 * apos a chamada a strcat(x,y), x estara 
 * armazenando "facilidade" */



int strlen(y)
char y[];
{
    int i=0;
    while (y[i]!='\0') i++;
    return i;
}


void strcat(s,t)
char s[];
char t[];
{
    int i = 0;
    int tam_s = strlen(s);
    int tam_t = strlen(t);
    while (i<tam_t+1){
        s[tam_s+i] = t[i];
        ++i;
    }
}


int main(void){
    char x[] = "facil";
    char y[] = "idade";
    strcat(x,y);
    printf("%s\n",x);
    return 0 ;
}
