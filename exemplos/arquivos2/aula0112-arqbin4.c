#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r, v[5];

    /*
    printf("Nome do arquivo: ");
    scanf("%s", arq);
    */
    strcpy(arq, "dados.bin");

    fp = fopen(arq, "rb");
    if (fp == NULL){
        puts("nao foi possivel abrir o arquivo.");
        return 1;
    }

    while(1){
        //ler de 5 em 5
        r = fread(v, sizeof(int), 5, fp);
        if (feof(fp)){
            break;
        }
        
        printf("fread leu %d elementos\n", r);
        for(i = 0; i < r; i++){
            printf("%d\n", v[i]);
        }
    }

    fclose(fp);

    return 0;
}
