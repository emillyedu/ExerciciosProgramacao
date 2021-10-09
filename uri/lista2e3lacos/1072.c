//está dentro do intervalo ou nao?

#include<stdio.h>
#include <stdlib.h>

int main(){
  
    int total, n, dentro, fora, i;
  
    scanf("%d", &total);
    
    dentro = fora = 0;
    
    //Ou while (t--) -> se repetir t vezes
    for(i=0;i<total;i++) {
        scanf("%d",&n);
        if((n>=10) && (n<=20)){
            //como uma soma -> dentro+1 -> quant de dentros
            dentro++;
        }else{
            fora++;
        }
    }
  
    printf("%d em\n%d fora\n", dentro, fora);
    return 0;
}