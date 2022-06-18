#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r, lidos, total, v[1000];

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

    total = 30;
    lidos = 0;
    //ler array
    while(lidos < total){
        r = fread(&v[lidos], sizeof(int), total - lidos, fp);
        lidos += r;
        printf("fread leu %d elementos\n", r);
    }
    //exibe
    for(i = 0; i < total; i++){
        printf("%d ", v[i]);
    }

    fclose(fp);

    return 0;
}
