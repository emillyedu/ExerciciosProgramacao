#include <stdio.h>

int main(void){

    float diametro;
    float raio, area, circunferencia;

    //solicitando o valor o diametro
    printf ("Insira o valor do diametro do circulo:\n");
    scanf ("%f", &diametro);

    //raio
    raio = diametro/2;
    printf ("Valor do raio do circulo: %.1f\n", raio);

    //area
    area = 3.14 * (raio*raio);
    printf ("Valor da area do circulo: %.2f\n", area);

    //circunferencia
    circunferencia = 2 * 3.14 * raio;
    printf ("Valor da circunferencia do circulo: %.2f\n", circunferencia);

    return 0;
}
