#include <stdio.h>

typedef struct {
    char nome[21];
    double nota[2];
    }tAlune;


int main(void){
    FILE *fpEntrada, *fpSaida;
    int a, b, c, q;
    tAlune disc[1000];
    double media;

    fpEntrada = fopen("entrada3.txt", "r");
    if (fpEntrada == NULL){
        puts("erro ao abrir o arquivo de entrada.");
        return 1;
    }

    fpSaida = fopen("discentes.dat", "wb");
    if (fpSaida == NULL){
        puts("erro ao abrir o arquivo de saida.");
        return 1;
    }

    q = 0;
    while(1){
        fgets(disc[q].nome, 21, fpEntrada);
        if (feof(fpEntrada)){
            break;
        }
        fscanf(fpEntrada, "%lf %lf%*c", &disc[q].nota[0], &disc[q].nota[1]);
        //media = (disc[q].nota[0] + disc[q].nota[1]) / 2;
        
        //escreve de um em um
        fwrite(&disc[q], sizeof(tAlune), 1, fpSaida);
        q++;
    }

    fclose(fpEntrada);
    fclose(fpSaida);

    return 0;
}
