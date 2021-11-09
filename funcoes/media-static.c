#include <stdio.h>
#include <math.h>

float AdicioneNaMedia(float valor){
  //duração fixa:iniciadas automaticamente com 0 se não definir um valor inicial
    static float soma;
    static int cont;

    //soma dos valores
    soma += valor;
    //contador
    cont++;

    //retorna media
    return soma/cont;
}

int main(void){
    float valor, media;
    int i, n;

    printf("quantas medias voce deseja? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("\tvalor: ");
        scanf("%f", &valor);

        //media
        media = AdicioneNaMedia(valor);
        printf("\tmedia: %.1f\n", media);
    }
    //media total
    printf("Media total: %.1f\n", media);

    return 0;
}

