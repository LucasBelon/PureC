/* I'm not on the mood, the readline function is missing
 * and there's a "index" function that I don't have any idea
 * where it appears at the book. Anyway, it's the skeleton of
 * a function that will work on the shell, with optional
 * arguments and stuff. It's pretty nice the way it mixes
 * all the commands that C has to offer, and to be able to
 * create a program that is actually helpful with flags is
 * amazing*/

/* It is missing the topic: Pointers to functions 
 * I've read the chapter again, and it's still a 
 * ominous subject.*/


# include <stdio.h>
# include <string.h>
# define MAXLINE 1000


int main(argc, argv)
int argc;
char *argv[] ;
{
    char line[MAXLINE], *s;
    long num_line = 0;
    int delete = 0, enumerate = 0;

    while(--argc > 0 && (*++argv)[0] == "-"){
        for (s = argv[0]+1 ; *s!="\0" ; ++s){
            switch(*s){
                case 'x':
                    delete = 1 ;
                    break ;
                case 'n':
                    enumerate = 1 ;
                    break ;
                default:
                    printf("find: illegal option: [%c]\n", *s) ;
                    argc = 0 ;
                    break ;
            }
            if (argc != 1){
                printf("Syntax: fin -x -n [pattern]\n") ;
            }
            else {
                while (readline(line, MAXLINE) > 0) {
                    ++ num_line ;
                    if ( (index(line, *argv) >=0 ) != delete) {
                        if (enumerate){
                            printf("%ld: ", num_line) ;
                        }
                        printf("%s", line) ;
                    }
                }
            }
        }
    }
    return 0 ;
}
