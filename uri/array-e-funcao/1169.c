/*#include <stdio.h>
#include <math.h>

int main(){
    int n, x, i;
    long long quilos;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        
        quilos = pow(2,x)/12000;
        printf("%lld kg\n", quilos);
    }
    
    return 0;
}*/

#include <stdio.h>

#define KILO_GRAO 12000


int main(){
    int n;

    scanf("%d", &n);

    while(n--){
        int x, i;

        scanf("%d", &x);

        if(x < 11){
            puts("0 kg");
        }else{
            unsigned long long ar[x], soma = 1;
            ar[0] = 1;
            for(i = 1; i < x; i++){
                //dobro do anterior
                ar[i] = ar[i-1] * 2;
                soma += ar[i];
            }
            soma /= KILO_GRAO;
            printf("%llu kg\n", soma);
        }              

    }

    return 0;
}