#include <stdio.h>

void Troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(void){
    int a = 3, b = 5;

    printf("antes:  a=%d, b=%d\n", a, b);
    Troca(&a, &b);
    printf("depois: a=%d, b=%d\n", a, b);

    return 0;
}
