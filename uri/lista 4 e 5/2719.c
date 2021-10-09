//papai noel
//levar x presentes e y peso maximo na carruagem
//quantas voltas para levar todos os presentes q tem z peso cada?

#include <stdio.h>

int main (){
    int t, n, m, i, k, peso, soma;

    //quantas vezes vai testar? repetição do laco
    scanf("%d", &t);

    while (t--){
        //quantidade e peso máx da carruagem
        scanf("%d %d", &n, &m);
        
        //minimo uma viagem
        k = 1;
        peso = soma = 0;
        //quant de presentes
        for (i = 0; i < n; i++){
            //informe o peso de cada presente
            scanf("%d", &peso);
            //somando pesos
            soma += peso;

            // se a soma for maior que o peso máx, incremente uma viagem a mais
            if (soma > m){
                k++;
                //recebe a ultima quantidade que passou do limite do peso
                soma = peso;
            }
        }
        printf("%d\n", k);
    }
}