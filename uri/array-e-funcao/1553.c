#include <stdio.h>

/*int main(){
    int n, k, i, j, cont=0, resposta=0, pFeitas;

    while (1){
        int p[1001]={0};
        scanf("%d %d", &n, &k);

        if(n == 0 && k==0) break;

        // preenchendo p
        for(i=0; i<n; i++){
            scanf("%d", &pFeitas);
            p[pFeitas - 1]++;
        }

        for(i=0; i<n;i++){
            if(p[i] >= k){
                resposta+=1;
            }
        }

        printf("%d\n", resposta);
        resposta = 0;      
    }
    return 0;
}*/

/*int main(){
    int n, k, i, p, resposta;
    //array de contador: só tem 100 tipos de perguntas
    int cont[101];

    while(1){
        scanf("%d %d", &n, &k);
        if(n == 0 && k==0) break;

        //zerar array
        for(i=0; i<101; i++){
            cont[i] = 0;
        }
        //n vezes ler todas as perguntas que foram feitas
        for(i=0; i<n; i++){
            scanf("%d", &p);
            //incrementa no cont a quantidade de cada
            //p=2 cont[2]++ (1) p=2 cont[2]++ (2)...
            cont[p]++;
        }
        resposta=0;
        for(i=1; i<=100; i++){
            if(cont[i]>= k){
                resposta++;
            }
        }
        printf("%d\n", resposta);
    }
}*/

int main(){
    int n, k, i, p, resposta;
    //array de contador: só tem 100 tipos de perguntas
    int cont[100];

    while(1){
        scanf("%d %d", &n, &k);
        if(n == 0 && k==0) break;

        //zerar array
        for(i=0; i<100 ; i++){
            cont[i] = 0;
        }
        //n vezes ler todas as perguntas que foram feitas
        for(i=0; i<n; i++){
            scanf("%d", &p);
            //incrementa no cont a quantidade de cada
            //p=2 cont[2]++ (1) p=2 cont[2]++ (2)...
            //como ele considera com um a mais, salva-se com um a menos
            //comeca em um, ent quando p=1, 1-1 = 0 (guarda na primeira posicao)
            cont[p-1]++;
        }
        resposta=0;
        for(i=0; i<100; i++){
            if(cont[i]>= k){
                resposta++;
            }
        }
        printf("%d\n", resposta);
    }
}