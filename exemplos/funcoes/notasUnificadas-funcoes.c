#include <stdio.h>
#include <math.h>

#define PESO_MAIOR 6
#define PESO_MENOR 4

float NotaUnificada(float nota1, float nota2, int pesoMaior, int pesoMenor){
    float unificada;

    if (nota1 > nota2){
        unificada = (nota1*pesoMaior + nota2*pesoMenor) / (pesoMaior+pesoMenor);
    }else{
        unificada = (nota1*pesoMenor + nota2*pesoMaior) / (pesoMaior+pesoMenor);
    }

    return unificada;
}

float Media(float x, float y, float z){
    return (x + y + z)/3;
}

char Conceito(float media){
    if (media < 5){
        return 'F';
    }else if (media < 6){
        return 'E';
    }else if (media < 7){
        return 'D';
    }else if (media < 8){
        return 'C';
    }else if (media < 9){
        return 'B';
    }else if (media <= 10){
        return 'A';
    }else{
        return '?';
    }
}

void ExibirPrompt(int i){
    printf("Digite os valores para a nota #%d:\n", i);
    return;
}

int main(void){
    float notaip, notalab;
    float nota1, nota2, nota3;
    float media;
    int r;

    ExibirPrompt(1);
    printf("\tTeorica: ");
    scanf("%f", &notaip);
    printf("\tLaboratorio: ");
    scanf("%f", &notalab);

    nota1 = NotaUnificada(notaip, notalab, PESO_MAIOR, PESO_MENOR);
    printf("\tNota unificada: %.1f\n", nota1);


    ExibirPrompt(2);
    printf("\tTeorica: ");
    scanf("%f", &notaip);
    printf("\tLaboratorio: ");
    scanf("%f", &notalab);

    nota2 = NotaUnificada(notaip, notalab, PESO_MAIOR, PESO_MENOR);
    printf("\tNota unificada: %.1f\n", nota2);


    ExibirPrompt(3);
    printf("\tTeorica: ");
    scanf("%f", &notaip);
    printf("\tLaboratorio: ");
    scanf("%f", &notalab);

    nota3 = NotaUnificada(notaip, notalab, PESO_MAIOR, PESO_MENOR);
    printf("\tNota unificada: %.1f\n", nota3);


    media = Media(nota1, nota2, nota3);
    printf("Media: %.1f\n", media);

    printf("Conceito: %c\n", Conceito(media));


    return 0;
}
