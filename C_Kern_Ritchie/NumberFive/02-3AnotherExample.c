/* Here we'll have another example of what
 * we got on the last file.
 * This is at page 99-100 of the book.*/

# include <stdio.h>

int Personal_strcmp(s,t)
char s[], t[] ;
{
    int i ;
    i = 0 ;
    while (s[i] == t[i]){
        if (s[i++] == '\0'){
            return 0 ;
        }
    }
    return (s[i]-t[i]) ;
}

int Personal_strcmp_withPointers(s,t)
char *s, *t ;
{
    for ( ; *s == *t ; s++ , t++ ){
        if (*s=='\0'){
            return 0 ;
        }
    }
    return (*s - *t) ;
}

int main(){
    return 0 ;
}
