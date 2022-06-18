#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r, j, v[5] = {5, 4, 3, 2, 1};

    /*
    printf("Nome do arquivo: ");
    scanf("%s", arq);
    */
    strcpy(arq, "dados.bin");

    fp = fopen(arq, "ab");
    if (fp == NULL){
        puts("nao foi possivel criar o arquivo.");
        return 1;
    }

    r = fwrite(v, sizeof(int), 5, fp);
    printf("fwrite escreveu %d\n", r);

    /*
    for(i = 0; i < 10; i++){
        j = i * 2;
        r = fwrite(&j, sizeof(j), 1, fp);
        printf("fwrite escreveu %d\n", r);
    }
    */

    fclose(fp);

    return 0;
}
