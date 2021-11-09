//leia um número e imprima o número de Fibonacci correspondente a este número lido.
//4         fib(4) = 3      0 1 1 2 (3)
#include<stdio.h>

long long int fib(long long int n){
    long long int fibonacci[61];

    fibonacci[0]=0;
    fibonacci[1]=1;

    int i;
    for(i = 2; i <= n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    return fibonacci[n];
}

int main(){
    int t,i;
    long long int n;

    scanf("%i",&t);

    for (i = 0; i < t; i++){
        scanf("%lld",&n);
        
        printf("Fib(%lld) = %lld\n", n, fib(n));
    }
    return 0;
}