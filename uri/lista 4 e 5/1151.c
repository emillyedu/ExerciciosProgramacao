//fibonacci facil
//5     0 1 1 2 3
//2     0 1 1 2
//7     0 1 1 2 3 5 8

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i=3, primeiro=0, segundo=1, demais;
    
    scanf("%d",&n);
    
    //ou switch case (0, 1, 2, defalt)
    if (n==0){
        return 0;
    }
    if (n==1) printf("%d\n", primeiro);
    if (n==2) printf("%d %d\n", primeiro, segundo);
    else {
        if(n!=1){
            printf("%d %d ", primeiro, segundo);            
        }
        //for(i=3; i<=n; i++)
        while (i<=n) {
            //primeiro novo numero será sempre a soma dos anteriores
            demais = primeiro + segundo;
            //atualizando valores das variaveis
            primeiro = segundo;
            segundo = demais;


            if (i<n) printf("%d ", demais);
            else printf("%d\n", demais);


            i++;
        }
    }
    return 0;
}