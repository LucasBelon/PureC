/* Comparacao entre strings
 * Nao pude deixar o #include por
 * dar conflito, tentativa de reescrever
 * funcao definida na biblioteca
 * Isso gerou dois avisos, mas permitiu
 * executar o codigo*/


int strcmp(char s[], char t[])
{
    int i=0;
    while(s[i]==t[i] && s[i] != '\0') ++i;
    return s[i]-t[i];
}

/* Com s>t: o loop para quando s[i]='\0'.
 * a comparacao se torna a diferenca
 * entre "0 em ascii" e o caractere excedente
 *
 * Com t>s: o loop para quando t!=s. No caso
 * azul==azulado ate que s chega ao fim,
 * e o mecanismo funciona analogo a s>t.
 *
 * Com strings totalmente diferentes:
 * A condicao s[i]==t[i] se quebra imediatamente
 * e retorna a diferenca em codigo ascii
 * */

int main(void){
    char s[] = "azulado";
    char t[] = "azul";
    //char t[] = "beterraba";
    int saida;
    saida = strcmp(s, t);
    printf("saida=%d",saida);

    return 0 ;
}
