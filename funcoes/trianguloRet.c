#include <stdio.h>
#include <math.h>

//Analisar se é ou não um triangulo retangulo usando a formula de Pitagoras
int EhTrianguloRetangulo(float a, float b, float c){
    int triangulo;
    triangulo = (((a*a) + (b*b)) ==  (c*c));
    return triangulo;
}

//caso exista algum cateto/hipotenusa com valor 0 ou menor que 0, informe o valor
//correto para que os três lados sejam capazes de formar um triangulo retangulo
float FormaTrianguloRetangulo(float a, float b, float c){
    //a == ...
    if(a <= 0 && b > 0 && c > 0){
        return sqrt(pow(c, 2)-pow(b, 2));
    }
    //b == ...
    else if(a > 0 && b <= 0 && c > 0){
        return sqrt(pow(c, 2)-pow(a, 2));
    }
    //c == ...
    else if(a > 0 && b > 0 && c <= 0){
        return sqrt(pow(a, 2)+pow(b, 2));
    }
    else{
        //nao consegue calcular
        return -1;
    }
}

int main(void){
    float a, b, c, faltante;

    printf("Digite os catetos 'a' e 'b' e a hipotenusa: ");
    scanf("%f %f %f", &a, &b, &c);

    //verificar se os numeros são validos para formar um triangulo
    if (a > 0 && b > 0 && c > 0){
        //se a soma dos quadrados dos catetos forem == ao quadrado da hipotenusa
        if (EhTrianguloRetangulo(a, b, c)){
            puts("Forma um triangulo retangulo");
        }
        //se não...
        else{
            puts("Nao forma um triangulo retangulo");
        }
    }
    //se nao forma, para completar seu triangulo, seu cateto/hipotenusa terá que ser x.
    else{
        faltante = FormaTrianguloRetangulo(a, b, c);
        if(faltante != -1){
            if(a<=0){
                a = faltante;
            }
            else if(b <= 0){
                b = faltante;
            }
            else if(c <= 0){
                c = faltante;
            }
            printf("Para formar o triangulo retangulo, utilize a=%.1f b=%.1f c=%.1f", a, b, c);
        }
        else{
            puts("Entrada invalida");
        }
    }
    return 0;
}
