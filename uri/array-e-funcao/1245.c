#include <stdio.h>
//pares de sapato
int main() {
    
    int n;
    while (scanf("%d", &n) != EOF) {
        
        int tam[n], i, j, Pares = 0;
        char lado[n];
        
        for (i = 0; i < n; i++)
            scanf("%d %c", &tam[i], &lado[i]);
        //o primeiro
        for (i = 0; i < n; i++) {
            //o seguinte
            for (j = i+1; j < n; j++) {
                if (tam[i] == tam[j] && lado[i] != lado[j] && lado[i] != 'X' && lado[j] != 'X') {
                    Pares++;
                    //para diferenciar os que já foram comparados
                    lado[i] = 'X';
                    lado[j] = 'X';
                }
            }
        }
        
        printf("%d\n", Pares);
    }

    return 0;
}