#include <stdio.h>

void Func1(int *x){
    *x = 9* *x;

}
void Func2(int v[]){
    v[0] = 9 * v[0];
}

int main(){
    int x, v[2];
    x= 111;
    v[0] = 111;
    Func1(&x);
    printf("x = %d\n", x);
    Func2(v);
    printf("v[0] = %d\n", v[0]);

    return 0;
}