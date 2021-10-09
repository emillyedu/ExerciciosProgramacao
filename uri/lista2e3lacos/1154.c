//media das idades

#include <stdio.h>

int main (void){
    int idade, soma, contador;
    float media;

    soma=0;
    contador=0;
    /*do{
        scanf("%d", &idade);
        if(idade>= 0){
            soma = soma + idade;
            contador = contador +1;
        }
    }
    while(idade>=0);*/

    while(1){
        scanf("%d", &idade);
        //se dade for menor que 0, encerre
        if (idade<0){
            break;
        }
        //incremente em soma os valores das idades
        soma+=idade;
        //incremente em contador o numero de vezes que foi repetido
        contador++;
    }

    media=1.0*soma/contador;

    printf("%.2f\n", media);
    
    return 0;
}