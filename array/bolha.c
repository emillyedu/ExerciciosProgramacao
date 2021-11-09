#include <stdio.h>

/*
ordenar array

começa no primeiro e vai comparando com o proximo
se o anterior for menor, permanece, se o que tá depois
for menor, troca com o anterior (nao compara o ultimo
elemento, já que nao tem ngm depois para comparar com ele)

1 2 0 4 8
1 e 2 na ordem crescente? sim. nao faz nada.
2 e 0 na ordem? não, troca.
2 e 4 ta na ordem? sim, permance.
4 e 8 tá na ordem? sim.
faz de novo o processo até tudo ta em ordem(nao realizar mais nenhuma troca)
0 1 2 4 8
*/

void ImprimeArray(int ar[], int t){
    int i;
    //exibir valores da array
    for(i = 0; i < t; i++){
        printf("%d ", ar[i]);
    }
    puts("");
}

int main(void){
    int ar[] = {5, 2, 1, 0, 3, 10, -1, 20, 3, 7, -5};
    int i, t, trocou, aux, trocas, iteracoes;

    //tamanho da array é a divisão do valor sizeof total pelo do elemento
    t = sizeof(ar) / sizeof(ar[0]);
    ImprimeArray(ar, t);

    trocas = iteracoes = 0;
    //enquanto trocou for 1, continuará trocando
    trocou = 1;
    while(trocou){
        //se trocou for 0, é pq nenhuma troca foi realizada
        trocou = 0;
        //comparar até o penultimo (nao tem ngm após o ultimo para ser comparado)
        for(i = 0; i < t-1; i++){
            //se o array no indice atual for maior que o proximo (fora de ordem)
            if (ar[i] > ar[i+1]){
                //troque os valores
                aux = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = aux;
                //trocou ainda é V, até que nao seja feito nenhuma outra troca
                trocou = 1;

                //contagem de trocas feitas
                trocas++;
            }
        }
        //quantas vezes foi percorrido o array, mesmo nao tendo troca
        iteracoes++;
    }
    //printando array ordenado
    ImprimeArray(ar, t);
    //exibicao da qauntidade de trocas e interações feitas
    printf("Foram realizadas %d trocas e %d iteracoes\n", trocas, iteracoes);

    return 0;
}
