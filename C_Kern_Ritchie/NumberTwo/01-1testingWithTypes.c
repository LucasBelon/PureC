/* There are errors that compilers can't be aware of, the
 * runtime errors. In this case, the program will not run
 * because of a type conversion that goes wrong. However, it
 * will compile anyway, 'cause no syntax or statements will
 * get wrong.
 * This program is meant to be an experiment with printing
 * different types with different values. It's more like a 
 * "let's find out what printf does" than anything else.
 * It's not on the book, but it uses a lot of what is written 
 * there.*/

# include <stdio.h>

# define ALIMFORM '\014' /* "Form Feed in ASCII" */
# define MAXLINHA 1000
# define SUCCESS 1
# define PERSONALSTRING "A string of characters"
int main(){

    char linha [MAXLINHA + 1] ;

    int hours = 3 ;

    double seconds = 60 * 60 * hours ;

    char string[30] = PERSONALSTRING ;


    printf("Hours - int\n\n") ;
    /* Error messages comes from the usage of incorect types
     * at the printf function. It doesn't like to convert our
     * variables */

    printf("%%f float: %6.0f ,%%o octal: %o\n", hours, hours) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", hours, hours) ;
    printf("%%c character: %cc", hours) ;
/*    printf("%%s string: %s", hours) ;     */

    printf("\n\nSeconds - double\n\n") ;

    printf("%%f float: %6.0f ,%%o octal: %o\n", seconds, seconds) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", seconds, seconds) ;
    printf("%%c character: %cc", seconds) ;
/*    printf("%%s string: %s", seconds) ;*/

    printf("\n\nString - array[30]\n\n") ;

    printf("%%f float: %6.0f ,%%o octal: %o\n", string, string) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", string, string) ;
    printf("%%c character: %cc", string) ;
    printf("%%s string: %s", string) ;

    printf("\n\nALIMFORM -'\\014' \n\n") ;

    printf("%%f float: %6.0f ,%%o octal: %o\n", ALIMFORM, ALIMFORM) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", ALIMFORM, ALIMFORM) ;
    printf("%%c character: %cc\n", ALIMFORM) ;
/*    printf("%%s string: %s", ALIMFORM) ;*/

    return SUCCESS ;
}

/*  As it's easy to see, when some types of data is converted on the 
 *  printf syntax the function simply stops, what forced me to comment
 *  the lines where it happened.
 *
 *  Also, our functions needs to be declared as to the type of 
 *  response they will give to the system. I tried with void main(){}
 *  and this last form is int main, so the function can return a int value.
 *  Now I know that a program is a process, which means that, it has to 
 *  behave like a process, and with it, it needs to response to the system as
 *  a process. That's why we should never write a main function as a void type.
 *  
 *  This is related to chapter two, that starts at page 42 of the book*/
