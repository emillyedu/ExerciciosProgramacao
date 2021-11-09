#include <stdio.h>

int main(){
    int ticket, pessoas, i, p, resposta;
    //array de contador: só tem 100 tipos de perguntas
    int cont[10000];

    while(1){
        scanf("%d %d", &ticket, &pessoas);
        if(ticket == 0 && pessoas==0) break;

        //zerar array
        for(i=0; i<10000 ; i++){
            cont[i] = 0;
        }
        //n vezes ler todas as perguntas que foram feitas
        for(i=0; i<pessoas; i++){
            scanf("%d", &p);
            //incrementa no cont a quantidade de cada
            //p=2 cont[2]++ (1) p=2 cont[2]++ (2)...
            //como ele considera com um a mais, salva-se com um a menos
            //comeca em um, ent quando p=1, 1-1 = 0 (guarda na primeira posicao)
            cont[p-1]++;
        }
        resposta=0;
        for(i=0; i<10000; i++){
            if(cont[i]>= 2){
                resposta++;
            }
        }
        printf("%d\n", resposta);
    }
}