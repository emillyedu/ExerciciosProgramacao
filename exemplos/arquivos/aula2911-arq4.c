#include <stdio.h>

int main(void){
    FILE *fpEntrada, *fpSaida;
    int a, b, c;

    fpEntrada = fopen("entrada2.txt", "r");
    if (fpEntrada == NULL){
        puts("erro ao abrir o arquivo de entrada.");
        return 1;
    }
                                //add (w - escrita)
    fpSaida = fopen("saida3.txt", "a");
    if (fpSaida == NULL){
        puts("erro ao abrir o arquivo de saida.");
        return 1;
    }

    while(1){
        fscanf(fpEntrada, "%d %d", &a, &b);
        if (feof(fpEntrada)){
            break;
        }
        c = a + b;
        fprintf(fpSaida, "%d + %d = %d\n", a, b, c);
    }

    fclose(fpEntrada);
    fclose(fpSaida);

    return 0;
}
