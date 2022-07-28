/* Codifique a funcao strlen(s), que devolve
 * o numero de caracteres armazenados na string
 * s. Lembre-se que o terminador '\0' nao faz 
 * parte da string e, portanto, nao deve ser 
 * contado.*/


int strlen(y)
char y[];
{
    int i=0;
    while (y[i]!='\0') i++;
    return i;
}


int main(void){
    char s[] = "Teste";
    printf("%d\n", strlen(s));
    return 0 ;
}
