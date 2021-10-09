#include <stdio.h>

int main(void){
    int a, b;

	/*entrada de dados*/
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

	/* printf valores iniciais*/
    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

    /*permutando valores*/
    int permuta = a;
    a = b;
    b = permuta;

	/* printf valores finais */
    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}



