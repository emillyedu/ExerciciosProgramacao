//imprima o maior e a posição dele

#include<stdio.h>

int main(void){
    int i, n, maior, posicao;

    maior=0;
    for(i=1; i<=100;i++){
        scanf("%d", &n);
        if(maior < n){
            maior=n;
            posicao=i;
        }
    }
    printf("%d\n%d\n", maior, posicao);
    return 0;
}