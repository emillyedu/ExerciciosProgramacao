#include <stdio.h>

int main(void){
    int a, b, c;

    scanf("%d %d", &a, &b);
    c = a + b;
    printf("%d\n", c);

    return 0;
}


/* comandos:
redireciona entrada ou saida, pra nao ser mais de teclado e tela
./arquivo > saida.txt
./arquivo < entrada.txt
./arquivo < entrada.txt > saida.txt
*/