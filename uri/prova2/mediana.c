#include <stdio.h>
/*
* Ordena() : deixa a array na ordem crescente
* Parêmetros :
*       ar[] (entrada) = array ordenada
*       tam (entrada) = tamanho da array 
*/
void Ordena(int ar[], int tam){
    int i, trocou, aux;

    //enquanto trocou for 1, continuará trocando (trocou é uma variável usada como uma variável de controle no loop, que executa repetidamente até que trocou assuma o valor 0 e o loop seja falso - quando a condição é zero, o loop será falso, já que 0 significa que é falso em algoritmo)
    trocou=1;
    while (trocou){
        //se trocou tiver valor 0, é porque nenhuma troca foi realizada
        trocou=0;
        //comparar até o penultimo elemento, já que nao tem nenhum após o ultimo para ser comparado
        for (i = 0; i < tam-1; i++){
            //usando o desvio condicional if, se o elemento do array no indice atual for maior que o proximo elemento (fora de ordem crescente)
            if (ar[i] > ar[i+1]){
                //troque os valores com a ajuda da variável auxiliar
                //auxiliar receberá o valor do elemento atual da array
                aux = ar[i];
                //o array com elemento atual i recebe valor do próximo
                ar[i] = ar[i+1];
                //o proximo valor recebe o valor guardado da variavel auxiliar
                ar[i+1] = aux;
                //se foi feita uma troca, a variavel trocou continuará sendo 1, fazendo com que o loop continue
                trocou=1;
            }
        }
    }
}

/*
* Mediana() : calcula mediana da array
* Parêmetros :
*       ar[] (entrada) = array ordenada
*       n (entrada) = tamanho da array 
* Retorno: retorna mediana da array ordenada que foi criada
*/
float Mediana( int ar[], int n){
    float mediana;
    // ao usar o desvio condicional if novamente, se n%2, ou seja, se for par, para achar a mediana, deve-se encontrar os dois valores centrais e dividi-los por dois
    if(n % 2 == 0 ){
        // já que o ar [n/2-1] é o primeiro valor central e ar [n/2] será o segundo valor central
        //é feito a soma desses dois valores e os divide por 2, que seria a media deles dois (valor da mediana final)
        mediana = ((ar[n/2-1]) + (ar[n/2]))/2.0;

    }
    //se nao for par, se for impar:
    else{
        //ar [n/2] é o valor central unico, por isso a mediana será o proprio valor central unico
        mediana = (ar[n/2]);
    }
    //retornando valor produzido pela função
    return mediana; 
}

int main(){
    //definição das variaveis em int e float
    int n, i;
    float mediana;

    //solicitando valor de n
    scanf("%d", &n);

    //definindo array com n como quantidade de elementos 
    int ar[n];

    //no loop for, enquanto i for igual a zero ou menor que n
    for(i = 0; i < n; i++){
        //solicite os elementos da array
        scanf("%d", &ar[i]);
    }

    //chamando função que ordena de forma crescente a array
    Ordena(ar, n);

    //atribuindo a variavel mediana a funcao "Mediana", que tem como parametro ar e n
    mediana = Mediana(ar, n);

    //imprimindo o valor da mediana
    printf("%.1f\n", mediana);

    return 0;

}