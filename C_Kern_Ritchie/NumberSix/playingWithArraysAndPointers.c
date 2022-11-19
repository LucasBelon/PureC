/* Just trying to remember about arrays and pointers */


# include <stdio.h>

int main(){
    char nome[3] = "Eu" ;
    printf("%s\n", nome);

    char *index ;
    index = nome ;
    (*(index)) = 'v';
    (*(index+1)) = 'c';
    printf("%s\n", nome);

    (*(nome)) = 'w';
    (*(nome+1)) = 'e';
    printf("%s\n", nome);

    return 0 ;
}

int mainTwo(){
    int *p, a ;
    char *p_2, b ;
    double *p_3, c ;
    long long int *p_4, d ;
    long double *p_5, e ;

    a = 3 ;
    p = &a ;

    b = 'T' ;
    p_2 = &b ;

    c = 3.876543 ;
    p_3 = &c ;

    d = 999999999999999999 ;
    p_4 = &d ;

    e = 43143124312.4123431243124132 ;
    p_5 = &e ;

    printf("int a = %d, point *p = %d, size = %d \n",a, *p, sizeof(p) ) ;
    printf("char b = %c, point *p_2 = %c, size = %d \n", b, *p_2, sizeof(p_2) ) ;
    printf("float c = %f, point *p_3 = %f, size = %d\n", c, *p_3, sizeof(p_3) ) ;
    printf("long long int d = %lld, point *p_4 = %lld, size = %d\n", d, *p_4, sizeof(p_4) ) ;
    printf("long double e = %Lf, point *p_5 = %Lf, size= %d\n", e, *p_5, sizeof(p_5) ) ;
    printf("Arrays has the same 'sizeof' of a int, which is 4 bytes") ;

    return 0 ;
}

