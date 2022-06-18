/*variavel estruturada: tem mais de um componente
homogenia: um tipo        heterogenia: varios tipos
elementos são chamados de campos -> acesso pelo nome da estrutura e do campo

fazer tipo de variável:

typedef int meuTipo;
meuTipo nota;

typedef char cpf[11]        ==> char meuCPF[11]
cpf meuCPF              

estrutura:
rotulo só usa pra quando a estrutura tiver como campo ela mesma ==> nao será usado

typedef strct rotulo-da-estrutura{
        tipo1 campo1;
        tipo2 campo2;
    }nome-da-estrutura

acesso aos campos:
variável-estrutura . campo

*/
#include <stdio.h>
#include <string.h>

#define N_ALUNOS 5

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

//estrutura como parametro
void ImprimeAluno(tAluno aluno){
    printf("Nome: %s\nData de nascimento: %02d/%02d/%04d\n"
           "Nota 1: %.1lf\nNota 2: %.1lf\n", aluno.nome,
                aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano,
                aluno.nota1, aluno.nota2);
}
//forma mais recomendada - usando ponteiro e const (+eficiente)
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

//mais adequada - usando ponteiros
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
    //aluno vai ter nota1 nota2 nome e nascimento (estrutura é iniciada com {})
    tAluno aluno = { 7.8, 9.5, "Alex", {1, 3, 2001} };
    tAluno *p;
    int i;

    p = &aluno;

    aluno.nota1 = 8.5;
    //acesso indireto para o espaço de memoria que p está apontando
    (*p).nota2 = 9.8;
    //acesso indireto quando tem um ponteiro apontando pra estrutura, usa a seta:
    p->nota2 = 9.9;
    p->nascimento.dia = 10;     //==> aluno.nascimento.dia = 10;


    LeAluno2(&aluno);
    //passa endereço da variável
    ImprimeAluno2(&aluno);

    /*
    for(i = 0; i < N_ALUNOS; i++){
        printf("Informacoes do discente #%d:\n", i+1);
        printf("\tNome: ");
        fgets(nome[i], 31, stdin);
        Trim(nome[i]);
        printf("\tNota 1: ");
        scanf("%lf", &nota1[i]);
        printf("\tNota 2: ");
        scanf("%lf%*c", &nota2[i]);
    }

    puts("\n--------------\n");
    for(i = 0; i < N_ALUNOS; i++){
        printf("%s\t\t%.1lf\t%.1lf\n", nome[i], nota1[i], nota2[i]);

    }
    */
    return 0;
}
