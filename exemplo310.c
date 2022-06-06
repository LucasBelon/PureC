/* */

# include <stdio.h>

int main(){
    int n, k;

    printf("Digite um numero natural:");
    scanf("%d", &n);

    for (k=2; k<=n-1; k++){
        if ( n%k==0 ) break;
    }
    if (k==n) printf("Seu numero eh primo\n");
    else printf("Seu numero nao eh primo\n");
    return 0;
}
