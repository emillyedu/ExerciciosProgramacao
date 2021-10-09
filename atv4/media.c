#include <stdio.h>

int main(void){
    //definindo variaveis
    float nota1, nota2, nota3;
    float media;

    //solicitando nota 1
    printf ("Insira sua primeira nota:\n");
    scanf ("%f", &nota1);

    //solicitando nota 2
    printf ("Insira sua segunda nota:\n");
    scanf ("%f", &nota2);

    //solicitando nota 3
    printf ("Insira sua terceira nota:\n");
    scanf ("%f", &nota3);

    //media
    media = (nota1+nota2+nota3)/(3);
    printf ("Valor da sua media ponderada anual: %.1f\n", media);

    return 0;
}
