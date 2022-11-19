/*  Defina um tipo de estrutura nomeada para representar 
 *  pontos no plano através de suas coordenadas cartesianas. 
 *  Em seguida, crie uma função para calcular a distância 
 *  entre dois pontos e codifique um programa para testar 
 *  seu funcionamento. Use a função scanf() para inicializar 
 *  os campos membros das variáveis com valores 
 *  lidos do teclado.*/

# include <stdio.h>
# include <math.h>

struct cartesiano {
    float y;
    float x;
};


float dist_pontos(struct cartesiano a, struct cartesiano b)
{
    float distancia;
    a.x = a.x - b.x;
    a.y = a.y - b.y;
    distancia = sqrtf(powf(a.x,2)+powf(a.y,2));
    return distancia;
}


int main(void){
    struct cartesiano ponto_a, ponto_b;
    
    printf("Digite as coordenadas (x,y) do ponto a:");
    scanf("%f %f",&ponto_a.x, &ponto_a.y);
    
    printf("Digite as coordenadas (x,y) do ponto b:");
    scanf("%f %f",&ponto_b.x, &ponto_b.y);

    printf("A distancia cartesiana eh: %.2f\n",
            dist_pontos(ponto_a, ponto_b));

    return 0 ;
}
