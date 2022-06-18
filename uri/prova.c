#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 40
#define MAX_MATRICULA 50
#define MAX_ALUNOS 30

typedef struct{
    char matricula[MAX_MATRICULA];
    char sobrenome[MAX_NAME];
}discentes;

void Trim(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
} 
/*
void AtualizaNota( discentes aluno[], char nMatricula[]){
    char chave[MAX_MATRICULA];
    int i;

    i = ProcuraMatricula(aluno, nMatricula);
    if (i == -1){
        puts("Matricula nao encontrada.");
    }

    puts("Matricula encontrada.");
}

int ProcuraMatricula(discentes aluno[], const char *chave){
    int i;

    for(i = 0; i < 5; i++){
        if ( strcmp(chave, aluno[i].matricula ) == 0 )
            return i;
    }

    return -1;
}*/

int main(){
    int op, qtdAlunos = 0;

    discentes aluno[MAX_ALUNOS];
    char arq[31];
    FILE *fp;
    char str[101];
    char nMatricula[MAX_MATRICULA];

    fp = fopen("comentariosProva-v2.txt", "r");

    if(fp == NULL){
        printf("Erro ao ler o arquivo\n");
        return 2;
    }

    while(1){
        fscanf(fp, "%d%c", &nMatricula);

        if(feof(fp)){
            break;
        }
        if(nMatricula == aluno->matricula){
            printf("Matricula encontrada");
        }

    }

    if(fclose(fp) == 0){
        printf("Dados carregados com sucesso\n");
    }else printf("Erro ao carregar dados!\n");

    return 0;
}
