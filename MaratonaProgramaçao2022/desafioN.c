// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int N, K, L, i, somaLados, a=0;

    scanf("%d", &N);// numero de cartas

    int cartas[2][N];

    do{
        for(i=0; i<N; i++){
            scanf("%d", &cartas[a][i]); //leitura dos numeros da das cartas
        }
        a++;
    }while(a<2);

    scanf("%d %d", &K, &L);
    int maiorSoma=0, iMaiorCarta[L], l=0, k=0, carta=0, iMaior, pontuacao=0;

    do{
        for(i=0; i<N; i++){
            somaLados = cartas[0][i] + cartas[1][i];
            if(maiorSoma<somaLados){
                maiorSoma = somaLados;
                iMaior = i;
            }
        }
        iMaiorCarta[l] = iMaior;
        cartas[0][iMaior]=0;
        cartas[1][iMaior]=0;
        l++;
    }while(l<L);
    K=K-L;

    do{
        for(i=0; i<N; i++){
            if(carta<cartas[0][i]){
                carta = cartas[0][i];
                iMaior = i;
            }
        }
        iMaiorCarta[l] = iMaior;
        pontuacao  = maiorSoma + carta;
        cartas[0][i] = 0;
        k++;
    }while(k<K);

    printf("%d\n", pontuacao);
    return 0;
}
