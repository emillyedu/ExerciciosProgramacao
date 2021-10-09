#include <stdio.h>

int main(void){
    //definindo variaveis
    float maior1, menor1, maior2, menor2, maior3, menor3;
    float media1, media2, media3, mediaFinal;

    //unidade 1
    printf ("Insira sua maior nota da primeira unidade:\n");
    scanf ("%f", &maior1);
    printf ("Insira sua menor nota da primeira unidade:\n");
    scanf ("%f", &menor1);

    media1 = (6*maior1 + 4*menor1)/(6+4);
    printf ("Media da primeira unidade: %.1f\n", media1);

    //unidade 2
    printf ("Insira sua maior nota da segunda unidade:\n");
    scanf ("%f", &maior2);
    printf ("Insira sua menor nota da segunda unidade:\n");
    scanf ("%f", &menor2);

    media2 = (6*maior2 + 4*menor2)/(6+4);
    printf ("Media da segunda unidade: %.1f\n", media2);

    //unidade 3
    printf ("Insira sua maior nota da terceira unidade:\n");
    scanf ("%f", &maior3);
    printf ("Insira sua menor nota da terceira unidade:\n");
    scanf ("%f", &menor3);

    media3 = (6*maior3 + 4*menor3)/(6+4);
    printf ("Media da terceira unidade: %.1f\n", media3);

    //media final
    mediaFinal = (media1+media2+media3)/3;

    if(mediaFinal >= 9 && mediaFinal <= 10){
        printf ("A sua media final eh: %.1f, por isso o conceito eh: A", mediaFinal);
    }
    else if(mediaFinal >= 8 && mediaFinal < 9){
        printf ("A sua media final eh: %.1f, por isso o conceito eh: B", mediaFinal);
    }
    else if(mediaFinal >= 7 && mediaFinal < 8){
        printf ("A sua media final eh: %.1f, por isso o conceito eh: C", mediaFinal);
    }
    else if(mediaFinal >= 6 && mediaFinal < 7){
        printf ("A sua media final eh: %.1f, por isso o conceito eh: D", mediaFinal);
    }
    else if(mediaFinal >= 5 && mediaFinal < 6){
        printf ("A sua media final eh: %.1f, por isso o conceito eh: E", mediaFinal);
    }
    else{
        printf ("A sua media final eh: %.1f, por isso o conceito eh: F", mediaFinal);
    }
    
    return 0;
}
