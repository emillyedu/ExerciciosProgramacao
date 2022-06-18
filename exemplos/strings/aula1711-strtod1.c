#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double d;
    char *p;

    if (argc != 2){
        puts("Uso correto: $prog <numero real>");
        return 1;
    }

    d = strtod(argv[1], &p);

    printf("str: \"%s\"\ndouble: %lf\nfinal: \"%s\"\n", argv[1], d, p);


    return 0;
}
