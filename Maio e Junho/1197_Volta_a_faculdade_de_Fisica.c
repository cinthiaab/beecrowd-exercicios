#include <stdio.h>

int main() {
    int v, t, d;
    // Variáveis - Velocidade, tempo e deslocamento, repectivamente.
    while(scanf("%d %d", &v, &t) != EOF){
        d = v*t*2;//Calculo do deslocamento no dobro do tempo fornecido
        printf("%d\n", d);
    }

    return 0;
}
