#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    float d;
    d= b*b -4*a*c;
    return d;
}
float Raiz1(float a, float b, float delta){
    float raiz1;
    raiz1 = (-b + sqrt(delta))/(2*a);
    return raiz1;
}
float Raiz2(float a, float b, float c){
    float raiz2;
    raiz2 = (-b - sqrt(Delta(a, b, c)))/(2*a);
    return raiz2;
}
void Numeros(char i){
    printf("Insira %c: ", i);
}

int main(void){
    float a, b, c;
    float delta;
    float x1, x2;

    Numeros('a');
    scanf("%f", &a);
    Numeros('b');
    scanf("%f", &b);
    Numeros('c');
    scanf("%f", &c);

    if (a == 0){
        printf("A equacao do segundo grau nao pode ser formada\n");
        return 1;
    }

    delta = Delta(a, b, c);
    if(delta < 0){
        printf("A equacao nao posssui valores reais\n");
        return 2;
    }
    else{
        if( delta == 0){
            x1 = Raiz1(a, b, Delta(a, b, c));
            printf("O valor da raiz unica eh:%.1f\n", x1);
        }
        else{
            x1 = Raiz1(a, b, Delta(a, b, c));
            x2 = Raiz2(a, b, c);
            printf("A raiz x1 eh %.1f e a raiz x2 eh %.1f\n", x1, x2);
        }
    }
    return 0;
}