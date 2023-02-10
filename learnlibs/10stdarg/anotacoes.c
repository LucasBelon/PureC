/* */

#include <stdarg.h>
#include <stdio.h>

int va_fputs(FILE *str, ...) {
  /* write zero or more strings */
  char *s;
  int status = 0;
  va_list ap;
  va_start(ap, str);
  while ((s = va_arg(ap, char *)) != NULL)
    if (fputs(s, str) < 0)
      status = EOF;
  va_end(ap);
  return (status);
}

int main(void) {
  va_fputs(stdout, "eu", "certamente", "não", "Sou", "normal", NULL);
  return 0;
}
