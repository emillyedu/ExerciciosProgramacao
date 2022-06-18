#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r;

    
   // printf("Nome do arquivo: ");
    //scanf("%s", arq);
    
    strcpy(arq, "dados2.bin");

    fp = fopen(arq, "rb");
    if (fp == NULL){
        puts("nao foi possivel abrir o arquivo.");
        return 1;
    }

    while(1){
        r = fread(&i, sizeof(int), 1, fp);
        if (feof(fp)){
            break;
        }
        printf("r = %d, i = %d\n", r, i);
    }

    fclose(fp);

    return 0;
}
