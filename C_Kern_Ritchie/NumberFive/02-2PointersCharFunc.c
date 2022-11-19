/* This program is at page 98.
 * Here we'll implement three examples of a function that
 * copies a string from 's' to 't'. What we must keep or eyes
 * on is at the syntax and the way we can shrink some operations.
 * The last example is the most hard to understand on a first
 * sight, but we must improve our knowledge of the language and
 * it's syntax*/


# include <stdio.h>
/* This first uses our [] syntax. We also use a while loop
 * with a 'i' counter, and reference the end of the string
 * with the '\0' char. Char by char they get copied from 
 * 's' to 't'*/
void personal_strcpy(s,t) /* Copy the string s to the string t */
char s[], t[] ;
{
    int i ;

    i = 0 ;
    while ( (s[i]=t[i]) != '\0'){
        ++i ;
    }
}

/* On this second example we use the * syntax. We
 * don't need to use the counter anymore, cause as
 * soon as we get to the final character '\0' soon we'll
 * end the loop.*/
void second_personal_strcpy(s,t)
char *s, *t ;
{
    while ((*s = *t) != '\0'){
        ++s;
        ++t;
    }
}


/* Now the hardest one. First we get the value of the
 * pointer, and then we improve it by one with the ++.
 * Later we access the value of the second pointer and 
 * overwrite it with whatever is at *s. And then we improve 
 * it by one. It's hard to see, but it's a short piece of
 * line that is a hell to understand what's happenning, and
 * I may be wrong. The last important thing to see is that,
 * as the '\0' char is actually an zero, and zero means
 * False, the while loop will break anyway.*/
void third_personal_strcpy(s,t)
char *s, *t ;
{
    while((*s++ = *t++));
}


int main(){
    return 0 ;
}
