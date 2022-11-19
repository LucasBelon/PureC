/* As an example let's use an array of struct
 * to create the skeleton of a binary tree
 * that will be used to count the number of 
 * occurrences of a word at a C source code.*/


# include <stdio.h>

int main(){
    struct node { /* The node */
        char *tex ; /* Points to text */
        int count ; /* Number of occurrences of a word */
        struct node *left ; /* left son */
        struct node *right ; /* right son */
    } ;
    /* Structs can't be recursive, but we're not creating
     * a node inside a node. We're creating a pointer that
     * points to a node. It's the link between different nodes.*/

    return 0 ;
}
