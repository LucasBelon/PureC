/* C nao faz consistencia de valores nos indices
 * de um vetor.*/

# include <stdio.h>

int main(){
    int v[5];
    int i=3;
    /* v[i%3]==v[0];
     * v['B'-'A']==v[1];
     * v[i-2]==v[1];
     * v[i]==v[3];
     * v[i+1]==v[4];     
     * v[i/2.0]==erro => i/2.0==1.5 nao eh indice permitido*/
    for (int c=0 ; 5>c;++c) v[c] = c ;
    i = 3;
    printf("%s\n",(v[i%3]==v[0])?"True":"False");
    printf("%s\n",(v['B'-'A']==v[1])?"True":"False");
    printf("%s\n",(v[i-2]==v[1])?"True":"False");
    printf("%s\n",(v[i]==v[3])?"True":"False");
    printf("%s\n",(v[i+1]==v[4])?"True":"False");
    for (int c=0; c<5; ++c) printf("v[%d]=%d\n",c,v[c]);
    return 0;
}
