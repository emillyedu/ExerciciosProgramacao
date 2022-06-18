#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r, j, w, t, v[5] = {25, 24, 13, 42, 10};

    
    printf("Nome do arquivo: ");
    scanf("%s", arq);
    
    //strcpy(arq, "dados.bin");

    fp = fopen(arq, "a+b");
    if (fp == NULL){
        puts("nao foi possivel criar o arquivo.");
        return 1;
    }
    //total do que sera escrito
    t = 5;
    //blocos escritos
    w = 0;
    while(w < t){
        r = fwrite(&v[w], sizeof(int), t - w, fp);
        w += r;
        printf("fwrite escreveu %d\n", r);
    }

    fclose(fp);

    return 0;
}
