#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i, q;

    if (argc != 3){
        puts("Uso correto: $prog <quant> <msg>");
        return 1;
    }

    q = atoi(argv[1]);
    for(i = 0; i < q; i++){
        printf("#%d: %s\n", i+1, argv[2]);
    }

    return 0;
}
