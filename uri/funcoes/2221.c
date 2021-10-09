#include <stdio.h>

int Batalha(int ata, int def, int niv, int bonus){
    int valor;
    valor = ( (ata + def) / 2 );
    if(niv % 2 == 0){
        valor += bonus;
    }
    return valor;
}

int main(){
    int t;
    int ataD, defD, nivD, ataG, defG, nivG;
    int bonus, valorD, valorG; 

    scanf("%d", &t);

    while(t--){
        scanf("%d", &bonus);
        scanf("%d %d %d", &ataD, &defD, &nivD);
        scanf("%d %d %d", &ataG, &defG, &nivG);

        valorD = Batalha(ataD, defD, nivD, bonus);
        valorG = Batalha(ataG, defG, nivG, bonus);

        if(valorG > valorD) printf("Guarte\n");
        else if(valorD > valorG) printf("Dabriel\n");
        else if ( valorD == valorG) printf("Empate\n");
    }


    return 0;
}