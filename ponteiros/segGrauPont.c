#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    float d;
    d= b*b - 4*a*c;
    return d;
}
int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    //caso nao represente uma equacao do segundo grau, retorne -1
    if (a == 0){
        return -1;
    }
    //se o delta for menor ou igual a zero, não existe raizes, logo, retorne -2.
    if(Delta(a, b, c) < 0){
        return -2;
    }
    else{
        //se delta é igual a 0, existe apenas uma resposta
        if(Delta(a, b, c) == 0){
            *x1 = (-b + sqrt(Delta(a, b, c)))/(2*a);
        }
        else{
            *x1 = (-b + sqrt(Delta(a, b, c)))/(2*a);
            *x2 = (-b - sqrt(Delta(a, b, c)))/(2*a);
        }
    }
    //se as raizes tiverem sido calculadas corretamente, retorne 0.
    return 0;
}
void Numeros(char i){
    printf("Insira %c: ", i);
}

int main(void){
    float a, b, c;
    float d;
    float x1, x2;
    int equacao;

    Numeros('a');
    scanf("%f", &a);
    Numeros('b');
    scanf("%f", &b);
    Numeros('c');
    scanf("%f", &c);

    x1 = 0;
    x2 = 0;

    equacao = ResolveEquacao2Grau(a, b, c, &x1, &x2);
    printf("%d\n", equacao);
    
    return 0;
}