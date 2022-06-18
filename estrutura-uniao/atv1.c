/**
    Laboratorio de Introducao a Programacao para Engenharia de Computacao.
    Atividade do dia 24 de novembro de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <string.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void Trim(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void ApresentaMensagem() {
    printf("Ola, esse programa ...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    printf("descricao: ");
    fgets(reg->descricao, MAX_DESCRICAO, stdin);
    Trim(reg->descricao);
    printf("valor: ");
    scanf("%f", &reg->valor);
    printf("x: ");
    scanf("%d", &reg->x);
    printf("y: ");
    scanf("%d%*c", &reg->y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    printf("descricao: %s\nvalor: %.2f\n"
            "x: %d\ny: %d\n", reg->descricao, reg->valor,
            reg->x, reg->y);
}

int ParametroX(){
	int xParametro;

    printf("coordenada x do parametro: ");
    scanf("%d", &xParametro);
    
    return xParametro;
}

int ParametroY(){
    int yParametro;

    printf("coordenada y do parametro: ");
    scanf("%d", &yParametro); 

    return yParametro;
}

float Distancia(tRegistro *reg){

    float distancia;
    int parametroX, parametroY;

    parametroX = ParametroX();
    parametroY = ParametroY();

    distancia = sqrt(pow((reg->x) - parametroX,2) + pow((reg->y) - parametroY, 2));
    return distancia;
}

int main(void){
    tRegistro reg; //guarda o registro
    int opcao;
    float distancia;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);
        getchar();

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                distancia = Distancia(&reg);
                printf("distancia: %.2f\n", distancia);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}