#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 40
#define MAX_DISCIPLINA 50
#define MAX_ALUNOS 30

typedef struct{
    int matricula;
    char name[MAX_NAME];
    float nota1, nota2, nota3;
    float media, notaRec;
    int situacao;
}discentes;

void bemVindo(){
    puts("\tBem-vindo(a) ao cadastramento\n");
}

void Menu() {
    printf("\n---- Opcoes ---- \n"
                "\n1 - Cadastrar disciplina"
                "\n2 - Cadastrar alunos"
                "\n3 - Ver alunos cadastrados"
                "\n4 - Cadastrar notas"
                "\n5 - Ver tabela de notas completa"
                "\n6 - Gerar tabela em arquivo"
                "\n7 - Salvar dados em arquivo"
                "\n8 - Carregar dados em arquivo"
                "\n0 - Sair\n");
}

void Trim(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
} 

void cadastraDisciplina(char *disciplina, int *qtdAlunos){

    printf("Nome da disciplina: ");
    fgets(disciplina, MAX_DISCIPLINA, stdin);
    Trim(disciplina);

    printf("Numero de alunos que \'%s\' possui: ", disciplina);
    scanf("%d%*c", qtdAlunos);

    printf("Disciplina cadastrada!\n");
}

void cadastraAluno(discentes aluno[], int alunos){
    int i;
    printf("\tCadastramento de aluno\n\n");

    for(i = 0; i < alunos; i++){
        printf("Nome do aluno #%d: ", i+1);
        fgets(aluno[i].name, MAX_ALUNOS, stdin);
        Trim(aluno[i].name);

        printf("Matricula do aluno #%d: ", i+1);
        scanf("%d%*c", &aluno[i].matricula);

        printf("\n");
    }
}

void ExibeAlunos(discentes aluno[], const char disciplina[], const int qtdAlunos){
    printf("----------------------------------------------------\n");
    printf("Disciplina: %s\n", disciplina);
    printf("----------------------------------------------------\n");
    printf("Matricula\tNome\n");
    printf("----------------------------------------------------\n");
    for(int i = 0; i < qtdAlunos; i++){
        printf("%d\t\t%s\n", aluno[i].matricula, aluno[i].name);
    }

}

void cadastraNota(discentes aluno[], int qtdAlunos){
    printf("\tCadastramento de nota de aluno\n\n");

    for(int i = 0; i < qtdAlunos; i++){
        printf("#%d Aluno: %s (%d)\n", i+1, aluno[i].name, aluno[i].matricula);
        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &aluno[i].nota3);

        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
    }

    for(int i = 0; i < qtdAlunos; i++){
        if(aluno[i].media >= 4 && aluno[i].media < 7){
            printf("Aluno \"%s\" em recuperacao, media atual: %.1f\nInsira a nota da prova final: ", aluno[i].name, aluno[i].media);
            scanf("%f", &aluno[i].notaRec);
            if( (((aluno[i].media * 6)+(aluno[i].notaRec * 4)) / 10) >= 5){
                //indicador: aprovado
                aluno[i].situacao = 1;
                //media se estiver aprovado
                aluno[i].media = (((aluno[i].media * 6) + (aluno[i].notaRec * 4))/ 10);
            }else{
                //indicador: reprovado
                aluno[i].situacao = 0;
                //media se estiver reprovado
                aluno[i].media = (((aluno[i].media * 6) + (aluno[i].notaRec * 4))/ 10);
            } 
        }
        else if(aluno[i].media < 4){
            //reprovado direto
            aluno[i].situacao = 0;
            //nota de recuperação será preenchida com 0
            aluno[i].notaRec = 0;           
        }
        else{
            //aprovado
            aluno[i].situacao = 1;
            //nota de recuperação será preenchida com 0
            aluno[i].notaRec = 0;
        } 
    }
}

void ExibeTabela(discentes aluno[], const char disciplina[], const int qtdAlunos){
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("Disciplina: %s\n", disciplina);
    printf("-----------------------------------------------------------------------------------------------\n");
    printf(" Matricula\tNome\t\tNota 1\tNota 2\tNota 3\t\tRec\tMedia\tSituacao\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    for(int i = 0; i < qtdAlunos; i++){
        printf("%d\t\t%s\t\t%.1f\t%.1f\t%.1f\t", aluno[i].matricula, aluno[i].name, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3);      
        if(aluno[i].notaRec == 0){
            printf("\t-");
        }
        else{
            printf("\t%.1f", aluno[i].notaRec);
        }
        printf("\t%.1f\t%s\n", aluno[i].media, aluno[i].situacao ? "Aprovado" : "Reprovado");
    }
}

