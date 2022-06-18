#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r, v[10];

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
        //acesso em blocos
        r = fread(v, sizeof(int), 10, fp);
        //o programa só vai parar se for o final de arquivo e se nao tiver mais nada pra ler no ultimo loop(r)
        if (feof(fp) && r == 0){
            printf("chegou ao final do arquivo, r = %d\n", r);
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
