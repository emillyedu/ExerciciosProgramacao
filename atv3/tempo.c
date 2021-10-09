#include <stdio.h>
#include <stdlib.h>

int main(void){

    //var tempo, hora, minuto e segundo
    int tempo;
    int hora, minuto, segundo;
    //solicitando o tempo em segundos
    printf("Insira um tempo em segundos:");
    scanf("%d",&tempo);

    //horas
    hora=(tempo/(60*60));
    //o resto do tempo fica armazenado na variavel "tempo"
    tempo=tempo%(60*60);

    //minutos e segundos
    minuto=(tempo/60);
    tempo=(tempo%60);

    segundo=tempo;
    tempo=tempo;

    //imprimindo horas, minutos e segundos
    printf("Horas: %d\n", hora);
    printf("Minutos: %d\n", minuto);
    printf("Segundos: %d\n", segundo);

    return 0;
}