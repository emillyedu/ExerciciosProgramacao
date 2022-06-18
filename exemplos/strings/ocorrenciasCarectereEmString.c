#include <stdio.h>

int OcorrenciasCaractereEmString(const char *str, char c){
    int cont = 0, i;

    for(i = 0; str[i] != '\0'; i++){
        if (str[i] == c)
            cont++;
    }

    return cont;
}

int ContaPalavras(const char *str){
    return OcorrenciasCaractereEmString(str, ' ') + 1;
}

int main(void){
    char str1[] = "introducao";
    const char *str2 = "introducao a programacao";
    int q;

    q = ContaPalavras(str1);
    printf("A string \"%s\" tem %d palavras.\n", str1, q);
    q = ContaPalavras(str2);
    printf("A string \"%s\" tem %d palavras.\n", str2, q);


    return 0;
}
