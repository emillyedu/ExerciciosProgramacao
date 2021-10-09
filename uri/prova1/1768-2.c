//multiplos distintos 
#include <stdio.h>

int main(){
    //definindo variaveis
    int i, m, n, a, b, soma;

    //entradas para os valores dos intervalos
    scanf("%d %d", &m, &n);
    
    //entradas dos numeros que serão usados para fazer a união
    scanf("%d %d", &a,  &b);
    
    soma = 0;
    //no for, o i inicial será o primeiro valor do intervalo que foi pedido, e, o ultimo valor será o segundo valor do intervalo(atribuido a variavel "fim"). Esse será o Intervalo que deverá ser percorrido para achar os multiplos, por isso utiliza-se um loop.
    for (i = m; i <= n; i++){
        if (i % a == 0 || i % b ==0 ) {
            soma++;
        }
    }
    
    printf("%d\n", soma);

    return 0;
}