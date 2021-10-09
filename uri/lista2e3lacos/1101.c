//entrada-> 5 2
//saida-> 2 3 4 5 soma=14

#include <stdio.h>

int main (void){
    int i, m, n, sum, aux;

    aux=1;
    while (m > 0 && n > 0){
        scanf("%d %d", &m, &n);
        //se tiver 0 na multiplicação, dar 0
        if(m > 0 && n > 0){
            // m com ctz é menor com n:
            if (n < m){
                aux = m;
                m = n;
                n = aux;
            }

            sum = 0;
            for (i = m; i <= n; i++){
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }

    }
}