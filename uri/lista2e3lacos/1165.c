//primo

#include <stdio.h>

int main(void){
    int i, t, n, soma;

    scanf("%d", &t);
    while(t>0){
        scanf("%d", &n);
        soma=0;
        for(i=1; i<=n; i++){
            if(n%i==0){
                soma=soma+1;
            }
        }
        if (soma==2){
            printf("%d eh primo\n", n);
        }
        else{
            printf("%d nao eh primo\n", n);
        }
        t--;
    }
    return 0;
}