#include <stdio.h>

int main(void){

    int b, h;
    int area;

    //Solicitando base e altura
    printf ("Insira o valor da base do triangulo:\n");
    scanf ("%d", &b);

    printf ("Insira o valor da altura do triangulo:\n");
    scanf ("%d", &h);
    
    //area
    area = (b*h)/2.0;
    printf ("Area do triangulo: %d\n", area);

    return 0;
}
