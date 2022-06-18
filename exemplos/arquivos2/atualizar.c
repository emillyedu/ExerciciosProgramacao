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
                    //r+ ou rb+ : ler e escrever (atualizar cadastro por exemplo)
    fp = fopen(arq, "r+b");
    if (fp == NULL){
        puts("nao foi possivel abrir o arquivo.");
        return 1;
    }

    while(1){
        //ler de um em um
        r = fread(&i, sizeof(int), 1, fp);
        if (feof(fp)){
            //rewind(fp);
            break;
        }
        //se for par
        if (i % 2 == 0){
            puts("atualizando");
            //inverte sinal
            i = i * -1;
            //posiciona arquivo a uma posicao a cima, tendo como base a posição atual
            fseek(fp, -sizeof(int), SEEK_CUR);
            //reescreve por cima (atualiza)
            //so usa write quando for wb ou ab ou r+b
            fwrite(&i, sizeof(int), 1, fp);
        }
        //printf("%d ", i);
    }

    fclose(fp);

    return 0;
}
