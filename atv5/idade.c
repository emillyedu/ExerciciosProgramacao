#include <stdio.h>

int main(void){
    int idade;

    printf("Insira a idade: ");
    scanf("%d", &idade);

    if(idade < 21){
        printf("Essa pessoa eh jovem");
    }
    else if (idade >= 21 && idade <= 60){
        printf("Essa pessoa eh adulta");
    }
    else{
        printf("Essa pessoa eh idosa");
    }

    return 0;
}