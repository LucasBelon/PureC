/* Top Level function for use with
 * setjmp*/

#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
# define reporterror printf("deu_merda\n");

static jmp_buf jmpbuf;
void process(void){printf("Hello World\n");}
void top_level(void) {
    /* the top-level function */
    for (;;)
        switch (setjmp(jmpbuf)) {
            /* switch on alternate returns */
            case 0: /* first time */
                process();
                return;
            case 1: /* restart */
                reporterror 
                break;
            case 2: /* terminate */
                reporterror
                return;
            default: /* unknown longjmp argument */
                reporterror
                return;
        }
}

