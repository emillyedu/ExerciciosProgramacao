#include <stdio.h>
//crescente
void Ordena(int ar[], int tam){
    int i, trocou, aux;
    
    trocou=1;
    while (trocou){
        trocou=0;
        for (i = 0; i < tam-1; i++){
            if (ar[i] > ar[i+1]){
                aux = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = aux;
                trocou=1;
            }
        }
    }
}

int main(){
    int n, i, cont, j, aux;

    scanf("%d", &n);

    int ar[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    Ordena(ar, n);

    aux = ar[0];
    cont = 1;
    i = 1;
    while(1){
        //caso seja o ultimo valor
        if(i == n+1) break;
        //se o numero que vir depois for igual ao anterior
        if(ar[i] == aux){
            //conte + 1
            cont++;
            //acrescente 1 a i
            i++;
        }
        else{
            //se ao comparar nao forem iguais, print
            printf("%d aparece %d vez(es)\n", aux, cont);
            //array ordenada
            aux = ar[i];
            cont = 0;
        }

    }
    
    return 0;

}