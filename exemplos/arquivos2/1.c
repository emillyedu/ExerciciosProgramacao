#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r, j;

    
    /*printf("Nome do arquivo: ");
    scanf("%s", arq);*/
    
   
    strcpy(arq, "dados2.bin");
                    //binario
    fp = fopen(arq, "wb");
    if (fp == NULL){
        puts("nao foi possivel criar o arquivo.");
        return 1;
    }

    for(i = 0; i < 10; i++){
        j = i + 1;
        //escrever arquivo binario 
        r = fwrite(&j, sizeof(j), 1, fp);
        printf("fwrite escreveu %d\n", r);
    }

    fclose(fp);

    return 0;
}
