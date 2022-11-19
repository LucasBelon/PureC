/* print a Celsius-Fahrenheit conversion table
 * with a for loop.*/
main(){
    int fahr ;
    printf("This is my third program\n  Fahr \t Celsius\n") ;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%4d°F %6.1f°C\n", fahr, (5.0 / 9.0) * (fahr - 32)) ;
    }
}
/* On the first argument we see the lower limit. On the second the upper limit.
 * On the third the loop step.
 * Its 3 main parts are: Start, if true continue, reboot with step
 * With 'for loops' we can use multi index operations, like:

for (i = 0, j = 1000 ; i < j ; i++, j--){}

 * This code is on page 24-25. */
