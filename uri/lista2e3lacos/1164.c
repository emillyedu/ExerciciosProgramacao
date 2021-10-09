//imprimir se é ou nao um numero perfeito
// soma de seus divisores é igual ao numero
//3  ==   1+2

#include <stdio.h>

int main(void){
    int i, t, n, soma;

    scanf("%d", &t);
    //repetir t vezes
    while(t>0){
        scanf("%d", &n);
        soma=0;
        for(i=1; i<n; i++){
            //encontrando divisores
            if(n%i==0){
                //soma dos divisores
                soma=soma+i;
            }
        }
        //se a soma for = ao n é pft
        if (soma==n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }
        t--;
    }


    return 0;
}