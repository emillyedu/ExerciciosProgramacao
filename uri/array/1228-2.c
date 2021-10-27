#include <stdio.h>

int PosicaoArray(int array[], int procurado, int tamanho){
    int i;

    for( i = 0; i < tamanho; i++){
        if(array[i] == procurado){
            return i;
        }
    }

    return -1;
}

int MinUltrapassagens(int comp, int largada[], int chegada[]){
    int trocou = 1;
    int cont = 0;
    int aux;
    int i, j;

    while(trocou){
        trocou = 0;

        int posicao;
        for(i = comp - 2; i >= 0; i--){
            posicao = PosicaoArray(chegada, largada[i], comp);

            if(posicao > i){
                aux = chegada[posicao];
                for (j = i; j < posicao; j++){
                    largada[j] = largada[j+1];
                    cont++;
                }
                largada[j] = aux;

                trocou = 1;
                i = comp - 1;
            }

        }
    }
    return cont;
}

int main(){
    int comp, i;

    while (scanf("%d", &comp) != EOF){
        int largada[comp];
        int chegada[comp];

        for(i=0; i < comp; i++){
            scanf("%d", &largada[i]);
        }
        for(i=0; i < comp; i++){
            scanf("%d", chegada[i]);
        }
        printf("%d\n", MinUltrapassagens(comp, largada, chegada));
    }
    return 0;
}