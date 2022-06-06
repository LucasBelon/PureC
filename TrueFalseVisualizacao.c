/* */

# include <stdio.h>

int main(){
    int TRUEint, FALSEint;
    char TRUEchar, FALSEchar;
    float TRUEfloat, FALSEfloat;
    TRUEint = (1==1);
    TRUEchar = (1==1);
    TRUEfloat = (1==1);
    FALSEint = (1<0);
    FALSEchar = (1<0);
    FALSEfloat = (1<0);

    printf("True int:%d\n\
True char:%c\n\
True float:%f\n\
False int:%d\n\
False char:%c\n\
False float:%f\n\
\n\
",TRUEint, TRUEchar, TRUEfloat\
, FALSEint, FALSEchar, FALSEfloat\
);

    return 0;
}
