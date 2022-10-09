#include <stdio.h>

int main(){
    int N, Q, i, j;

    scanf("%d %d", &N, &Q);

    int A[N], c[Q], d[Q], rodadas[N];

    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
        rodadas[i]=0;
    }
    for(j=0; j<Q; j++){
        scanf("%d %d", &c[j], &d[j]);
    }
    rodadas[0]=-1;
    for(i=1; i<N;i++){
        for(j=0; j<Q; j++){
            if((((i+1)<=c[j] && c[j] % (i+1) == 0) || ((i+1)>c[j] && (i+1) % c[j] == 0)) && c[j]!=1 &&A[i]>0){
                A[i]=A[i]-d[j];
                rodadas[i]=j+1;
            }
        }
        if(A[i]>0){
            rodadas[i]=-1;
        }
    }


    for(i=0; i<N; i++){
        printf("%d\n", rodadas[i]);
    }

    return 0;
}
