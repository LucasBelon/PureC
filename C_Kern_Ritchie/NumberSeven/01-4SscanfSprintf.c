/* It seems that scanf and printf has cousins.
 * sprintf and sscanf are a good way to compound
 * data and to convert while doing this. 
 *
 * Master example:
 * sprintf( string, control, arg1, arg2, ...)
 * It get's the arg1, arg2... format it with the control and
 * stores on string.
 * sprintf( string, "My name is %s, I'm %d years old", (char name[]) , (int age)  )"
 *
 * sscanf( string, control, arg1, arg2, ...)
 * */

# include <stdio.h>

int main(){
    int i ;
    float x;
    char name[50] ;

    printf("First Example:\n") ;
    i = 35 ;
    x = 0.543 ;
    sprintf(name, "temp%d", i) ;
    /* It creates a string "temp35" in the name variable.*/
    printf("%s\n", name) ;

    printf("\nSecond Example:\n") ;

    /* It does the opposite convertion. It searches in the string
     * some data to put inside the variable.
     * It's a very clever function*/
    char newstring[] = "My name is Lucas I'm 24 years old" ;
    sscanf(newstring, "My name is %s I'm %d years old", name, &i) ;
    printf("name: %s\nAge: %d\n", name, i) ;

    return 0 ;
}
