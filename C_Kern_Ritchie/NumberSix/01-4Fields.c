/* When we're using a hardware that is
 * very small, it happens that we may need
 * some small but yet complex enough structure.
 * We're about to see what are fields. 
 * They are a structure of bits, that fits inside
 * the size of a int. */

# define KEY_WORD 01
# define EXTERN 02
# define STATIC 04

/* With this we just declared some bits that we
 * can manipulate by using the bit operations.
 * Another way to do it is by putting them together
 * inside a structure, it ends by looking like this: */


# include <stdio.h>

int main(){
    struct {
    unsigned is_keyword : 1 ;
    unsigned is_extern : 1 ;
    unsigned is_static : 1 ;
    } signals ;
    return 0 ;
}
