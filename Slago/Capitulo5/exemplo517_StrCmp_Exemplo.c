/* Usando a funcao strcmp() */


# include <stdio.h>
#include <string.h>

int main(void){
    char x[]="um";
    char y[]="um";
    char z[]="dois";

    printf("%s==%s->%s\n", x, y, strcmp(x,y)==0?"V":"F");
    printf("%s!=%s->%s\n", x, y, strcmp(x,y)!=0?"V":"F");
    printf("%s <%s->%s\n", x, z, strcmp(x,z) <0?"V":"F");
    printf("%s >%s->%s\n", x, z, strcmp(x,z) >0?"V":"F");
    printf("%s<=%s->%s\n", z, y, strcmp(z,y)<=0?"V":"F");
    printf("%s>=%s->%s\n", z, z, strcmp(z,z)>=0?"V":"F");

    return 0 ;
}
