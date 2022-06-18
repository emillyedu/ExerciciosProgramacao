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

    printf("a = %d\n", a);
    printf("end a = %p\n", &a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    *q = 7.5;

    printf("x = %lf\n", x);
    printf("end x = %p\n", &x);
    printf("q = %p\n", q);
    printf("*q = %lf\n", *q);

    return 0;
}
