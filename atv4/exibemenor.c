#include <stdio.h>

int main(void){
    int valor1, valor2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    //se o primeiro foi maior que o segundo:
    if (valor1 > valor2){
    //o menor é o segundo
        printf("o menor valor eh: %d", valor2);
    }
    else{ //se nao, o menor é o primeiro
        printf("o menor valor eh: %d", valor1);
    }

    return 0;
}