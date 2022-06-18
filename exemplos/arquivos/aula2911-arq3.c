#include <stdio.h>

int main(void){
    //associação txt: informações sobre a entrada e saida
    FILE *fp;
    int a, b, c;
    char str[31];

    /*associar codigo com o txt
    retorna estrutura File associada ao fp ou null
    abrir arquivo
    nome do arquivo e modo de abertura (r = leitura)
    */
    fp = fopen("entrada2.txt", "r");
    if (fp == NULL){
        puts("erro ao abrir o arquivo.");
        return 1;
    }

    puts("arquivo aberto.");
    while(1){
        //ler de um file
        //fscanf(fp, "%d %d", &a, &b);
       
        //ler linha por linha
        fgets(str, 31, fp);

        //verifica se esta no final do arquivo
        if (feof(fp)){
            break;
        }

        //faz a leitura de uma string (duvidoso)
        sscanf(str, "%d %d", &a, &b);
        printf("lido: %s", str);



        //c = a + b;

        //(transforma string em array)
        sprintf(str, "%d + %d = %d\n", a, b, c);
        puts(str);
    }

    //fechar aquivo na mesma funcao que ela é aberta
    fclose(fp);

    return 0;
}
