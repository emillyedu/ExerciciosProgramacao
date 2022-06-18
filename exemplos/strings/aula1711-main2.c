#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    if (argc != 2){
        puts("Uso correto: $prog <senha>");
        return 1;
    }

    if (strcmp(argv[1], "1234") == 0){
        puts("Senha correta.");
    }else{
        puts("Senha incorreta.");
        return 2;
    }

    return 0;
}
