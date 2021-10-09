//impar, par ou nulo +++++ negativo ou positivo

#include <stdio.h>

int main (void){
    int i, t, n;

    scanf("%d", &t);
    
    for(i =1 ; i<=t; i++){
        scanf("%d", &n);
        //n==0 nulo
        if(n==0){
            puts("NULL");
        }
        else{
            //pares + espaco para caber - ou +
            if(n%2 ==0){
                printf("EVEN ");
            }
            //impares
            else{
                printf("ODD ");                
            }

            //positivo
            if(n>0){
                printf("POSITIVE\n");
            }
            //negativo
            else{
                printf("NEGATIVE\n");
            }
        }
    } 

}