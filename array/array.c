#include <stdio.h>
#define QUANT_NUMEROS 10

int main(){
    int numeros[QUANT_NUMEROS], i, soma=0;
    int numero, maximo;

    //QUESTAO 1
    //definir array de 10 elem

    /*for ( i = 0; i < QUANT_NUMEROS; i++){
        numeros[i] = (i + 1) * 10;
    }*/

    // mais os codigos relacionados as ordens, o numero da posicao 5, impares e a soma dos numeros apresentados abaixo;

    //QUESTAO 2
    //solicitar 10 elem

    for ( i = 0; i < QUANT_NUMEROS; i++){
        printf("insira o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    //aprensentar array em forma crescente dos indices
    printf("\ncrescente\n");
    for ( i = 0; i < QUANT_NUMEROS; i++){
        printf("numeros[%d] = %d\n", i+1, numeros[i]);
    }
    //aprensentar array em forma decrescente dos indices
    printf("\ndecrescente\n");
    for ( i = 0; i < QUANT_NUMEROS; i++){
        printf("numeros[%d] = %d\n", 10 - i, numeros[9 - i]);
    }
    //elemento armazenado na quinta posição do array;
    printf("\nnumero da posicao 5: %d\n\n", numeros[4]);

    //elementos armazenados em índices ímpares;
    printf("numeros com indices impares\n");
    for ( i = 0; i < QUANT_NUMEROS; i++){
        //soma de todos os valores armazenados no array.
        soma = soma + numeros[i];
        if (i % 2 !=0){
            //elementos armazenados em índices ímpares;
            printf("numeros[%d] = %d\n", i, numeros[i]);
        }
    }
    printf("\nsoma dos numeros: %d\n", soma);

    //QUESTAO 3
    printf("\nmedia dos numeros inseridos: %.1f\n\n", soma/10.0);
    
    //QUESTAO 4
    printf("insira o numero que deseja saber a posicao: ");
    scanf("%d", &numero);

    for( i = 0; i < QUANT_NUMEROS; i++){
        if(numeros[i] == numero){
            printf("o numero escolhido esta na posicao: %d\n", i+1);        
        }
    }

    //QUESTAO 5 qual o valor do maior elemento armazenado no array.
    maximo = numeros[0];
    for(i = 0; i < QUANT_NUMEROS; i++){
        if(numeros[i] > maximo){
            maximo = numeros[i];
        }
    }
    printf("\nO maior numero da array eh: %d\n", maximo);

}