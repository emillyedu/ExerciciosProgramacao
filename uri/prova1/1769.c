#include <stdio.h>

int main(){
    //definindo variáveis
    int n, indicador = 0, primeiro, segundo, soma, cont;

    //solicitando o número para a verificação
    scanf("%d", &n);
    
    //se o número for 2, a variável cont terá seu valor atribuido a 3, que é a posição de 2 na sequência
    if (n==2){
        cont=3;
        //o valor de cont será imprimido
        printf("%d\n", cont);
    } 
    //se n for diferente de 2
    else{
        //primeiro termo da sequencia é equivalente a 1
        primeiro = 1;
        //segundo termo da sequencia é equivalente a 2
        segundo = 2;
        soma = 2;
        //o for comecará em 3 pois o 2 já foi imprimido, fazendo com que o intervalo que será percorrido comece em 3 e termine apenas quando i for menor e igual ao número solicitado.
        for (int i = 3; i <= n; i++){
            //o novo número será sempre a soma dos seus anteriores
            soma = primeiro + segundo;
            //para atualizar os valores das variáveis, é necessário fazer esta troca: a variavel "primeiro" terá o valor do "segundo" atribuido;
            //já o "segundo", terá o valor da "soma" atribuido, já que ela simboliza o novo termo que foi criado anteriormente.
            primeiro = segundo;
            segundo = soma;
            
            //se o resultado da soma for igual ao numero
            if (soma == n) {
                //printe o valor de i com um adicionado
                printf("%d\n", i + 1);
                //indicador que o termo existe na sequência de Fibonacci
                indicador = 1;
                //encerre o while
                break;
            }
        }
        //se o indicador for igual a zero, ou seja, se o número que foi digitado não for igual a soma, e consequentemente, não está incluso na sequência de Fibonacci
        if (indicador == 0) {
            //o cont passará a ter valor -1, que será impresso logo em seguida.
            cont= -1;
            printf("%d\n", cont);            
        }
    }

    return 0;
}