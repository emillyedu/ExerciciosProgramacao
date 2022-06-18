#include <stdio.h>

int main(void){
    int a;
    double x;
    int *p;
    double *q;

    a = 5;
    x = 5.0;
    p = &a;
    q = &x;

    printf("end a = %p\n", &a);
    printf("p = %p\n", p);

    printf("end x = %p\n", &x);
    printf("q = %p\n", q);

    return 0;
}
