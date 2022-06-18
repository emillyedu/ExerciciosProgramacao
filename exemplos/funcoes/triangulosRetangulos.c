#include <stdio.h>
#include <math.h>

int EhTrianguloRetangulo(float a, float b, float c){
    return (pow(a, 2) + pow(b, 2)) == pow(c, 2);
}

float FormaTrianguloRetangulo(float a, float b, float c){
    if (a <= 0 && b > 0 && c > 0){
        return sqrt((pow(c, 2) - pow(b, 2)));
    }

    if (a > 0 && b <= 0 && c > 0){
        return sqrt((pow(c, 2) - pow(a, 2)));
    }

    if (a > 0 && b > 0 && c <= 0){
        return sqrt((pow(a, 2) + pow(b, 2)));
    }

    return -1;
}

int main(void){
    float a, b, c, f;

    printf("Digite os catetos a e b: ");
    scanf("%f %f", &a, &b);
    printf("Digite a hipotenusa: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0){
        if (EhTrianguloRetangulo(a, b, c)){
            puts("Forma triangulo retangulo.");
        }else{
            puts("Nao forma triangulo retangulo.");
        }
    }else{
        f = FormaTrianguloRetangulo(a, b, c);
        if (f != -1){
            if (a <= 0)
                a = f;
            if (b <= 0)
                b = f;
            if (c <= 0)
                c = f;
            printf("Para formar o triangulo retangulo, use a=%.1f b=%.1f c=%.1f\n", a, b, c);
        }
    }

    return 0;
}
