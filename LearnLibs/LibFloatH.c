/* */

# include <stdio.h>
# include <float.h>

int main(void){
    printf("RADIX: %d\n", FLT_RADIX);
    printf("DIGITS: %d\n", FLT_DIG);
    printf("MAX: %f\n", FLT_MAX);
    printf("EPSILON: %f\n", FLT_EPSILON);
    printf(
    "MAX EXP 10: %d\n", FLT_MAX_10_EXP);
    printf(
    "MIN EXP 10: %d\n", FLT_MIN_10_EXP);
    printf("MANT DIG: %d\n", FLT_MANT_DIG);
    printf(
    "HAS SUBNORM: %d\n", FLT_HAS_SUBNORM);

    long double x = 1;
    char a=0;
    for(int i=0;1;i++){
        printf("i=%d:\n%.1075Lf\n",i, x);
        x /= 2;
        if (!(i%1075))
        scanf("%c",&a);
    }

    return 0;
}
