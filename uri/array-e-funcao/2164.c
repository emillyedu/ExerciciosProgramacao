#include <stdio.h>
#include <math.h>

double Fibonacci(int n){
    return (pow(((1+sqrt(5))/2), n) - (pow(((1-sqrt(5))/2), n)))/(sqrt(5));
}


int main(){
    double fibonacci, n;

    scanf("%lf", &n);

    fibonacci = Fibonacci(n);

    printf("%.1lf\n", fibonacci);
    return 0;
}