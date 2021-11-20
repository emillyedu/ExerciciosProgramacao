#include <stdio.h>
#include <string.h>

int main(){
    int t, menu, q, i, quant;
    double totalReais, valor[900];
    char comida[900][51], string[51];

    scanf("%d", &t);
    while (t--){
        totalReais = 0;
        scanf("%d", &menu);
        for(i = 0; i < menu; i++){
            //pedindo o nome da comida e o valor
            scanf("%s %lf", &comida[i], &valor[i]);
        }
        scanf("%d", &q);
        while(q--){
            //pedindo o nome da comida e a quantidade
            scanf("%s %d", &string, &quant);
            for(i = 0; i < menu; i++){
                //comparando as strings, se forem iguais (devolvendo 0, já que não vem nenhuma antes e nem depois)
                if(!strcmp(string, comida[i])){
                    totalReais += quant * valor[i];
                }
            }
        }
        printf("R$ %.2lf\n", totalReais);
        //inicializando comida[] e valor[]
        memset(comida, 0, sizeof(comida));
        memset(valor, 0, sizeof(valor));
    }

    return 0;
}