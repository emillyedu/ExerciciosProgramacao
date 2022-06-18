#include <stdio.h>
#include <math.h>

#define PESO_MAIOR 6
#define PESO_MENOR 4

int main(void){
    float notaip, notalab;
    float nota1, nota2, nota3;
    float media;

    printf("Digite os valores para a nota 1:\n");
    printf("\tTeorica: ");
    scanf("%f", &notaip);
    printf("\tLaboratorio: ");
    scanf("%f", &notalab);

    if (notaip > notalab){
        nota1 = (notaip*PESO_MAIOR + notalab*PESO_MENOR) / (PESO_MAIOR+PESO_MENOR);
    }else{
        nota1 = (notaip*PESO_MENOR + notalab*PESO_MAIOR) / (PESO_MAIOR+PESO_MENOR);
    }
    printf("\tNota unificada: %.1f\n", nota1);


    printf("Digite os valores para a nota 2:\n");
    printf("\tTeorica: ");
    scanf("%f", &notaip);
    printf("\tLaboratorio: ");
    scanf("%f", &notalab);

    if (notaip > notalab){
        nota2 = (notaip*PESO_MAIOR + notalab*PESO_MENOR) / (PESO_MAIOR+PESO_MENOR);
    }else{
        nota2 = (notaip*PESO_MENOR + notalab*PESO_MAIOR) / (PESO_MAIOR+PESO_MENOR);
    }
    printf("\tNota unificada: %.1f\n", nota2);


    printf("Digite os valores para a nota 3:\n");
    printf("\tTeorica: ");
    scanf("%f", &notaip);
    printf("\tLaboratorio: ");
    scanf("%f", &notalab);

    if (notaip > notalab){
        nota3 = (notaip*PESO_MAIOR + notalab*PESO_MENOR) / (PESO_MAIOR+PESO_MENOR);
    }else{
        nota3 = (notaip*PESO_MENOR + notalab*PESO_MAIOR) / (PESO_MAIOR+PESO_MENOR);
    }
    printf("\tNota unificada: %.1f\n", nota3);


    media = (nota1 + nota2 + nota3) / 3;
    printf("Media: %.1f\n", media);

    printf("Conceito: ");
    if (media < 5){
        puts("F");
    }else if (media < 6){
        puts("E");
    }else if (media < 7){
        puts("D");
    }else if (media < 8){
        puts("C");
    }else if (media < 9){
        puts("B");
    }else if (media <= 10){
        puts("A");
    }else{
        puts("Desconhecido.");
    }

    return 0;
}
