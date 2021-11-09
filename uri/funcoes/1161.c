//calcular a soma dos fatoriais de dois numeros
#include <stdio.h>
unsigned long long FatorialM(int m){
    unsigned long long fatM;
    int i;

    fatM=1;
    for (i=1; i<=m; i++){
        fatM *= i;
    }
    return fatM;
}
unsigned long long FatorialN(int n){
    unsigned long long fatN;
    int j;

    fatN=1;
    for (j=1; j<=n; j++){
        fatN *= j;
    }
    return fatN;
}
int main(){
    int m, n;
    unsigned long long fat1, fat2;

    while(scanf("%d %d", &m, &n) != EOF){
        fat1 = FatorialM(m);
        fat2 = FatorialN(n);

        printf ("%llu\n", fat1 + fat2);
    }

    return 0;
}