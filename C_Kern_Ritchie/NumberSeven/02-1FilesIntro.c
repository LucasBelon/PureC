/* There are rules so we can operate with files.
 * First, before we can read or write a file, we need
 * to open it. We'll use the fopen() function.
 * FILE is a type of data, as int is.*/


# include <stdio.h>

int main(){
    FILE *fopen(), *fp ;
    /*fp = fopen(name, mode);
     * name is the the name of the file.
     * mode is the mode which the file will be open.
     * The modes are: "r" for read, "w" for write or
     * "a" for append.
     * We're entering in a new domain. We'll need functions
     * that will work with files. We need to understand which
     * variable is a pointer, and which one isn't
     * We can use the macro |# define | to use getc and putc
     * to be able to put data on our buffer, in this form:
     * # define getchar() getc(stdin)
     * # define putchar() putc(c, stdout)
     *
     * This program is only for comments about the structure*/


    return 0 ;
}
