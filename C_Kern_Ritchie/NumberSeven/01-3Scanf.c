/* This is an example of the usage of 
 * scanf. It's kinda the opposite of
 * printf, in the way that it interacts with
 * the unix interface in the opposite direction.*/


# include <stdio.h>

int main(){
    int i ;
    float x;
    char name[50] ;

    scanf("%d %f %s", &i, &x, name) ;

    /* Example entry: 25 54.32E-1 Thompson*/

    printf("\
You wrote on the entry:\n\
%d for i\n\
%f for x and\n\
%s for name\n", i, x, name) ;

    /* This is the second example. We'll reuse
     * the declaration of i, x and name*/

    scanf("%2d %f %*d %2s", &i, &x, name);
    
    /* Example entry: 56789 0123 45a72 */

    printf("\
You wrote on the entry:\n\
%2d for i\n\
%f for x and\n\
%s for name\n", i, x, name) ;
    /* Because of the %2d it will put the 56 of our
     * 56789 number on i variable. The 789 goes to
     * x (float), the 0123 is jumped, and
     * 45 from 45a72 goes to name because of the 
     * %2s. It get's what we ask it to get.
     *
     * Since we did not put a72 on any variable,
     * if we ask for scanf again it will delivery 
     * starting by 'a' from a72
     *
     * Scanf ends when it finishes it's control
     * chain, or when some entry isn't paired with
     * the control specification. Scanf returns as
     * it's value the number of itens from entry that
     * it got and were atributed succesfully
     * 
     * The arguments to scanf MUST be pointers.*/
    return 0 ;
}
