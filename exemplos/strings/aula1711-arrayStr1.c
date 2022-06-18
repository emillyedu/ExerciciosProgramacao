#include <stdio.h>
#include <string.h>

void RetiraBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
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

    for(i = 0; i < 5; i++){
        printf("Nome #%d: \"%s\"\n", i+1, nome[i]);
    }


    return 0;
}
