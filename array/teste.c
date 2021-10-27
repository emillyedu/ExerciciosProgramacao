#include <stdio.h>
/*int soma(int *a, int *b){
    *a = *a + *b;
    return *a;
}*/
int main(){
    /*int vetor[] = {1867, 1947, 2007};
    int *ano;
    ano = &vetor[0];
    ano++;
    printf("valor: %d ", *ano);
    (*ano)++;
    printf("valor: %d\n", *ano);

    int ar[] = {1, 2, 3};
    int *p = &ar[0];
    printf(" %d %d %d %d", ar[0], p[0], *p, *ar);

    int a, *b, c;
    a=5;
    b=&a;
    c=10;
    scanf("%d", b);
    printf("%d %d\n", a, c);

    int matrx[5] = {1, 2, 3, 4, 5};
    int *p;
    p = matrx;
    printf("terceiro elemento %d", p[2]);

    int x=5, y=3;
    y= soma(&x, &y);
    printf("%d", x+y);*/

    int ar[5] = {1, 2, 3, 4, 5};
    int *p, a , b, c, d;
    a= ar[0] + ar[4];
    p = &ar[2];
    b = *p * 2;
    c = p[1];
    d = 2[ar];

    printf("a=%d b=%d c=%d d=%d", a, b, c, d);

    
}