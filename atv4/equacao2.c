#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    int delta;
    float x1, x2;

    printf("Insira a: ");
    scanf("%d", &a);
    printf("Insira b: ");
    scanf("%d", &b);
    printf("Insira c: ");
    scanf("%d", &c);

    if (a == 0){
        printf("A equacao do segundo grau nao pode ser formada");
        return 1;
    }

    delta= b*b -4*a*c;
    if(delta < 0){
        printf("A equacao nao posssui valores reais");
        return 2;
    }
    else{
        if( delta == 0){
            x1 = (-b)/2*a;
            printf("O valor da raiz unica eh:%.1f", x1);
        }
        else{
            x1 = (-b + sqrt(delta))/2*a;
            x2 = (-b - sqrt(delta))/2*a;
            printf("A raiz x1 eh %.1f e a raiz x2 eh %.1f", x1, x2);
        }
    }

    return 0;
}