#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, contador;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
    contador = 0;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
        contador++;
	}

    puts("Voce acertou!");
    printf("Foram feitos %d palpites ate o correto", contador);
	return 0;
}
