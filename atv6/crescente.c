#include <stdio.h>

int main(void){
    int valor1, valor2, aux;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    //permuta para que o valor 2 fique maior
    if (valor1>valor2){
        aux=valor1;
        valor1=valor2;
        valor2=aux;
    }

    //imprimir o valor 1 (aux) até chegar no valor 2
    aux=valor1;
    while (aux<=valor2){
        printf("%d\n", aux);
        aux=aux+1;
    }  
}