#include <stdio.h>

int main(void){
    int valor1, valor2, valor3;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    if(valor1 > valor2 && valor1 > valor3)
        printf("O maior valor eh o primeiro:%d", valor1);
    else if(valor2 > valor1 && valor2 > valor3)
        printf("o maior valor eh o segundo: %d", valor2);
    else
        printf("o maior valor eh o terceiro: %d", valor3);

    return 0;
}