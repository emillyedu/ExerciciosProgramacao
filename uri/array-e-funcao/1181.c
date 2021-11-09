#include <stdio.h>

int main(){
    int l, i, j;
    char opcao;
    double m[12][12], soma=0;

    //informar linha desejada
    scanf("%d%*c", &l);
    //informar operacao (soma ou media)
    scanf("%c", &opcao);

    //acesse todas as linhas
    for(i=0; i<12; i++){
        //antes de ir para a outra linha, acesse todas
        //as colunas desta linha
        for(j=0; j<12; j++){
            //informe os numeros da matriz
            scanf("%lf", &m[i][j]);
            //nas colunas da linha escolhida, some seus numeros:
            if(i==l) soma = soma + m[l][j];
        }
    }
    //se a opracao for de soma
    if(opcao == 'S'){
        printf("%.1lf\n", soma);
    }
    //se for de media
    else{
        printf("%.1lf\n", soma/12);
    }
    return 0;
}