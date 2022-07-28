/* Switch & Case */

# include <stdio.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    while(n<6){
        switch(n){
            case 1: putchar('A');break;
            case 3: putchar('B');
            case 4: putchar('C');break;
            default: printf("*");
            case 5: putchar('D');
        }
        printf(".\n");
        printf("Digite um numero:\n");
        scanf("%d",&n);
    }
    
    return 0;
}
