/* When we use a library we usually make use of the
 * #include, and the <> instead of the quotes are there
 * so the compiler is able to find the program in the
 * "include" directory, usually located at /usr/include/
 * in unix-like systems.
 *
 * The function getchar() gets the input from the stdin,
 * i.e. the terminal entry, and reads from there. 
 * We can redirect the entries on a Unix system by using
 * the > operator on the shell.
 * 
 * An example from the book is
 * $ prog < entryfile 
 * And a second example is
 * $ anotherprog | prog 
 *
 * Let's try to use some old programs to do it.
 * I'll compile the 00-1CharInWordCount.c, a version with
 * some changes of 08-2CharInWordCount.c from chapter one,
 * it will gives us a histogram of the words used. We need
 * to add a way to the program to stop. It seems that
 * our program won't append any data before it ends.
 * At last, we can do the redirection of data.
 * The commands where:
 *
 * $ echo "my name is Lucas, this is my histogram" >> outfile.txt
 * $ ./a.out >> outfile.txt
 * my name is Lucas, this is my histogram +
 * $ cat outfile.txt
 * 
 * It worked well.
 *
 * Now I want to see how a function with more returns will work*/

# include <stdio.h>
# define LEN 10
int main(){
    int a[LEN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    int i;
    for (i = 0 ; (i+1) <= LEN; ++i){
        printf("%d", ((*(a+i))+'\0'));
    }
    printf("\n") ;
    return (0);
}

/* We're not redirecting the return's of our functions,
 * we're redirecting the values that goes to our stout, or
 * to make it simple, anything that shows up on our terminal.*/
