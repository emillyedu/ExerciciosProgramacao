//substituindo numeros negativos e 0 por 1//
#include <stdio.h>
#define QN 10

int main(){
    int i, numeros[QN];

    for ( i = 0; i < QN; i++){
        scanf("%d", &numeros[i]);
    }

    for( i = 0; i < QN; i++){
        if(numeros[i] <= 0 ){
            numeros[i] = 1;
        }

        printf("X[%d] = %d\n", i, numeros[i]);

    }

    return 0;
}