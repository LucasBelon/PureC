/* This program is a example of symbolic constants 
 * They're a way to remove meaningless numbers from
 * the code. This way we can use names instead of
 * numbers. We're actually adding a level of abstraction
 * to make our code understandable*/

#define START   0   /* lower limit of the table */ 
#define END     300 /* upper limit of the table */ 
#define INCR    20  /* increment of the table */

main(){
    int fahr ;
    printf("This is my fourth program\n  Fahr \t Celsius\n") ;
    for (fahr = START; fahr <= END; fahr = fahr + INCR){
        printf("%4d°F %6.1f°C\n", fahr, (5.0 / 9.0) * (fahr - 32)) ;
    }
}

/* This code is on page 26 of the book 
 * The #define is what's called a macro. It will replace whatever
 * we ask it to replace. So, when we're writing START our compiler
 * will do the substitution before it really compile. It's called the
 * C pre-processing.*/

