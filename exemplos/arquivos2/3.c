#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    //ler array de uma vez
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
                // ou (v[0]), tentar ler 5 vezes de uma vez
    r = fread(v, sizeof(int), 5, fp);
    //vai dizer quantos foram lidos realmente
    printf("foram lidos %d elementos\n", r);
    for(i = 0; i < r; i++){
        printf("%d\n", v[i]);
    }

    /*
    while(1){
        r = fread(&i, sizeof(int), 1, fp);
        if (feof(fp)){
            break;
        }
        printf("r = %d, i = %d\n", r, i);
    }
    */

    fclose(fp);

    return 0;
}
