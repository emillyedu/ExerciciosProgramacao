//John e mary (1 e 0 respectivamente) quem tem mais pontos?

#include <stdio.h>

int main() {
    int i=0, n, john=0, final;
    //n=-1;
    //while(n!=0)
    while (1) {
        scanf("%d", &n);
        
        if (n == 0){
            break;
        }
        while (i++ < n) {
            scanf("%d", &final);
            //final é verdadeiro quando for 1 (ignora o ==1 pq o 1 já é verdadeiro)
            if (final){
                john++;
            }
        }
        //if(n!=0) ->imprima essa linha
        printf("Mary won %d times and John won %d times\n", n-john, john);
    }
    return 0;
}