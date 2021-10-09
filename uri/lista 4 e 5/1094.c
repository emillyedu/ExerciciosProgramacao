
//experimentos com 3 animais
//quantid e tipo de animal
//saida: total, total de cada animal, porcentagem de cada

#include <stdio.h>

int main(void) {
    int i, n, total=0, quantidade, C=0, R=0, S=0;
    char animal;
    double porcentoC, porcentoR, porcentoS;

    scanf("%d", &n);
    //while(t--)
    for ( i=0; i<n; i++){
        scanf("%d %c", &quantidade, &animal);
        switch (animal){
            case 'C':
            //incrementar valores no contador
                C+=quantidade;
                break;
            case 'R':
                R+=quantidade;
                break;
            case 'S':
                S+=quantidade;
                break;
        }

    }
    total= C+S+R;
 
    //porcento: parte pelo todo vezes 100
    //OU (float) C*100/total;
    porcentoC=(C*100.00)/total; 
    porcentoR=(R*100.00)/total;
    porcentoS=(S*100.00)/total; 

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    //imprimir %: %%
    printf("Percentual de coelhos: %.2lf %%\n", porcentoC);
    printf("Percentual de ratos: %.2lf %%\n", porcentoR);
    printf("Percentual de sapos: %.2lf %%\n", porcentoS);

    return 0;   
}