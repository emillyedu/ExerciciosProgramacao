//-------------------------------------------------------------------//
// Aluna: Êmilly Eduarda Caroliny silva
// Matrícula: 20210025360
//-------------------------------------------------------------------//

#include <stdio.h>
#include <string.h>
//valores máximos que serão usados ao decorrer do código
#define MAX_SOBRENOME 31
#define MAX_MATRICULA 5
#define DADOS 125

//estrutura tAlunos que tem campos do tipo char para a matrícula e sobrenome dos alunos
typedef struct {
    char matricula[MAX_MATRICULA];
    char sobrenome[MAX_SOBRENOME];
} tAlunos;

int main(){
    //variáveis e ponteiro que serão utilizados no código do tipo char, int, tAlunos e FILE.
    char dados[DADOS];
    //inicialização do indicador 0.
    int indicador=0;
    tAlunos alunos;
    FILE *fp;


    //usando o file fp para associar o código ao arquivo no modo de leitura
    fp = fopen("comentariosProva-v2.txt", "r");

    //se não tiver como acessar o arquivo, retorne
    if(!fp){
        return 1;
    }

    //solicitando a matrícula e a senha para o usuário com o scanf
    scanf("%s %s", alunos.matricula, alunos.sobrenome);


    while(1){
        //usando o fgets para ler os dados de matrícula que está no arquivo
        fgets(dados, MAX_MATRICULA, fp);

        //Comparando a matrícula com o primeiro dado que foi lido, que equivale a matrícula que está no arquivo
        //se forem iguais, quer dizer que a matricula inserida está no arquivo, por isso dá break.
        if(!strcmp(dados, alunos.matricula)){
            break;
        }
        //irá verificar se já está no fim da array, se estiver, consequentemente ainda não encontrou
        //nenhuma matricula igual ao que foi escrito pelo usuário. Irá informar que não foi encontrada e returnará.
        if(feof(fp)){
            printf("Matricula nao encontrada.\n");
            return 2;
        }

    }
    //já que foi finalizado o while acima, coloquei o rewind(fp), para que a leitura do 
    //cógido voltasse até a posição inicial e ler novamente todo o arquivo
    rewind(fp);

    while(1){
        //usando o fgets para ler os dados que está no arquivo, novamente
        fgets(dados, DADOS, fp);

        //agora, dentro de outro while, irá analisar se o sobrenome corresponde ao sobrenome da matrícula
        //que foi digitada.
        //irá verificar com o strstr, já que ele recebe duas strings e retorna o endereço da 1º ocorrencia
        //do segundo no primeiro
        if(strstr(dados, alunos.matricula)){
            //irá ler novamente, dessa vez com tamanho máximo = 125, já que é uma leitura dos nomes, que tem mais elementos
            fgets(dados, DADOS, fp);
            //se o sobrenome digitado anteriormente estiver contido na string dados que leu o nome da pessoa
            if(strstr(dados, alunos.sobrenome)){
                //printará o nome
                printf("Nome: %s", dados);
                while(1){
                    //Dando continuidade, irá continuar lendo os dados, dessa vez na após o nome, os comentários
                    fgets(dados, DADOS, fp);
                    //fazendo a comparação com a ajuda do strcmp.
                    //caso o que for lido for igual aos tres traços, que é a linha que separa os alunos no arquivo
                    //retornará 0 e com isso a condição será verdadeira.
                    if((!strcmp(dados, "---")) || (!strcmp(dados, "---\n"))){
                        //com o indicador que foi criado, se ele ainda tiver com o valor 0, quer dizer que não
                        //passou por outras linhas além da que tem traços, ou seja, nenhum comentário foi cadastrado
                        if(indicador == 0){
                            //se a condição for verdadeira, imprimirá um aviso falando que não há comentários cadastrados
                            printf("Sem comentarios cadastrados.");
                        }
                        //retorna para que o programa encerre
                        return 3;
                    }
                    //o print irá imprimir todas as linhas após a linha que contém o nome completo da pessoa
                    //nesse caso, será os comentários
                    printf("%s", dados);
                    //o indicador será incrementado, para que marque que esse aluno tesm comentários a serem vistos
                    //já que se ainda estiver com 0, é o indicativo que não há comentários, assim como explicado no if acima. 
                    indicador++;                
                }
            }
            //Porém, se o sobrenome digitado não for igual ao sobrenome contido no arquivo, aparecerá a mensagem
            //informando que o sobrenome está incorreto.
            else {
                printf("Ultimo sobrenome incorreto.");
                //retorna para que o programa encerre
                return 4;
            }
        }
        
        fclose(fp); /* fim da leitura do arquivo */
    }

    return 0;
}

// OBSERVAÇÃO: Para melhorar a busca pelo ultimo sobrenome, tentei fazer uma função que leria
// ao contrário o nome do aluno até encontrar ' '. Dessa forma, ele consideraria apenas o
// ultimo sobrenome. Isso iria ser feito com o apoio do "fseek", 
// que serve para posicionar e ler de onde fosse colocado. Nesse caso, eu usaria o seek_end como parâmetro
// Também seria utilizado um for, exemplo: for(i = x; i >= 0; i--), onde o x seria a quantidade de caracteres
// do nome completo, em que teria um if(str[i] == ' '){ break }, depois, seria usado o valor de i.
// porém, não conseguin terminar a execução da ideia.


