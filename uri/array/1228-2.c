//numero minimo de ultrapassagens para ir da grade inicial para a final
//5
//1 2 3 4 5 inicio
//3 1 2 5 4 fim

#include <stdio.h>
/**
 * PosicaoEmArray(): Encontra a posicao de determinado elemento dentro do array.
 * 
 * Parametros:
 * (entrada) ar[] - Array em que o elemento sera procurado
 * (entrada) procurado - Elemento procurado
 * (entrada) tamArray - Quantidade de elementos do array
 * 
 * Retorno:
 * >= 0 : Se o elemento for encontrado
 * -1 : Se o elemento nao for encontrado 
*/
int PosicaoArray(int array[], int procurado, int tamanho){
    int i;

    for( i = 0; i < tamanho; i++){
        if(array[i] == procurado){
            return i;
        }
    }

    return -1;
}
/**
 * MinUltrapassagens(): Calcula e retorna a quantidade minima de ultrapassagens
 *                      em uma corrida, comparando os grids de largada e de
 *                      chegada.
 * 
 * Parametros:
 * (entrada) n_comp - Quantidade de competidores
 * (entrada e saida) largada[] - Posicoes do grid de largada
 * (entrada) chegada[] - Posicoes da chegada
 * 
 * Retorno: Quantidade minima de ultrapassagens necessarias (valor >= 0)
*/
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
    int comp, i; //Numero de competidores em cada caso de teste

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