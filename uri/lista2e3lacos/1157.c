//imprmir divisores positivos de n
// 6        1 2 3 6

#include <stdio.h>

int main (void){
    int i, n;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }  
    }    
}