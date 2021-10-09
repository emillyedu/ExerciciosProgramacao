#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, numero;

	srand(time(NULL));
	correto = rand() % 100;
    palpite = 1;

    while (palpite != correto) {
        for (numero = 1; numero <= 5; numero++){
            printf("Palpite numero %d\n", numero);

            printf("Adivinhe o numero: ");
            scanf("%d", &palpite);
                if (palpite > correto){
                    puts("Palpite alto!");
                }else if (palpite < correto){
                    puts("Palpite foi baixo!");
                }      
        }
        printf("Suas tentativas acabaram");
        return 1;

    }
    //OU
    /*if(palpite == correto){
        printf("voce acertou");
    }
    else{
        printf("vove errou com 5 palpites);
    }*/
    
    puts("Voce acertou!");

	return 0;
}
