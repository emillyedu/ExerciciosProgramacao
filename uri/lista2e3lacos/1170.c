//BLOB COME METADE DE SEU ESTOQUE DE ALIMENTOS EM UM DIA
//QUANTOS DIAS DURAM ATÉ SOBRAR MENOS DE UM QUILO?


#include <stdio.h>

int main(){
    int i, n, dias;
    //comida
    float x;
    
    scanf("%d", &n);
    //ou while (t--)
    for(i = 0; i < n; i++){
            scanf("%f", &x);
            
            dias = 0;
            while(x > 1){
                    x /= 2;
                    dias++;
            }
            printf("%d dias\n", dias);
    }
    
    return 0;
}