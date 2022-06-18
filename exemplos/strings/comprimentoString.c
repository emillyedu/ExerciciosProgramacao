#include <stdio.h>

int TamanhoStr(const char *str){
    int t = 0, i;

    for(i = 0; str[i] != '\0'; i++){
        t++;
    }

    return t;
}

int main(void){
    char str1[] = "introducao";
    const char *str2 = "programacao";
    int tam;

    tam = TamanhoStr(str1);
    printf("A string \"%s\" tem tamanho %d.\n", str1, tam);

    tam = TamanhoStr(str2);
    printf("A string \"%s\" tem tamanho %d.\n", str2, tam);

    return 0;
}
