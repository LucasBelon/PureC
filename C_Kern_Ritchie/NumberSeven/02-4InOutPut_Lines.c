/* The stdlib has a routine named fgets.
 * We can read it as file get string.
 * It seems like the readline function that
 * we wrote earlier on the book.*/

/* The following line
 * fgets(line, MAXLINE, fp)
 * it reads the next line of the input
 * including the new-line character, from
 * the fp file. The resultant line is ended
 * with the \0 character.
 *
 * For the output, the function fputs write 
 * a string, which don't need to contain a 
 * new-line character, in a file.*/

/* To show that there's no magic in those functions
 * we'll copy them directly from the stdio lib*/

# include <stdio.h>
#include <stdlib.h>

char *fgets(s, n, iop) /* Get 'til n characters from iop */
char *s ;
int n ;
register FILE *iop ;
{
    register int c;
    register char *cs;

    cs = s;
    while ( --n > 0 && (c=getc(iop)) != EOF){
        if ((*cs++=c) == '\n'){
            break;            
        }
    }
    *cs = '\0' ;
    return ((c == EOF && cs ==s) ? NULL : s);
}


int fputs(s, iop) /* Write the s string no the iop file*/
register const char *s;
register FILE *iop;
{
    register int c;

    while ( (c = *s++) ){
        putc(c, iop);
    }
    return 0;
}


/* We've reached the end of a new chapter, and here's some
 * additional information
 *
 * Some Diverse functions
 * isalpha(c) returns 0 if not alpha
 * isupper(c) returns 0 if not upper
 * islower(c) returns 0 if not lower
 * isdigit(c) returns 0 if not digit
 * isspace(c) returns 0 if not space
 * toupper(c) converts to upper cased
 * tolower(c) converts to lower cased.
 * 
 * ungetc(c, fp)
 * ungetc is a more restricted version of ungetch from chapter four.
 * It gives back the c character to the fp file., only one character
 * given back is allowed by file.
 *
 * System Call
 * We can execute a system command with system(s), as like in the
 * example below. */

int main(){ system("ncal"); return 0;}

/* Memory Management
 * We can also manage our memory with calloc(n, sizeof(object));
 * it returns a pointer to to n objects with the specified lenght, 
 * or NULL if it can't be done.
 * The storage initiates with the zero value.
 * The pointer has the correct alignment for the current object, but
 * it must be forced to the apropriate type, as it follows:*/

int func()
{
char *calloc();
int *ip;
int n ;

ip = (int*) calloc(n, sizeof(int); 
}

/* Finally, we can free our space with cfree(p);
 * It's a serious mistake to erase something not 
 * obtained with calloc.*/
