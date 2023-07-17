//CALCULADORA LANÇAMENTO OBLÍQUO (EQUAÇÃO FUNDAMENTAL)
//valores notáveis

/*decorar apenas
 - decomposição das acelerações 
 - equação da posição (deriva pra chegar na velocidade)
 - alcance/amplitude
 - ponto máximo em py
 - tempo total
o resto é deduzível
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    printf("\n :p Lançamento em Plano Inclinado 8) (SI)\n");

    float gravidade, velocidade, tempo, alfa, phi, beta, vx, vy, tempo_total, amplitude, amplitude_max, px, py, px_total, py_total;

    printf("\n gravidade \n");
    scanf(" %f", &gravidade);

    printf("\n velocidade \n");
    scanf(" %f", &velocidade);

    printf("\n insira um tempo arbitrário \n");
    scanf(" %f", &tempo);
    
    printf("\n angulo de lancamento no plano \n");
    scanf(" %f", &alfa);

    printf("\n angulo do plano \n");
    scanf(" %f", &phi);

    alfa = alfa * M_PI / 180;
    phi = phi * M_PI / 180;
   
    px = velocidade * cos(alfa) * tempo + (gravidade / 2) * pow(tempo, 2) * sin(phi);
    py = velocidade * sin(alfa) * tempo - (gravidade / 2) * pow(tempo, 2) * cos(phi);

//decorar apenas a equação da posição, pois basta derivar pra chegar na velocidade.

    vx = gravidade * tempo * cos(phi) - velocidade * sin(alfa);
    vy = gravidade * tempo * sin(phi) + velocidade * cos(alfa);
    
    tempo_total = (2 * velocidade * sin(alfa)) / (gravidade * cos(phi));

    amplitude = 2 * (pow(velocidade, 2) * sin(alfa) * cos(alfa - phi)) / (gravidade * pow(cos(phi), 2));

    amplitude_max = pow(velocidade, 2) * (1 + sin(phi)) / (gravidade * pow(cos(phi), 2));
   
    printf("\nPosição x em tempo %f: %f m \n", tempo, px);

    printf("Posição y em tempo %f: %f m \n", tempo, py);
    
    printf("\nVelocidade x em tempo %f: %f m/s\n", tempo, vx);

    printf("Velocidade y em tempo %f: %f m/s\n", tempo, vy);
    
    printf("\nTempo total de queda: %f s\n", tempo_total);
    
    printf("Amplitude: %f m\n", amplitude);

    printf("Amplitude máxima para plano de %f graus: %f m\n", phi, amplitude);

    return 0;
}
