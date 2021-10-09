//processamento de notas
#include <stdio.h>

int main(void){
    //definindo variaveis
    float nota1, nota12, nota2, nota22, aux, aux2;
    float media1, media2, mediaFinal, mediaTurma;
    int i, t, cont;

    scanf("%d", &t);

    //atribuir valores zeros a media da turma, contador, das notas e das medias
    mediaTurma = 0;
    cont=0;
    nota1=nota2=nota12=nota22=0;
    media1=media2=mediaFinal=mediaTurma=0;
    //Para i = 1 até o número t dito na entrada, repita o corpo do laço:
    for (i=1; i<=t; i++){
        //entrada das notas para a unidade 1
        scanf ("%f", &nota1);
        scanf ("%f", &nota12);

        //se a nota1 for menor do que a nota 12, irá acontecer uma troca de valores para que a nota12 seja menor que a nota1 com a ajuda de uma variável auxiliar
        if(nota1<nota12){
            aux=nota12;
            nota12=nota1;
            nota1=aux;
        }
        //unidade 1
        //formula da média ponderada das notas da prova da unidade 1 sendo atribuida a variável media1
        media1 = (6*nota1 + 4*nota12)/(6+4);

        //entrada das notas para a unidade 2
        scanf ("%f", &nota2);
        scanf ("%f", &nota22);

        //troca, assim como na unidade 1, dos valores de nota2 e nota22 com o auxílio de uma variável auxiliar
        if(nota2<nota22){
            aux2=nota22;
            nota22=nota2;
            nota2=aux2;
        }
        //unidade 2
        media2 = (6*nota2 + 4*nota22)/(6+4);

        //media final é feita somando as duas médias e subtraindo-as por 2
        mediaFinal = (media1+media2)/2;

        printf("Discente #%d: ", i);
        printf("%.1f %.1f %.1f\n", media1, media2, mediaFinal);

        //Para que seja feita a media da turma, é necessário guardar os valores de cada media final dos alunos em uma variável que posteriormente será dividida pela quantidade de alunos que foram analisados.
        mediaTurma+=mediaFinal;
        //cont++ serve para guardar a quantidade de alunos que fizeram a avaliação de suas notas
        cont++;
    }

    //a media da tuma é feita com a divisão da soma das medias finais que foi atribuida a variavel mediaTurma pela quantidade de alunos, atribuida a variavel cont.
    printf("Media da turma: %.2f\n", mediaTurma/cont);

    return 0;
}
