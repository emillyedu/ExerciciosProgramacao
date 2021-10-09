#include <stdio.h>
#include <stdlib.h>

int main(void){
    //var valor e cedulas 100, 50, 20, 10, 5, 2 e 1
    int valor;
    int cedula100,cedula50,cedula20,cedula10,cedula5,cedula2,cedula1;
    //solicitando valor em reais
    printf("Valor em reais:");
    scanf("%d",&valor);

    //notas de 100
    cedula100=(valor/100);
    //o resto do valor fica armazenada na variavel "valor"
    valor=valor%100;

    //notas de 50, 20, 10, 5, 2 e 1
    cedula50=(valor/50);
    valor=(valor%50);

    cedula20=(valor/20);
    valor=(valor%20);

    cedula10=(valor/10);
    valor=(valor%10);

    cedula5=(valor/5);
    valor=(valor%5);

    cedula2=(valor/2);
    valor=(valor%2);

    cedula1=valor;
    valor=valor;

    //imprimindo quantidade de cedulas
    printf("Quantidade de cedulas de 100 reais: %d\n", cedula100);
    printf("Quantidade de cedulas de 50 reais: %d\n", cedula50);
    printf("Quantidade de cedulas de 20 reais: %d\n", cedula20);
    printf("Quantidade de cedulas de 10 reais: %d\n", cedula10);
    printf("Quantidade de cedulas de 5 reais: %d\n", cedula5);
    printf("Quantidade de cedulas de 2 reais: %d\n", cedula2);
    printf("Quantidade de cedulas de 1 real: %d\n", cedula1);

    return 0;
}