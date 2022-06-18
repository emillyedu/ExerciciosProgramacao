#include <stdio.h>

int main(void){
    int a, b, c;
    //quando chegar no final do arquivo txt, dá eof (fim do arquivo)
    while( scanf("%d %d", &a, &b) != EOF ){
        c = a + b;
        printf("%d\n", c);
    }

    return 0;
}

/* comandos:
./arquivo > saida.txt
./arquivo < entrada.txt
./arquivo < entrada.txt > saida.txt
*/
