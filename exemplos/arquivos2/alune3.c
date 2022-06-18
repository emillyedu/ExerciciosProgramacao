#include <stdio.h>

typedef struct {
    char nome[21];
    double nota[2];
    }tAlune;


int main(void){
    FILE *fpEntrada;
    int a, b, c, q, r, i;
    tAlune disc[1000];
    double media;
    //leitura com binario
    fpEntrada = fopen("discentes.dat", "rb");
    if (fpEntrada == NULL){
        puts("erro ao abrir o arquivo de entrada.");
        return 1;
    }

    q = 0;
    while(1){
        //ler tudo de uma vez
        r = fread(&disc[q], sizeof(tAlune), 1000 - q, fpEntrada);
        q += r;
        printf("foram lidos %d discentes.\n", r);
        if (r == 0){
            break;
        }
    }
    //acompanhar as leituras
    for(i = 0; i < q; i++){
        printf("Nome: %sNotas: %.1lf %.1lf\n", disc[i].nome, disc[i].nota[0], disc[i].nota[1]);
    }

    fclose(fpEntrada);

    return 0;
}
