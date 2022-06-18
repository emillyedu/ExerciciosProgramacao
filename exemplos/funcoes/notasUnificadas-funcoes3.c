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

float AdicioneNaMedia(float nota){
    static float soma = 0;
    static int q = 0;

    soma += nota;
    q++;

    return soma/q;
}

int main(void){
    float notaip, notalab;
    float notaUnificada;
    float media;
    int i;

    for(i = 1; i <= 3; i++){
        ExibirPrompt(i);
        printf("\tTeorica: ");
        scanf("%f", &notaip);
        printf("\tLaboratorio: ");
        scanf("%f", &notalab);

        notaUnificada = NotaUnificada(notaip, notalab, PESO_MAIOR, PESO_MENOR);
        media = AdicioneNaMedia(notaUnificada);
        printf("\tNota unificada: %.1f\n", notaUnificada);

    }

    printf("Media: %.1f\n", media);

    printf("Conceito: %c\n", Conceito(media));


    return 0;
}
