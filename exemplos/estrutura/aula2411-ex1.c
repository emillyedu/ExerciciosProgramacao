#include <stdio.h>
#include <string.h>

#define N_ALUNOS 5

void Trim(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    //notas e nomes se tratam da MESMA PESSOA (pessoa 0, pessoa 1...)
    double nota1[N_ALUNOS], nota2[N_ALUNOS];
    char nome[N_ALUNOS][31];
    int i;

    for(i = 0; i < N_ALUNOS; i++){
        printf("Informacoes do discente #%d:\n", i+1);
        printf("\tNome: ");
        //lendo nome do aluno
        fgets(nome[i], 31, stdin);
        //substitue /n por /0 (finalizar o array)
        Trim(nome[i]);
        printf("\tNota 1: ");
        scanf("%lf", &nota1[i]);
        printf("\tNota 2: ");
        //*c para zerar o buzzer
        scanf("%lf%*c", &nota2[i]);
    }

    //imprimindo o nome e as notas
    puts("\n--------------\n");
    for(i = 0; i < N_ALUNOS; i++){
        printf("%s\t\t%.1lf\t%.1lf\n", nome[i], nota1[i], nota2[i]);

    }

    return 0;
}
