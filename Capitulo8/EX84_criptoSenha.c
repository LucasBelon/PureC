/* A operação ou-exclusivo bit-a-bit (^),
 * tem a seguintes propriedades: 
 * (i) x^0 = x, (ii) x^x = 0 e 
 * (ii) (x^y)^z = x^(y^z). 
 * Usando essa operação podemos criar um
 * método de criptografia com senha. 
 * Seja m um caracter da mensagem e s um 
 * caracter da senha. Para criptografar m, 
 * fazemos m^s e obtermos o caracter 
 * criptografado c. Para ter m de volta, 
 * basta fazer c^s. Como c = (m^s), pelas 
 * propriedades acima, segue que 
 * c^s = (m^s)^s = m^(s^s) = m^0 = m. 
 * Usando esse método, crie um programa 
 * para criptografia que receba a senha e 
 * os nomes dos arquivos de origem e 
 * destino via argumentos da linha de 
 * comando. [Dica: utilize as letras da 
 * senha ciclicamente, de modo que os 
 * caracteres da mensagem não sejam 
 * criptografados sempre com a mesma letra]*/

/* Vou colocar apenas os nomes dos arquivos
 * na linha de comando, e pedir a senha 
 * manualmente (faz mais sentido. Imagina se
 * tentarmos força bruta).*/

# include <stdio.h>
# include <stdlib.h>

int main(int argc, char **argv){
    FILE *e, *s;

    char *arq_Entr = *(argv+1) ,
         *arq_Saida = *(argv+2),
         senha[100],
         temp_char;

    puts("Senha:");
    scanf("%s", senha);
    
    if((e=fopen(arq_Entr,"rb"))==NULL){
        puts("Leitura ruim.\n");
        exit(1);
        }
    if((s=fopen(arq_Saida, "wb"))==NULL){
        puts("Escrita ruim.\n");
        exit(1);
        }
    
    for(int i=0;!feof(e);++i){
        temp_char = fgetc(e)^senha[i];
        fputc(temp_char, s);
        if(senha[i]=='\0') 
            i=0;
    }
    fclose(s);
    fclose(e);
    return 0;
}
/*
!cc % && 
./a.out Exemplo.txt Ex_copia.txt &&
rm a.out

!cc % &&
./a.out Ex_copia.txt Descript.txt && 
rm a.out 
*/
