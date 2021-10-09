//sequencia em crescimento
// 5        1 2 3 4 5

#include <stdio.h>

int main (void){
    int x, i;
    
    while(1){
        scanf("%d", &x);
        //se x for 0, encerre o loop
        if(x==0){
            break;
        }

        //para i igual a 1 até i menor e igual a x
        for (i = 1; i <= x; i++){
            //print o valor de i e se for o ultimo numeor, \n
            printf("%d%c", i, (i==x ? '\n' : ' '));
        }
    }

    return 0;   
}