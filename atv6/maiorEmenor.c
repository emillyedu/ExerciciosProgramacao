#include <stdio.h>

int main(void){
    int n, menor, maior;

    scanf("%d\n", &n);
    
    menor=n;
    maior=n;    
    while(n){
        if(n<menor){
            menor=n;
        }
        if(n>maior){
            maior=n;
        }
        scanf("%d", &n);
    }
    printf(" maior: %d\n menor: %d\n", maior, menor);
}    