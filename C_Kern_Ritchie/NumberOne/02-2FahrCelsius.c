/* print a Fahrenheit-Celsius conversion table
 *      for f = 0,20, ... , 300*/
main(){
    int start, end, incr ;
    float fahr, celsius ;

    start = 0 ;  /*lower limit of the table*/
    end = 300 ;  /*upper limit of the table*/
    incr = 20 ;  /*step increment*/

    fahr = start ;
    printf("This is my second program\n  Fahr \t  Celsius\n") ;
    while (fahr <= end){
        celsius = (5.0/9.0)*(fahr-32.0) ;
        printf("%4.0f°F-->%6.1f°C\n", fahr, celsius) ;
        fahr = fahr + incr ;
    }
}
/* This program is meant to show how to add a header to the 
 * table, since programs must be easily understandable.
 * Here we can notice that some statements as the if-else and the
 * for-while loops doesn't need semicolon to say that the command
 * ends, because they already have the {} system. When any of those
 * little functions only do a simple action we can omit the keys {}
 * This program is part of exercise 1-3 of page 24 of the book*/