void RelatorioEmArquivo(const char *arq, const char disciplina[], discentes aluno[], const int qtdAlunos){
    FILE *fp;
    int i;
    
    fp = fopen(arq, "wb");
    if(fp == NULL){
        printf("Erro ao criar o arquivo de relatorio \'%s\'\n", arq);
        return;
    }
    fprintf(fp, "-----------------------------------------------------------------------------------------------\n");
    fprintf(fp, "Disciplina: %s\n", disciplina);
    fprintf(fp, "-----------------------------------------------------------------------------------------------\n");
    fprintf(fp, "Matricula\tNome\t\tNota 1\tNota 2\tNota 3\t\tRec\tMedia\tSituacao\n");
    fprintf(fp, "-----------------------------------------------------------------------------------------------\n");
    for(int i = 0; i < qtdAlunos; i++){
        fprintf(fp, "%d\t\t\t%s\t\t\t%.1f\t\t%.1f\t\t%.1f\t\t\t%.1f\t\t%.1f\t\t%s\n", aluno[i].matricula, aluno[i].name, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3, aluno[i].notaRec, aluno[i].media, aluno[i].situacao ? "Aprovado" : "Reprovado");      
    }

    fclose(fp);
}

void SalvarDados(const discentes aluno[], const int qtdAlunos, char disciplina[]){
    FILE *fp;
    int i;

    fp = fopen("notas.dat", "wb");
    if(fp == NULL){
        printf("Erro ao criar arquivo de dados\n");
        return;
    }

    fprintf(fp, "%s\n", disciplina);
    for(i = 0; i < qtdAlunos; i++){
        fprintf(fp, "%d\t\t%s\n%.1f\t%.1f\t%.1f\t%.1f", aluno[i].matricula, aluno[i].name, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3, 
                aluno[i].notaRec);
        fprintf(fp, "\t%.1f\n%s\n\n", aluno[i].media, aluno[i].situacao ? "Aprovado" : "Reprovado");
    }

    if (fclose(fp) == 0){
        printf("Dados salvos com sucesso.\n");
    }
    
}

void CarregaDados(discentes aluno[], int *qtdAlunos, char disciplina[]){
    FILE *fp;
    char str[101];

    fp = fopen("notas.dat", "rb");
    if (fp == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    //lerá todos os caracteres até alcançar \n
    fscanf(fp, "%[^\n]", disciplina);
    while(1){
        fscanf(fp, "%d%*c", &aluno[*qtdAlunos].matricula);

        if(feof(fp)){
            break;
        }

        fscanf(fp, "%[^\n]", aluno[*qtdAlunos].name);
        fscanf(fp, "%f %f %f %f %f",  &aluno[*qtdAlunos].nota1, &aluno[*qtdAlunos].nota2,
         &aluno[*qtdAlunos].nota3, &aluno[*qtdAlunos].media, &aluno[*qtdAlunos].notaRec);
        fscanf(fp, "%d", &aluno[*qtdAlunos].situacao);
        
        *qtdAlunos += 1;
    }

    if(fclose(fp) == 0){
        printf("Dados carregados com sucesso\n");
    }else printf("Erro ao carregar dados!\n");
    
}

int main(){
    int op, qtdAlunos = 0;
    char disciplina[MAX_DISCIPLINA];
    discentes aluno[MAX_ALUNOS];
    char arq[31];

    bemVindo();

    while(1){
        Menu();

        scanf("%d%*c", &op);

        if (op == 0){
            break;
        }

        switch(op){
            case 1:
                cadastraDisciplina(disciplina, &qtdAlunos);
                break;
            case 2:
                cadastraAluno(aluno, qtdAlunos);
                break;
            case 3:
                ExibeAlunos(aluno, disciplina, qtdAlunos);
                break;
            case 4:
                cadastraNota(aluno, qtdAlunos);
                break;
            case 5:
                ExibeTabela(aluno, disciplina, qtdAlunos);
                break;
            case 6:
                printf("Digite o nome do arquivo: ");
                scanf("%s", arq);
                RelatorioEmArquivo(arq, disciplina, aluno, qtdAlunos);
                break;
            case 7:         
                SalvarDados(aluno, qtdAlunos, disciplina);
                break;
            case 8:           
                CarregaDados(aluno, &qtdAlunos, disciplina);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    return 0;
}