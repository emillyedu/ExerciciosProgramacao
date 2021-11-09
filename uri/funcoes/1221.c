//primo ou nao primo
#include <stdio.h>
#include <math.h>

long long int Prime( long long int x){
    int i, soma;
    double raizX;

    raizX=sqrt(x);
    soma=0;

    for(i = 2; i <= raizX; i++){
        if(x % i == 0){
            soma++;
        }
        if(soma == 2){
            return 0;
        }
    }
    if(soma==0){
        return 1;
    }
    else{
        return 2;
    }
}

int main(){
    long long int  x, prime;
    int n;

    scanf("%d", &n);
    while(n--){
        scanf("%lld", &x);

        prime = Prime(x);
        if(prime == 1){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }

    }
    return 0;
}