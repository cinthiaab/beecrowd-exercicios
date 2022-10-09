#include <stdio.h>

int main() {
    int falha=0, bits[8];
    
    for(int i=0; i<8; i++){
        scanf("%d", &bits[i]);
        if(bits[i]==9)falha=1;
    }
    
    if(falha==1){
        printf("F\n");
    }else{
        printf("S\n");
    }

    return 0;
}