#include <stdio.h>

int main() {
    int N, M=0, i;
    
    scanf("%d", &N);
    
    char palavra[N];
    scanf("%s", palavra);
    
    for(i=0; i<N; i++){
        if((palavra[i]=='a') && (palavra[i-1]=='a' || palavra[i+1]=='a'))M++;
    }
    printf("%d", M);

    return 0;
}