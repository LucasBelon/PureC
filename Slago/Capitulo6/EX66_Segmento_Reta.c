/* Usando o tipo definido no exercicio 6.3, para armazenamento
 * de pontos do plano cartesiano, defina um tipo de estrutura
 * para representar segmentos de reta atraves dos seus extremos.
 * Crie uma funcao para determinar o comprimento de um tal 
 * segmento e faca um programa para testa-la*/

# include <stdio.h>
# include <math.h>

typedef struct {
    /* Define um par (x,y) de pontos cartesianos.*/
    float y;
    float x;
} CARTESIANO;

typedef struct {
    /* Define os limites de existencia de uma
     * semi-reta, de acordo com o eixo X
     * exemplo: reta = { (x, f(x)) : 0<x<20 } */
    float inicio;
    float fim;
} INTERVALO_X;

typedef struct {
    /* Define a equacao de uma reta do tipo
     * f(x) = ax+b */
    float a;
    float b;
} EQUACAO;

typedef struct {
    /* Define uma semi-reta por seu intervalo
     * de existencia e sua equacao de reta. */
    INTERVALO_X intervalo;
    EQUACAO equacao;
} SEMI_RETA;


float dist_pontos(CARTESIANO a, CARTESIANO b)
    /* Funcao que calcula distancia a partir do
     * teorema de pitagoras, aplicado a geometria
     * analitica.*/
{
    float distancia;
    a.x = a.x - b.x;
    a.y = a.y - b.y;
    distancia = sqrtf(powf(a.x,2)+powf(a.y,2));
    return distancia;
}


EQUACAO pega_equacao(CARTESIANO p1, CARTESIANO p2)
    /* Funcao que, a partir de dois pontos cartesianos
     * definidos por pares de floats, define a equacao
     * de reta (infinita)*/
{
    EQUACAO equacao;
    equacao.b = p1.x;
    equacao.a = (p2.y - p1.y)/(p2.x - p1.x);
    return equacao;
}

INTERVALO_X pega_intervalo(CARTESIANO p1, CARTESIANO p2)
    /* Funcao que admite que os pontos que definem
     * a equacao da reta tambem definem os limites
     * em que a reta esta definida.*/
{
    INTERVALO_X intervalo;
    intervalo.inicio = p1.x;
    intervalo.fim = p2.x;
    return intervalo;
}


/* Com reta = ax+b
 * tangente = derivada reta = a
 *
 * Tenho tangente = co/ca
 * 
 * quero hipotenusa 
 * sqrt (co^2 + ca^2) = hip
 *
 * intervalo_X = ca
 *
 * tg^2 * intervalo_X^2 = co^2
 * intervalo_X^2 * (1 + tg^2) = ca^2 + co^2
 * sqrt ( intervalo_X^2 * (1+tg^2) ) = hip
 *
 * hip = intervalo_X * sqrt (1+tg2)
 * garantindo que o intervalo e a constante 'a' 
 * sejam positivos teremos nossa resposta*/

float calcula_comp_semi_reta(SEMI_RETA semi_reta)
{
    float comprimento;
    float delta_x = semi_reta.intervalo.fim -
        semi_reta.intervalo.inicio;
    float tangente = semi_reta.equacao.a;
    comprimento = delta_x * sqrtf(1+powf(tangente,2));
    return sqrtf(pow(comprimento,2));
}


/* Exercicio extra, desenvolvimento proprio:
 * Faça uma funcao para analisar se um ponto
 * pertence à reta definida. Em outras palavras,
 * diga se 3 pontos sao colineares.*/
// Comentarios logo acima de funcoes ajudam minha IDE
void colinear(SEMI_RETA semi_reta, CARTESIANO ponto)
    // teste.
    /* Essa funcao calcula f(x) com x sendo
     * o ponto a ser analisado. Se houver
     * diferença entre f(x) e y do ponto, saberemos
     * que o ponto não eh colinear.*/
{
    float f_x = semi_reta.equacao.a*ponto.x + semi_reta.equacao.b;
    float dist = ponto.y - f_x;
    if (dist != 0) printf("olha a distância: %f",f_x);
    else puts("Os pontos sao colineares");
}


int main(void){
    CARTESIANO ponto_a, ponto_b, ponto_c;
    SEMI_RETA semi_reta;
    printf("Digite as coordenadas (x,y) do ponto a:");
    scanf("%f %f",&ponto_a.x, &ponto_a.y);
    
    printf("Digite as coordenadas (x,y) do ponto b:");
    scanf("%f %f",&ponto_b.x, &ponto_b.y);

    semi_reta.intervalo = pega_intervalo(ponto_a, ponto_b);
    semi_reta.equacao = pega_equacao(ponto_a, ponto_b);

    printf("A distancia cartesiana eh: %.2f\n",
            dist_pontos(ponto_a, ponto_b));

    printf(\
"A distancia calculada por equacao de reta eh: %.2f\n",
calcula_comp_semi_reta(semi_reta));

    printf("Digite as coordenadas (x,y) do ponto c:");
    scanf("%f %f",&ponto_c.x, &ponto_c.y);
    
    colinear(semi_reta, ponto_c);
    return 0 ;
}
