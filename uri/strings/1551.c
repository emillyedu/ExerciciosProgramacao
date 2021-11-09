#include <stdio.h>
#include <string.h>

int main(){
    int t, i, cont[26], j, soma;
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxlz";
    char frase[1002];

    scanf("%d%*c", &t);

    while(t--){
        //solicitar frase
        fgets(frase, 1002, stdin);
        //preencher cont com valor 0
        memset(cont, 0, sizeof(cont));

        for(i = 0; frase[i] != '\0'; i++){
            for(j = 0;  j < 26; j++){
                if(frase[i] == alfabeto[j]){
                    //substitue o 0 por 1 na array cont para os que tem a letra
                    cont[j] = 1;
                }
            }
        }

        soma = 0;
        //conta quantas letras estao presentes na frase
        for(i = 0; i < 26; i++){
            soma += cont[i];
        }

        if(soma == 26){
            printf("frase completa\n");
        }else if(soma >= 13 ){
            printf("frase quase completa\n");
        }else printf("frase mal elaborada\n");

        soma = 0;
        
    }

    return 0;
}