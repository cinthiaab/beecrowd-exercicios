#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B;

    scanf("%d %d", &A, &B);

    if(A%B==0 || B%A==0){
    printf("Sao Multiplos");
    }else{
        printf("Nao sao Multiplos");
    }

    return(0);
}
