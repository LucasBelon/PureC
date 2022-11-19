/* In this program we will see something
 * that is similar to creating an alias to
 * the type of a variable. It helps to make
 * our program easier to maintain, and we can
 * change the type of data which we're working
 * with, only by changing a small piece of code.*/


# include <stdio.h>
# define LINES 10 ;
int main(){
    
    typedef int SIZE ;
    SIZE siz, sizmax ;
    SIZE *sizes[] ;

    typedef char *STRING ;
    STRING p, aline[LINES], aloc() ;

    typedef struct node { /*The basic node*/
        char *wor; /*Points to the text*/
        int count; /*Number of occurencies*/
        struct node *left; /*Left Child*/
        struct node *right; /*Right Child*/
    } NODE, *PNT_NODE;
    PNT_NODE aloc_node()
    {
        char *aloc();
        return((PNT_NODE) aloc(sizeof(NODE));
    }

    return 0 ;
}
