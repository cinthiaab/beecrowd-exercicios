#include <stdio.h>
#include <stdlib.h>

int main(){
    int X=1;

    do{
        if(X%2==0){
            printf("%d\n", X);
        }
        X++;
    }while(X<=100);

    return (0);
}
