#include <stdio.h>

int main(){
    int t, i, cont=0;
    char str[1000];

    scanf("%d", &t);

    while (t--){
        scanf("%s", &str);
        for(i=0; str[i] != '\0'; i++){
            if(str[i] == '1'){
                cont+=2;
            }
            if(str[i] == '7'){
                cont+=3;
            }
            if(str[i] == '4'){
                cont+=4;
            }
            if(str[i] == '2' || str[i] == '3' || str[i] == '5'){
                cont+=5;
            }
            if(str[i] == '6' || str[i] == '9' || str[i] == '0'){
                cont+=6;
            }
            if(str[i] == '8'){
                cont+=7;
            }
        }
        printf("%d leds\n", cont);
        cont = 0;
    }

    return 0;
}