//soma dos numeros de x a y incluindo-os

#include <stdio.h>

int main(void){
    /*long long int a, b, soma;*/
    int a, b, i;
    long long soma;

    /*scanf("%lld %lld", &a, &b);*/
    scanf("%d %d", &a, &b);
    
    /*soma= ((a+b)*(b-a+1))/2;
    printf("%lld\n", soma);*/
    soma=0;
    for (i = a; i <= b; i++){
        soma+=i;
    }
    printf("%lld\n", soma);

    return 0;
}