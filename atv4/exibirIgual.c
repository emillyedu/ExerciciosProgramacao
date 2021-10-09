#include <stdio.h>

int main(void){
    int valor1, valor2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    if(valor1 == valor2)
        printf("Os valores sao iguais");
    else if(valor1 > valor2)
        printf("o menor valor eh: %d", valor2);
    else
        printf("o menor valor eh: %d", valor1);

    return 0;
}