#include <stdio.h>
#include <string.h>

#define N_ALUNOS 2

typedef struct {
    int dia, mes, ano;
    } tData;

//tData aninhada ao tAluno
typedef struct {
    double nota1, nota2;
    char nome[31];
    tData nascimento;
    } tAluno;


void Trim(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void ImprimeAluno(tAluno aluno){
    printf("Nome: %s\nData de nascimento: %02d/%02d/%04d\n"
           "Nota 1: %.1lf\nNota 2: %.1lf\n", aluno.nome,
                aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano,
                aluno.nota1, aluno.nota2);
}

void ImprimeAluno2(const tAluno *aluno){
    printf("Nome: %s\nData de nascimento: %02d/%02d/%04d\n"
           "Nota 1: %.1lf\nNota 2: %.1lf\n", aluno->nome,
                aluno->nascimento.dia, aluno->nascimento.mes, aluno->nascimento.ano,
                aluno->nota1, aluno->nota2);
}

tAluno LeAluno(){
    tAluno aluno;

    printf("Nome: ");
    fgets(aluno.nome, 31, stdin);
    Trim(aluno.nome);
    printf("Dia de nascimento: ");
    scanf("%d", &aluno.nascimento.dia);
    printf("Mes de nascimento: ");
    scanf("%d", &aluno.nascimento.mes);
    printf("Ano de nascimento: ");
    scanf("%d", &aluno.nascimento.ano);
    printf("Nota 1: ");
    scanf("%lf", &aluno.nota1);
    printf("Nota 2: ");
    scanf("%lf%*c", &aluno.nota2);

    return aluno;
}

tAluno * LeAluno2(tAluno *aluno){
    printf("Nome: ");
    fgets(aluno->nome, 31, stdin);
    Trim(aluno->nome);
    printf("Dia de nascimento: ");
    scanf("%d", &aluno->nascimento.dia);
    printf("Mes de nascimento: ");
    scanf("%d", &aluno->nascimento.mes);
    printf("Ano de nascimento: ");
    scanf("%d", &aluno->nascimento.ano);
    printf("Nota 1: ");
    scanf("%lf", &aluno->nota1);
    printf("Nota 2: ");
    scanf("%lf%*c", &aluno->nota2);

    return aluno;
}

int main(){
    tAluno aluno[N_ALUNOS];
    tAluno *p;
    int i;

    for(i = 0; i < N_ALUNOS; i++){
        printf("Informacoes do discente #%d:\n", i+1);
        LeAluno2(&aluno[i]);
    } 

    puts("\n--------------\n");
    for(i = 0; i < N_ALUNOS; i++){
        ImprimeAluno2(&aluno[i]);
        printf("Media: %.1lf\n", (aluno[i].nota1 + aluno[i].nota2) / 2);
    }

    return 0;
}
