//colocar dobro do numero dado e dos numeros anteriores no restante da lista
//1     1, 2, 4, 8, ...
#include <stdio.h>
#define QN 10

int main(){
    int v, n[QN], i;

    scanf("%d", &v);

    for (i = 0; i < QN; i++){
        n[i] = v;
        printf("N[%d] = %d\n", i, v);
        v*=2;
    }

    return 0;
}