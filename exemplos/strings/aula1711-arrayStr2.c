#include <stdio.h>
#include <string.h>

void RetiraBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void OrdenaArrayStrings(char str[][31], int t){
    int i, trocou;
    char aux[31];

    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < t-1; i++){
            if (strcmp(str[i], str[i+1]) > 0){
                strcpy(aux, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], aux);
                trocou = 1;
            }
        }
    }
}

int main(void){
    char nome[10][31];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o nome #%d: ", i+1);
        fgets(nome[i], 31, stdin);
        RetiraBarraN(nome[i]);
    }

    OrdenaArrayStrings(nome, 5);

    for(i = 0; i < 5; i++){
        printf("Nome #%d: \"%s\"\n", i+1, nome[i]);
    }


    return 0;
}
