/* Codifique um programa para criar
 * a configuração representada na 
 * figura 7.6 e exibir a letra 'A' 
 * a partir de cada uma das variáveis.
 *
 *   p      q       r       s       t
 *  +-+    +-+     +-+     +-+     +-+
 *  |+|--->|+|---->|+|---->|+|---->|A|
 *  +-+    +-+     +-+     +-+     +-+
 *  Figura 7.6 */


# include <stdio.h>

int main(void){
    char t = 'A';
    char* s = &t;
    char** r = &s;
    char*** q = &r;
    char**** p = &q;

    printf("\
Ponteiro P:%c\n\
Ponteiro Q:%c\n\
Ponteiro R:%c\n\
Ponteiro S:%c\n\
Ponteiro T:%c\n\
",
****p,
 ***q,
  **r,
   *s,
    t);
    return 0 ;
}
