//multiplos distintos 
#include <stdio.h>

int main(){
    //definindo variaveis
    int inicio, fim, count = 0, n1, n2, flag = 0;
    int i, j, aux1, aux2;

    //pedindo as entradas para os valores dos intervalos
    scanf("%d", &inicio);
    scanf("%d", &fim);
    
    //numeros que serão usados para fazer a união
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    //no for, o i inicial será o primeiro valor do intervalo pedido e o ultimo valor será o segundo valor do intervalo. Essa seria o Intervalo que deverá ser percorrido para achar os multiplos, por isso faz-se um loop.
    for (i = inicio; i < fim; i++){
        flag = 0;
        // a aux1 recebe todos os valores de n1 para comparar posteriormente com todas as outras multiplicações do segundo valor que seria n2
        aux1 = n1 * i;
        //o for com j servirá para comparar todos os valores dentro do intervalo
        for (j = inicio; j < fim; j++) {
            //se o segundo número  vezes j for igual ao primeiro número vezes i
            if (n2 * j == aux1) {
                //desvie o fluxo apenas da interação atual, pois os multiplos são intercessores, parte que deve ser excluída.
                continue;
            }
        }
        //se o seu valor da variável é igual a 0, some os valores que forem multiplos distintos 
        if (flag == 0) {
            count++;
        }
    }
    
    //como o count apresentará o valor duplicado, é necessário dividi-lo por dois para resultar nos valores corretos dos multiplos
    printf("%d\n", count/2);

    return 0;
}