/* Complemente o programa do exemplo 5.20 de modo
 * que os nomes lidos sejam exibidos em 
 * minusculas, com inicial maiuscula.*/

# include <stdio.h>

# define ALFAMIN 65
# define ALFAMAX 90
# define alfamin 97
# define alfamax 122


void CorrigeCase(s)
char s[];
{
    int i = 0;
    while (s[i]!='\0'){
        if (i==0 && s[i]>=alfamin && s[i]<=alfamax)
            s[i] -= 32;
        else if (i!=0 && s[i]>=ALFAMIN && s[i]<=ALFAMAX)
            s[i] += 32;
        ++i;
    }
}


int main(void){
    char n[5][11];
    int i;
    for (i=0; i<5; ++i){
        printf("%do nome:", i+1);
        gets(n[i]);
    }
    for (i=0; i<5; ++i){
        CorrigeCase(n[i]);
        printf("%do nome:%s\n",i+1,n[i]);
    }
    return 0 ;
}

