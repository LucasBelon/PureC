/* A structure is a collection of one or more variables
 * put together under a single name for convenient 
 * manipulation.
 * They help at the organization of complex data*/


# include <stdio.h>

int main(){

    struct data {
    int day ;
    int month ; 
    int year ;
    int years_day ;
    char month_name[4] ;
    } ;

    /* When a struct is declared it doesn't create any variable.
     * The data is the nickname of that structure. It means that
     * we must initialize the struct as below. 'd' will become a 
     * structure in the mold of data*/

    struct data first_structure ;
    first_structure.day = 2 ; 
    /*first_structure is the structure, and day is a member of the structure*/
    printf("first_structure.day = %d\n", first_structure.day) ;


    /* We can do the same in an other way, by not giving the structure
     * a nickname. It will work as the same as 'int j, k, l', but uglier.*/
    struct {
    int day ;
    int month ; 
    int year ;
    int years_day ;
    char month_name[4] ;
    } second_structure, c, d ;

    second_structure.year = 1998 ;
    c.day = 30 ;
    d.month = 7 ;
    printf("second structure year = %d\n", second_structure.year) ;
    printf("c day = %d\n", c.day) ;
    printf("d month = %d\n", d.month) ;

    /* And at last, we can initialize each field of our structure*/
    struct data third_structure = {7, 9, 1822, 250, "set"} ;
    printf("third structure month name = %s\n", third_structure.month_name) ;
    *(third_structure.month_name) = 'f' ;
    *(third_structure.month_name+1) = 'e' ;
    *(third_structure.month_name+2) = 'b' ;
    // It's hard to play with strings, but it's doable.
    printf("third structure month name = %s\n", third_structure.month_name) ;
    return 0 ;
}
