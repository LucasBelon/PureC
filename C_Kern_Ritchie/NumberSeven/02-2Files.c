/* This is an implementation in opening files.
 * It's not exactly as in the book, at page 142,
 * but it should do the same as in the book*/

/* This program as a whole is a copy of the cat function.
 * It will redirect the file's data to the stdout.
 * If no file is given, then it will copy from stdin.*/

# include <stdio.h>


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



int main(argc, argv)
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
                printf("cat: can't open %s\n", *argv);
                break;
            }
            else{
                copy_arq(fp);
                fclose(fp);
            }
        }
    }
    return 0 ;
}

/* The stdin and stdout pointers are predefined
 * on the stdio library, and they can be used 
 * anywhere we can use an object of FILE * tipe.
 * They're constants, however, not variables.
 * You should not try to assing anything to them.*/
