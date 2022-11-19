/* This is a version of our cat function, but with
 * error handling. */


# include <stdio.h>
# include <stdlib.h>

int copy_arq(fp) /* It copies the file fp on the stdout */
FILE *fp ;
/* We should read fp as a file pointer.*/
{
    int c;

    while ((c=getc(fp)) != EOF ){
        putc(c, stdout);
    }
    return 0 ;
}



int main(argc, argv) /* Cat: conCATenate.*/
int argc;
char *argv[];
{
    FILE *fp, *fopen();

    if (argc == 1){ /* no arg.: Copy the stdin to the stdout */
        copy_arq(stdin);
    }
    else{
        while(--argc > 0){
            if((fp = fopen(*++argv, "r")) == NULL){
                fprintf(stderr,
                        "cat: can't open %s\n", *argv);
                exit(1);
            }
            else{
                copy_arq(fp);
                fclose(fp);
            }
        }
    }
    exit(0) ;
}

/* Our programs can show errors in two ways.
 * fprintf goes to the stderr, and get printed on 
 * the user terminal instead of vanishing in a pipe 
 * our output file.
 * The program ends when the function exit is called
 * The exit function as in the stdlib will call fclose to empty 
 * any active buffer. Later it will call a function called 
 * _exit that ends the program without any buffer verification.
 * The argument that exit carries can be shared among processes,
 * that will know if it ended well or if something weird happened.*/
