#include <stdio.h>

int main(void){
    int n, soma, contador;
    float media;

    scanf("%d\n", &n);

    soma=0;
    contador=0;
    //quando n for 0, a condição sejá 0, e assim, a condição será falsa.
    while(n){
        //guarda as somas dos valores de n antes dele ser 0
        soma=soma+n;
        //conta quantos valores n foram feitos antes dele ser 0
        contador=contador+1;
        scanf("%d", &n);
    }

    media=(soma)/(contador);
    printf("media: %.2f\n", media);
} 
