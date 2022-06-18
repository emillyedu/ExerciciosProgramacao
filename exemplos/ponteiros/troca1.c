#include <stdio.h>

void Troca(int x, int y){

    int aux = x;
    x = y;
    y = aux;

}

int main(void){
    int x = 3, y = 5;

    printf("antes:  a=%d, b=%d\n", x, y);
    Troca(x, y);
    printf("depois: a=%d, b=%d\n", x, y);

    return 0;
}
