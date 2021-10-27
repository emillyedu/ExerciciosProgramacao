//troque o ultimo resul pelo primeiro e assim por diante
// 0 -5 63 230 ----> n[0] = 230; ...63; ...-5; ...0;

#include <stdio.h>
#define QN 20
#define TROCA 10 

int main (){
    int i, aux, n[QN];

    for ( i = 0; i < QN; i++){
        scanf("%d", &n[i]);
    }
    //trocando  um valor por um outro valor = a troca terá que ser feita 10 vezes
    for ( i = 0; i < TROCA; i++){
        //i = 0 --> troca 1º pelo ultimo
        aux = n[i];
        n[i] = n[19-i];
        n[19-i] = aux;
    }
    for ( i = 0; i < QN; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
