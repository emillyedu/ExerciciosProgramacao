//primo ou nao

#include <stdio.h>
#include <math.h>

int main(){
    long long int  x;
    int n, soma, i;
    double raizX;

    scanf("%d", &n);

    while(n--){
        scanf("%lld", &x);

        raizX=sqrt(x);
        soma=0;
        //até a metade, será um divisor inteiro (teste n/2)- depois da metade não tera nenhum numero divisor inteiro;
        //se nao achar nenhum divisor até a raiz quadrada de um numero, não acha nenhum mais
        for(i = 2; i <= raizX; i++){
            //se encontrar algum divisor entre dois e a raiz do numero, ele nao é primo
            if(x % i == 0){
                //o valor encontrado ficará na dentro da ver soma
                soma++;
            }
            //soma != 0 -> não é primo
            if(soma == 2){
                break;
            }
        }
        printf(soma==0 ? "Prime\n" : "Not Prime\n");
    }
    return 0;
}