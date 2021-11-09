#include <stdio.h>
#include <math.h>

#define MAX_ALUNOS 1000

double Media(double ar[], int tamAr){
    double soma = 0;
    int i;
    for(i=0; i<tamAr; i++){
        soma += ar[i];
    }
    return soma/tamAr;
}

double Variancia(double ar[], int tamAr){
    double media = Media(ar, tamAr), soma=0;
    int i;
    for(i=0; i<tamAr; i++){
        soma+=pow(ar[i]- media, 2);
    }
    return soma/tamAr;
}

double DesvioPadrao(double ar[], int tamAr){
    return sqrt(Variancia(ar, tamAr));
}

int main(){
    //digite no maximo mil notas
    double nota[MAX_ALUNOS], media, soma, variancia, desvioPadrao;
    int q, i;

    //quantidade de alunos
    printf("digite a quant de alunos(maximo de %d): ", MAX_ALUNOS);
    scanf("%d", &q);

    for(i=0; i<q; i++){
        printf("digite a nota de aluno #%d:", i+1);
        scanf("%lf", &nota[i]);
    }

    //media das notas
    media = Media(nota, q);
    printf("a media das notas eh: %.1lf\n", media);

    variancia = Variancia(nota, q);
    printf("a variancia das notas eh: %.1lf\n", variancia);

    desvioPadrao = DesvioPadrao(nota, q);
    printf("o desvio padrao eh: %.1lf\n", desvioPadrao);

    return 0;
}