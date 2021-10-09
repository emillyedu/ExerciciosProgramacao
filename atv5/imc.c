#include <stdio.h>
#include <math.h>

int main(void){

    float peso, altura;
    float imc;

    //solicitando o peso e a altura do usuário
    printf ("Insira o seu peso:\n");
    scanf ("%f", &peso);

    printf ("Insira a sua altura:\n");
    scanf ("%f", &altura);

    //imc
    imc = (peso)/(pow(altura, 2));

    if(imc <= 18.5){
        printf ("O IMC eh: %.2f, por isso eh: baixo peso", imc);
    }
    else if( imc > 18.5 && imc <= 25){
        printf ("O IMC eh: %.2f, por isso eh: normal", imc);
    }
    else if(imc > 25 && imc <= 30){
        printf ("O IMC eh: %.2f, por isso eh: sobrepeso", imc);
    }
    else{
        printf ("O IMC eh: %.2f, por isso eh: obesidade", imc);
    }

    return 0;
}
