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
    //exibe de tras para frente
    fseek(fp, -sizeof(int), SEEK_END);
    while(1){
        r = fread(&i, sizeof(int), 1, fp);
        if (feof(fp)){
            //rewind(fp);
            break;
        }
        printf("%d ", i);
        //ultima leitura: termina de ler e fica posicionado entre o 1° e 2° elementos
        if (ftell(fp) == sizeof(int)){
            break;
        }
        //volta dois elementos (posicao) e ler de novo
        else{
            fseek(fp, -2 * sizeof(int), SEEK_CUR);
        }
    }
    // 10 9 8 7 6 5 4 3 2 1

    fclose(fp);

    return 0;
}
