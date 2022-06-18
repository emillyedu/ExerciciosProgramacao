#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r;

    /*
    printf("Nome do arquivo: ");
    scanf("%s", arq);
    */
    strcpy(arq, "dados2.bin");

    fp = fopen(arq, "rb");
    if (fp == NULL){
        puts("nao foi possivel abrir o arquivo.");
        return 1;
    }

    while(1){
        r = fread(&i, sizeof(int), 1, fp);
        if (feof(fp)){
            //loop infinito
            //rewind(fp);
            break;
        }
        //1 2 3 4 5 6 7 8 9 10
        printf("%d ", i);
        //pula +4 bytes (de um em um) para a frente
        //1 3 5 7 9
        fseek(fp, sizeof(int), SEEK_CUR);
    }

    fclose(fp);

    return 0;
}
