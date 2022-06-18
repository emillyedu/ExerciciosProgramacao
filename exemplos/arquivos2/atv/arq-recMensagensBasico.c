#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codMensagem;
    int indice;
    char letra;
}tLetra;

int main(void){
    FILE *fp;
    tLetra letra;


    fp = fopen("nome do arquivo", "modo correto");
    if (fp == NULL) { //verificar se conseguiu abrir
        return 1;
    }

    while(1){
        //ler uma letra com fread
        //fread(endereco da variavel, tamanho do tipo da variavel, 1 unidade, fp);
        if (feof(fp) || ferror(fp)){
            break;
        }
        //fazer algo com a letra
    }
    fclose(fp); //nao esquecer

    //imprimir mensagens

    return 0;
}
