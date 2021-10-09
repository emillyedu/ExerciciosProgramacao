#include <stdio.h>
#include <math.h>

#define PESO_MAIOR 6
#define PESO_MENOR 4

//nota 
float NotaUnificada(float nota1, float nota2, int pesoMaior, int pesoMenor){
    float unificada, aux;

    if(nota1<nota2){
        aux=nota2;
        nota2=nota1;
        nota1=aux;
    }
    unificada = (nota1*pesoMaior + nota2*pesoMenor) / (pesoMaior+pesoMenor);

    return unificada;
}

//exibindo conceito da media
char Conceito(float media){
    if(media <= 10) return 'A';
    else if (media < 9) return 'B';
    else if (media < 8) return 'C';
    else if (media < 7) return 'D';
    else if (media < 6) return 'E';
    else if (media < 5) return 'F';
    else return '?';

}

float AdicioneNaMedia(float valor){
  //duração fixa:iniciadas automaticamente com 0
    static float soma;
    static int cont;

    //soma dos valores
    soma += valor;
    //contador
    cont++;

    //retorna media
    return soma/cont;
}

void sequencia(int i){
    printf("Digite os valores para a nota #%d:\n", i);
}

int main(void){
    float nota1, nota2;
    float notaUnificada;
    float media;
    int i;

    for(i = 1; i <= 3; i++){
        sequencia(i);
        printf("\tTeorica: ");
        scanf("%f", &nota1);
        printf("\tLaboratorio: ");
        scanf("%f", &nota2);

        notaUnificada = NotaUnificada(nota1, nota2, PESO_MAIOR, PESO_MENOR);
        //media total
        media = AdicioneNaMedia(notaUnificada);
        printf("\tNota unificada: %.1f\n", notaUnificada);

    }
    //media total
    printf("Media: %.1f\n", media);

    printf("Conceito: %c\n", Conceito(media));


    return 0;
}

