/* As cadeias de freeman sao usadas para representar objetos a 
 * partir da codificacao de seus contornos. Para montar a cadeia 
 * de freeman de um determinado objeto, partimos do principio que 
 * ele pode ser enquadrado num plano reticulado e que, de um ponto 
 * P qualquer desse plano, podemos nos mover para oito posicoes 
 * distintas.
 *
 *    ____
 *   /    |_       3 2 1
 *  /       |       \|/
 * |        |     4--+--0
 *  \      _|       /|\
 *   \____|        5 6 7
 *
 *
 * Escolhido o ponto P como origem, a cadeia eh montada seguindo-se 
 * o contorno do objeto no sentido horario. Por exemplo, para o 
 * objeto montado na figura acima, a codificacao de freeman eh : 
 * (1,5) 11000060666464444332.
 * 
 * a) Sabendo-se que os movimentos horizontais e verticais 
 * contribuem com 1 unidade e que os movimentos diagonais
 * contribuem com 1.42 unidades de comprimento, codifique uma 
 * funcao que recebe uma cadeia de freeman e devolve o perimetro 
 * da figura representada pela cadeia. 
 *
 * b) Encontre uma forma de calcular a área de uma figura a 
 * partir da sua cadeia de Freeman e codifique uma funcao que 
 * implemente essa ideia.
 *
 * c) Codifique uma funcao que desenha uma figura no video a 
 * partir da sua cadeia de Freeman. [Dica: use os caracteres 
 * |, /, -, \.] ESTE NAO SERA FEITO */


# include <stdio.h>

# define DIST_DIAG 1.4142135623730951
//Distancia de uma diagonal (sqrt(2))

# define MAX 100
//Tamanho maximo admissivel para a sequencia de freeman



void separa_freeman(original, freeman, ponto_inicial)
    char original[]; //Cadeia original de freeman
    char freeman[]; //Vetor que armazenará as direcoes
    char ponto_inicial[]; //Vetor que armazenara ponto inicial
/* Essa funcao quebra a cadeia de freeman em duas, de forma
 * que se possa usar separadamente as direcoes que a 
 * sequencia possui do ponto inicial dessa sequencia.
 * Sequencia do Exemplo: (1,5) 11000060666464444332 */
{
    int i = 0;
    int j = 0;
    while (original[i] != '\0'){
        if ( (i > 5) && (original[i] >= 48) && (original[i] <= 57) ) {
        // Testa para original[i] ser caractere numerico
        // e parte da sequencia (nao ponto inicial).
            freeman[j] = original[i];
            ++j;
        }

        else if ( original[i] == '(' ) 
            ponto_inicial[0] = original[i+1];
        // Testa para encontrar o x do ponto inicial

        else if ( original[i] == ')' ) 
            ponto_inicial[1] = original[i-1];
        // Testa para encontrar o y do ponto inicial

        ++i;
    }
    // Adicionamos o '\0' para indicar o fim da string
    // em ambos os vetores
    ponto_inicial[2] = '\0';
    freeman[j] = '\0';
}


float dist_Seq_Freeman(sequencia)
    char sequencia[]; //Vetor que armazena direcoes
/* Esta Funcao usa um switch para adicionar
 * a uma variavel a distancia percorrida
 * passo a passo durante a sequencia.
 * Como temos apenas 2 possibilidades de
 * distancias, usamos cases sem break para
 * nos aproveitar do overflow e escrever
 * um codigo mais enxuto.*/
{
    int i = 0;
    float dist = 0;
    while(sequencia[i]!='\0'){
        switch(sequencia[i]){
            case '1':
            case '3':
            case '5':
            case '7':
                dist += DIST_DIAG;
                break;
            case '0':
            case '2':
            case '4':
            case '6':
                dist += 1;
                break;
        }
        ++i;
    }
    return dist;
}


void muda_coordenada(coord, direcao)
    int coord[];    //Coordenadas (x,y) do ponto
    char direcao;         //Direcao unitaria a ser seguida
/* Para o calculo de areas sera usado o 
 * metodo de gauss para poligonos 
 * irregulares. Esta funcao altera as
 * coordenadas (x,y) de acordo com
 * a sequencia, novamente empregando o 
 * uso do switch*/
{
    switch(direcao){
        case '0':
            coord[0] += 1;
            break;
        case '1':
            coord[0] += 1;
            coord[1] += 1;
            break;
        case '2':
            coord[1] += 1;
            break;
        case '3':
            coord[0] -= 1;
            coord[1] += 1;
            break;
        case '4':
            coord[0] -= 1;
            break;
        case '5':
            coord[0] -= 1;
            coord[1] -= 1;
            break;
        case '6':
            coord[1] -= 1;
            break;
        case '7':
            coord[0] += 1;
            coord[1] -= 1;
            break;
    }
}


float area_Gauss_Poligono(seq)
    char seq[]; //Vetor Direcoes da cadeia de freeman
/* Sera usada a funcao de mudanca
 * de coordenada para simplificar 
 * a implementacao. O metodo de gauss
 * eh feito de modo que 
 * 2*Area = Soma( abs( x(n)*y(n+1) - y(n)*x*(n+1) ) ) 
 * OBS: O ponto inicial nao influencia na area do poligono*/
{
    float   soma = 0;
    int     contador = 0;
    int     coord[] = {0, 0};
    int     coord_temp[] = {0, 0};
    
    while (seq[contador] != '\0'){
        coord_temp[0] = coord[0];
        coord_temp[1] = coord[1];

        muda_coordenada(coord, seq[contador]);

        soma += (coord_temp[0] * coord[1] \
               - coord_temp[1] * coord[0]);

        ++contador;
    }

    if (soma<0) 
        soma *= -1;

    return (soma / 2);
}


int main(void){
    /* Executamos cada uma das funcoes e mostramos seu resultado
     * usando como dados iniciais a sequencia original dada no 
     * enunciado.*/
    char Freeman_Original[] = "(1,5) 11000060666464444332";
    char posicaozero[3];
    char sequencia[MAX];

    separa_freeman(Freeman_Original, sequencia, posicaozero);

    float perimetro;
    perimetro = dist_Seq_Freeman(sequencia);
    printf("Perimetro = %f unidades\n", perimetro);

    float area;
    area = area_Gauss_Poligono(sequencia);
    printf("Area = %f unidades^2\n",area);

    return 0 ;
}
