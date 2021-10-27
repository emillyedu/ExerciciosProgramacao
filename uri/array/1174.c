//imprimir posições da array que armazenam n <= 10
//x digito após a virgula decimal

#include <stdio.h>
#define QN 100

int main(){
    int i;
    double a[QN];
    for ( i = 0; i < QN; i++){
        scanf("%lf", &a[i]);
    }

    for (i = 0; i < QN; i++){
        if(a[i]>10.0) continue;
        printf("A[%d] = %.1lf\n", i, a[i]);
    }
    return 0;
}