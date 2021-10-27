#include <stdio.h>

int NaoTrocam(int fila[], int quant){
    int filaOrg[quant];
    int i, naoTroca, troca, aux;

    for (i = 0; i < quant; i++){
        filaOrg[i] = fila [i];
    }
    
    troca = 1;
    while (troca){
        troca = 0;

        for (i = 0; i < quant-1; i++){
            if(filaOrg[i] < filaOrg[i+1]){
                aux = filaOrg[i];
                filaOrg[i] = filaOrg[i+1];
                filaOrg[i+1] = aux;

                troca=1;
            }
        }
    }

    naoTroca=0;
    for (i = 0; i < quant; i++){
        if(filaOrg[i] == fila[i]){
            naoTroca++;
        }
    }
    
    return naoTroca;    
}

int main (){
    int teste, nAlunos; //quant alunos na fila
    int i, j;

    scanf("%d", &teste);
    for(i = 0; i < teste; i++){
        scanf("%d", &nAlunos);
        int fila[nAlunos];

        for (j = 0; j < nAlunos; j++){
            scanf("%d", &fila[j]);
        }

        printf("%d\n", NaoTrocam(fila, nAlunos));
        
    }

    return 0;
}