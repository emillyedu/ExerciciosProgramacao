#include <stdio.h>

int main (){
	int t, mi, i, tam, j, valor, conjunto, q;
    int cont, valor2, operacao, conjunto_1, conjunto_2, uniao;

	scanf("%d", &t);

	while (t--){
        scanf("%d", &mi);

        int conjunto[mi][60];

        for(i=0; i<mi; i++){
            for(j=0; j<60; i++){
                conjunto[i][j] = 0;
            }
        }

        for(i=0; i<mi; i++){
            scanf("%d", &tam);

            for(j=0; j<=tam; j++){
                scanf("%d", &valor);
                conjunto[i][valor]++;
            }
        }

        scanf("%d", &q);

        for(i=0; i<q; i++){
            cont=0;
            scanf("%d %d %d", &operacao, &conjunto_1, &conjunto_2);
            if(operacao == 1){
                for(i=1; i<=60; i++){
                    for (j = 1; j <= 60; i++){
                        if(conjunto[conjunto_1-1][j] && conjunto[conjunto_2-1][j]){
                            cont++;
                        }
                    }
                    
                }
            }
            printf("%d", cont);
        }

    }
    




	return 0;

}


