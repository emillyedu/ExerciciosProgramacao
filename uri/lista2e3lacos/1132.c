//multiplod de 13
//soma de todos os numeros nao divisiveis por 13
#include <stdio.h>

int main (void){
    int x, y, i, soma=0;

    scanf("%d %d", &x, &y);
    //quando x for menor que y
    for(i=x; i<=y; i++){
        if(i % 13 == 0){
            continue;
        }
        soma += i;
    }
    //quando y for menor que x     
    for(i=y; i<=x; i++){
        if(i % 13 == 0){
            //se for divisivel por 13, desvie o fluxo de execução
            continue;
        }
        //some os valores nao divisiveis e guarde na variável soma
        soma += i;  
    }

    printf("%d\n", soma);
    return 0;   
}