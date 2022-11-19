/* In ambients that supports C we can pass
 * arguments from command line or parameters
 * to the main function. When main is called
 * it is called with two arguments. The first
 * usually called argc, is the number of 
 * arguments that the program was called. The
 * second, argv, is a pointer to to an array
 * of strings of chars, that contains the 
 * arguments, one for each string.
 * */


# include <stdio.h>

int main1(argc, argv) /* We'll replicate the echo function */
int argc;
char *argv[];
{
    int i;

    for (i = 1 ; i < argc; ++i){
        printf("%s%s", argv[i], (i< argc -1)?" ":"\n") ;
    }
    return 0 ;
}


/* Since argv is a pointer to an array of pointers we can 
 * use it to manipulate it as it goes:*/
int main2(argc, argv)
int argc ;
char *argv[] ;
{
    while(--argc > 0){
        printf("%s%s", *++argv, (argc>1)? " ": "\n") ;
    }
    return 0 ;
}

/* In this example we'll see an if/else in
 * the format [ (condition) ? (value if true) : (value if false) ]
 * Since what we're returning is a string we can use it inside of
 * printf.
 * We pass to printf to use argv as %s, and increment it at the same
 * time, at the same command.*/
int main3(argc, argv)
int argc ;
char *argv[] ;
{
    while(--argc > 0){
        printf((argc > 1) ? "%s " : "%s\n", *++argv) ;
    }

    return 0 ;
}
