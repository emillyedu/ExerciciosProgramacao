#include <stdio.h>
#include <math.h>

void CalculaHexagono(float l, float *area, float *perimetro){
    *area = (3*pow(l, 2)*sqrt(3)/2);
    *perimetro = 6*l;
    printf("Area: %.2f\nPerimetro: %.2f\n", *area, *perimetro);
}

int main(void){
    float l, area, perimetro;
    float d;
    float x1, x2;
    int calcula;

    printf("Insira o valor do lado: ");
    scanf("%f", &l);

    area = 0;
    perimetro = 0;

    CalculaHexagono(l, &area, &perimetro);

    return 0;
}