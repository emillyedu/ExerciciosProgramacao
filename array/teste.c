#include <stdio.h>
//5
/*
int soma(int *a, int *b){
    *a = *a + *b;
    return *a;
}*/

//7

void ExibeArray(double ar[], int tamArray){
    int i;

    for(i=0; i< tamArray; i++){
        printf("ar[%d] = %.1f\n", i, ar[i]);
    }
    //ar[0] = 2.0
    //ar[1] = 4.0
    //ar[2] = 6.0
}
int main(){
    //1
/*
    int vetor[] = {1867, 1947, 2007};
    int *ano;
    ano = &vetor[0];
    ano++;
    printf("valor: %d ", *ano); //1947
    (*ano)++;
    printf("valor: %d\n", *ano); //1948


    //2

    int ar[] = {1, 2, 3};
    int *p = &ar[0];
    printf(" %d %d %d %d", ar[0], p[0], *p, *ar); //1 1 1 1


    //3

    int a, *b, c;
    a=5;
    b=&a;
    c=10;
    scanf("%d", b); //5
    printf("%d %d\n", a, c); //5 10


    //4

    int matrx[5] = {1, 2, 3, 4, 5};
    int *p;
    p = matrx;
    printf("terceiro elemento %d", p[2]); //3


    //5

    int x=5, y=3;
    y= soma(&x, &y);
    printf("%d", x+y); //16 (a=8 e y=8)


    //6

    int ar[5] = {1, 2, 3, 4, 5};
    int *p, a , b, c, d;
    a= ar[0] + ar[4]; //a = 6
    p = &ar[2]; 
    b = *p * 2; //b = 6 (3*2)
    c = p[1]; //c = 4  (p comeca em 3 (p = &ar[2]), assim, o proximo elem p[1] == 4)
    d = 2[ar]; //d = 3 (2[ar] == ar[2])

    printf("a=%d b=%d c=%d d=%d", a, b, c, d);*/

    //7

    double ar[3] = {2, 4, 6};

    ExibeArray(ar, 3);

    
}