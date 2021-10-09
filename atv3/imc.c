#include <stdio.h>

int main(void){

    float peso, altura;
    float imc;

    //solicitando o peso e a altura do usuário
    printf ("Insira o seu peso:\n");
    scanf ("%f", &peso);

    printf ("Insira a sua altura:\n");
    scanf ("%f", &altura);

    //imc
    imc = (peso)/(altura*altura);
    printf ("O seu IMC eh: %.2f\n", imc);

    return 0;
}
