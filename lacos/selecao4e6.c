#include <stdio.h>

int main(void){
    int i;
    //multiplos de seis (soma 6 a cada repetição)
    for(i = 6; i <= 1000; i+=6){
        //se o resto por 10 for 4, significa que o numero final é 4
        if((i % 10) == 4){
            printf("%d\n", i);
        }
    }
    return 0;
}