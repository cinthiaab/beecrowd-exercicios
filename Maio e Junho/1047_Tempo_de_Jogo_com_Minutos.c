#include <stdio.h>

void saidaTempoDeJogo(int jogo_h, int jogo_min){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", jogo_h, jogo_min);
}
int main() {
    int hora0, min0, horaf, minf, jogo_h, jogo_min;

    scanf("%d %d %d %d", &hora0, &min0, &horaf, &minf);

    if(hora0==horaf){
        if(min0==minf){
            jogo_h = 24; jogo_min = 0;
        }
        if(min0<minf){
            jogo_h = 0; jogo_min= minf-min0;
        }
        if(min0>minf){
            jogo_h = 23; jogo_min = 60-(min0-minf);
        }

    }
    if(hora0>horaf){
        jogo_h = 24-hora0+horaf;

        if(min0<=minf){
            jogo_min= minf-min0;
        }
        if(min0>minf){
            jogo_h = jogo_h -1;
            jogo_min = 60-(min0-minf);
        }
    }
    if(hora0<horaf){
        jogo_h = horaf-hora0;
        if(min0<=minf){
            jogo_min= minf-min0;
        }
        if(min0>minf){
            jogo_h = jogo_h -1;
            jogo_min = 60-(min0-minf);
        }
    }
    saidaTempoDeJogo(jogo_h, jogo_min);

    return 0;
}
