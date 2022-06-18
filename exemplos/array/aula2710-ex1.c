#include <stdio.h>

int main(void){
    int n, k, i, p, resposta;
    int cont[100];

    while(1){
        scanf("%d %d", &n, &k);
        if (n == 0 && k == 0){
            break;
        }

        for(i = 0;i < 100; i++){
            cont[i] = 0;
        }

        for(i = 0; i < n; i++){
            scanf("%d", &p);
            cont[p-1]++;
        }

        resposta = 0;
        for(i = 0; i < 100; i++){
            if (cont[i] >= k){
                resposta++;
            }
        }

        printf("%d\n", resposta);

    }

    return 0;
}
