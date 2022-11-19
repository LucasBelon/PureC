/* This program is used to understand better what a array is
 * and how to interpret them*/

# include <stdio.h>

int main(){
    int s[50];
    int i;

    for (i=0;i<50;++i){
        s[i] = i*i;
        printf("%d\n",s[i]);
    }
    printf("Your array there:\n");

    printf("%d", s[0]);
    i = 1;
    while(i < 50){
        printf(",%d",s[i]);
        ++i;
    }
    printf("\n");
}
/* On line 7 we create an array with 50 slots. These slots will be filled
 * with elements of integer type. We implement a index counter named "i" which
 * will be used to fill with non null items our array.*/
