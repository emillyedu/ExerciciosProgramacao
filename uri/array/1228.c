//numero minimo de ultrapassagens para ir da grade inicial para a final
#include <stdio.h>

int main(){
    int largada[25], chegada[25], comp[25];
    int i, j, n, cont=0, aux;

    while (scanf("%d", &n) != EOF){
        cont = 0;

        for(aux = 0; aux < n; aux++){
            scanf("%d", &largada[aux]);
        }

        aux=0;
        for(aux = 0; aux < n; aux++){
            scanf("%d", &chegada[aux]);
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(chegada[j] == largada[i]){
                    comp[j]= i + 25;
                }
            }
        }

        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(comp[i] > comp[j]){
                    aux = comp[j];
                    comp[j] = comp[i];
                    comp[i] = aux;
                    cont++;
                }
            }
        }
        /*while (cont){
            cont = 0;
            for (i = 0; i < n-1; i++){
                if (largada[i] != chegada[i]){
                    aux = largada[i];
                    largada[i] = largada[i+1];
                    largada[i+1] = aux;
                    cont++;
                }     
            }  
        }
        */
        printf("%d\n", cont);

    }
    
    return 0;
}