#include <stdio.h>

int main(void){
    //definindo variaveis
    float nota1, nota2, nota3, nota4;
    float media;

    //solicitando nota 1
    printf ("Insira sua nota do primeiro bimestre:\n");
    scanf ("%f", &nota1);

    //solicitando nota 2
    printf ("Insira sua nota do segundo bimestre:\n");
    scanf ("%f", &nota2);

    //solicitando nota 3
    printf ("Insira sua nota do terceiro bimestre:\n");
    scanf ("%f", &nota3);

    //solicitando nota 3
    printf ("Insira sua nota do quarto bimestre:\n");
    scanf ("%f", &nota4);

    //media
    media = ((nota1*1)+(nota2*2)+(nota3*3)+(nota4*4))/(10);
    printf ("Valor da sua media ponderada anual: %.1f\n", media);

    return 0;
}
