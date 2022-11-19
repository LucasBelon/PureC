/* Exibindo tabuadas.*/


# include <stdio.h>

int main(){
    int n, c, r;

    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &n);

    for (c=1; c<=10; c++){
        r = n*c;
        printf("%2d x %2d = %3d\n", n, c, r);
    }

    return 0 ;
}
