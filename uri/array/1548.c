//fila de recreio: quem tiver a maior nota fica em primeiro...
//reorganizar fila: quantos ficaram imoveis

//100 80 90 ---> 100 90 80 ----> print = 1;
#include <stdio.h>

int NaoTrocam(int fila[], int quant){
    int filaOrg[quant];//Fila que sera organizada de forma decrescente das notas
    int i, naoTroca, troca, aux;

    for (i = 0; i < quant; i++){
        filaOrg[i] = fila [i];
    }
    //Organizacao do array filaOrganizada[] pelo metodo da bolha
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
    int teste, nAlunos;
    int i, j;

    scanf("%d", &teste);//quant filas
    for(i = 0; i < teste; i++){
        scanf("%d", &nAlunos); //quant alunos na fila
        int fila[nAlunos];

        for (j = 0; j < nAlunos; j++){
            scanf("%d", &fila[j]);//notas
        }

        printf("%d\n", NaoTrocam(fila, nAlunos));
        
    }

    return 0;
}