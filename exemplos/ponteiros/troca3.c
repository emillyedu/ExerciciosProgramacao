#include <stdio.h>

void Troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(void){
    int a = 3, b = 5;
    int *p = &a, *q = &b;

    printf("antes:  a=%d, b=%d\n", a, b);
    Troca(p, q);
    printf("depois: a=%d, b=%d\n", a, b);

    return 0;
}
