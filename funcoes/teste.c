
#include <stdio.h>
int main(){
    int n;
    int i, soma;
    scanf("%d", &n);

    if (n < 0) printf("-1");

    soma=0;
    i = 0;
    while (i <= n){
        soma += i;
    }
    printf("%d", soma);
}