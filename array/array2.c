#include <stdio.h>

void Crescente(int array[], int indice){
    int i;

    for ( i = 0; i < indice; i++){
        printf("numeros[%d] = %d\n", i+1, array[i]);
    }
}

void Decrescente(int array[], int indice){
    int i;

    for ( i = 0; i < indice; i++){
        printf("numeros[%d] = %d\n", 10 - i, array[9 - i]);
    }
}

void Posicao5(int array[], int indice){
    printf("\nnumero da posicao 5: %d\n\n", array[4]);
}

void Impares(int array[], int indice){
    int i;

    for ( i = 0; i < indice; i++){
        if (i % 2 !=0){
            printf("numeros[%d] = %d\n", i, array[i]);
        }
    }
}
//a soma de todos os valores armazenados no array.
int Soma(int array[], int indice){
    int i, soma=0;

    for ( i = 0; i < indice; i++){
        soma += array[i];
    }
    return soma;
}

double MediaArray(int array[], int indice){
    double media=0;

    media = Soma(array, indice)/10.0;
    return media;
}
//retorna verdadeiro caso um elemento esteja presente no array.
//procurar esse elemento escolhido na array
int EmArray(int array[], int indice, int elemento){
    int i;

    for( i = 0; i < indice; i++){
        if(array[i] == elemento){
            return 1;
        }
    }
    return 0;
}
//maximo valor da array eh
int MaximoValorArray(int array[], int indice){
    int i, maximo=0;

    maximo = array[0];
    for(i = 0; i < indice; i++){
        if(array[i] > maximo){
            maximo = array[i];
        }
    }
    return maximo;
}
//retorna verdadeiro caso os elementos estejam ordenados e falso caso contrário.
int EhArrayOrdenada(int array[], int indice){
    int i, ordem=0;
    //comparação até o penultimo, já que nao tem com quem o ultimo comparar
    for (i = 0; i < indice - 1; i++){
        //compara o presente com o proximo
        if(array[i] > array[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    //QUESTÃO 1 definir um valor inicial para a array
    int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, tam, maximo=0, soma=0, crescente=0, ordenada=0;
    int naArray=0, procurado=0;
    double media=0;

    //tamanho da array  
    tam = sizeof(numeros)/sizeof(numeros[0]);

    //QUESTAO 2 solicitar valores da array
    /*for (i = 0; i < tam; i++){
        printf("insira o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }*/

    //apresentar array crescente com base nos indices 
    printf("\ncrescente\n");
    Crescente(numeros, tam);

    //apresentar array decrescente com base nos indices 
    printf("\ndecrescente\n");
    Decrescente(numeros, tam);

    //apresentar o elemento da posicao 5 na array
    Posicao5(numeros, tam);

    //apresentar apenas os valores dos elementos em que seus indices sao impares
    printf("numeros com indices impares\n");
    Impares(numeros, tam);

    //soma dos numeros
    soma = Soma(numeros, tam);
    printf("\nsoma dos numeros: %d\n", soma);

    //QUESTAO 3  media dos numeros da array
    media = MediaArray(numeros, tam);
    printf("\nmedia dos numeros inseridos: %.1f\n\n", media);
    
    //QUESTAO 4  procurar um numero na array e retornar se está ou não na lista
    printf("insira o numero que deseja procurar na array: ");
    scanf("%d", &procurado);

    naArray = EmArray(numeros, tam, procurado);
    if(naArray == 1) printf("o numero escolhido esta na array\n"); 
    else printf("o numero escolhido nao esta na array\n"); 

    //QUESTAO 5  valor do maior elemento armazenado no array.
    maximo = MaximoValorArray(numeros, tam);
    printf("\nO maior numero da array eh: %d\n", maximo);

    //QUESTAO 6  array é ou não ordenada
    ordenada = EhArrayOrdenada(numeros, tam);
    if(ordenada == 1) printf("\nA array eh ordenada\n");
    else printf("\nA array nao eh ordenada\n");

    return 0;
}