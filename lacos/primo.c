#include <stdio.h>

int main(void){
    int i, numero, primo;

    printf("insira um numero: ");
    scanf("%d", &numero);

    primo=0;
    for(i = 2; i <= numero/2 ; i++){
        if(numero % i == 0){
            primo++;
        }
    }
    if (primo == 0)
        printf("o numero %d eh um numero primo\n", numero);
    else
        printf("o numero %d nao eh um numero primo\n", numero);

    return 0;
}