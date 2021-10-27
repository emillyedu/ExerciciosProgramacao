#include <stdio.h>

int main(){
    int nEstrelas; //numero de fazendas
    unsigned long long carneiros; //total de carneiros
    int primeiroPar; //primeira estrela com qunt par de carneiros
    int estrelasAtacadas; //estrelas atacadas
    int carneirosRoubados; //quant carneiros roubados
    int i;


    scanf("%d", &nEstrelas);
    int estrela[nEstrelas];

    //ler quant de carneiros em cada estrela
    carneiros = 0;
    for(i = 0; i < nEstrelas; i++){
        scanf("%d", &estrela[i]); //cada estrela armazena o n de carneiros proprio
        carneiros += estrela[i]; // soma da quant de carneiros
    }
    
    /*
    Para chegar em uma Estrela com número par, o irmão louco com certeza passou apenas por
    Estrelas com números ímpares de carneiros, pois só assim ele pode seguir para uma Estrela
    que nunca passou antes.

    Pode-se perceber que se todas as Estrelas contiverem números ímpares, o irmão louco passará
    apenas uma vez em cada Estrela, já que sempre passará para a próxima casa. Se ele passar por
    uma Estrela com um número par de carneiros, porém, ele irá voltar e passar por todas as
    Estrelas que já passou, pois agora possuem um número par de carneiros, já que para ter avançado
    essas Estrelas tinham números ímpares, mas tiveram um de seus carneiros roubados.

    A partir dessas inferências, podemos usar de fórmular para calcular a quantidade de carneiros
    roubados e a quantidade de Estrelas atacadas.
    */

    //encontrar primeira estrela com qaunt par de carneiros
    int umCarneiro=0; /*quant de estrelas com um carneiro que antecedem
                         a primeira estrela com uma quant par de carneiro*/
    primeiroPar = -1;
    for(i = 0; i < nEstrelas; i++){
        if(estrela[i] == 1){
            umCarneiro++;
        }
        else if(estrela[i] % 2 == 0){
            primeiroPar = i;
            break;
        }
    }

    if(primeiroPar == -1){//apenas impares
        carneirosRoubados = nEstrelas;
        estrelasAtacadas = nEstrelas;
    }
    else{//algum par
        carneirosRoubados = (primeiroPar * 2 + 1) - umCarneiro;
        estrelasAtacadas = primeiroPar + 1;
    }

    printf("%d %llu\n", estrelasAtacadas, (unsigned long long)(carneiros - carneirosRoubados));

    return 0;

}
