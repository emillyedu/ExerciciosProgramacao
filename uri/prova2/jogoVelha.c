#include <stdio.h>

int main(){
    //definindo variaveis
    //variavel ganhou armazena quem foi que ganhou na partida do jogo da velha
    char c, ganhou;
    //array para a criação do jogo da velha, que terá dimensões de 3 por 3
    char tabuleiro[3][3]; 
    //variavel flag usada como indicadora para ser usada posteriormente na verificação das linhas e colunas da array e como condição para os printfs.
    int i, j, flag; 

    //atribuindo 0 a flag.
    flag = 0;
    //solicitando elementos da array por linha (i) dentro de um laço for
    for(i = 0; i < 3; i++){
        //varia apenas a coluna e a linha fica fixa que só será alterada ao retornar a condição do loop
        //o %*c foi usado com a finalidade retirar do buffer o \n que fica disposto e não é ignorado pelo tipo char
        scanf("%c %c %c%*c", &tabuleiro[i][0],  &tabuleiro[i][1],  &tabuleiro[i][2]);
        
    }

    //Diagonais: analisando se tem valores iguais em alguma das diagonais da array com o auxilio do desvio condicional if
    if(( tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] == tabuleiro[1][1] ) || (tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] == tabuleiro[1][1] )){ 
        //se for verdadeiro, será atribuido a ganhou o valor do elemento central, já que ele estará presente nas duas diagonais possíveis
        ganhou = tabuleiro[1][1];
        //a variavel de indicação valera -1, para mostrar que entrou nesse if
        flag = -1;  
    }

    //usando outro if, se a flag continuar sendo 0, ou seja, se nenhuma diagonal tiver valores iguais
    if(flag == 0){ 
        //o array será percorrido novamente, por linha e por coluna
        for(i = 0; i < 3; i++){
            //usando if mais uma vez, se tiver alguma linha que tem os tres valores iguais
            if(tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]){ 
                //será atribuido a "ganhou" um dos valores que representam a sequencia correta, que nesse caso foi o que estava centralizado na linha
                ganhou = tabuleiro[i][1]; 
                //a variavel de indicação valera -1, para mostrar que entrou nesse if
                flag = -1;
                //break para parar a execução do bloco de código
                break; 
            //se não, se tiver alguma coluna com todos os elementos iguais
            }else if(tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]){
                //será atribuido a "ganhou" um dos valores que representam a sequencia correta, que nesse caso foi o que estava centralizado na coluna
                ganhou = tabuleiro[1][i]; 
                //a variavel de indicação valera -1, para mostrar que entrou nesse else if
                flag = -1; 
                //break para parar a execução do bloco de código
                break; 
            }
        }
    }
    //por fim, se o flag tiver -1, é porque ele entrou em algum dos ifs e tem um ganhador, por isso, é printado a variável ganhou, que armazenou o elemento que simboliza quem foi o ganhador
    //seja ele por linha, coluna ou diagonal
    if(flag == -1){ 
        printf("%c\n", ganhou);

    }
    //porém, se a flag tiver outro valor, ou seja, 0, a flag não entrou em nenhum momento nos ifs, o que simboliza que não há nenhum ganhador. Por isso, é imprimido a palavra "velha"
    else{ 
        printf("Velha\n");
    }

    return 0;
}