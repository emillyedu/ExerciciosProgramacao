//quantas pessoas acertaram o tipo de chá?
//1 (tipo)    1 2 3 2 1 (palpites)      2(saida)      

#include <stdio.h>
int main (void){
    int tipoCorreto, palpite, i;
    int contador=0;

    scanf("%d", &tipoCorreto);
    //5 palpites
    for(i=0; i<5; i++){
        scanf("%d", &palpite);
        //se for igual, guarde valor na variavel conatdor e some com os que corresponderem com a condição
        if(palpite==tipoCorreto){
            contador++;
        }
    }
    printf("%d\n", contador);
    return 0;
}