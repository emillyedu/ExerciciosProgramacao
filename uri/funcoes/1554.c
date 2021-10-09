#include <stdio.h>
#include <math.h>

int N1(int n, int x, int y){
    int bola, x1, y1, i;
    float d, menorD;
    //valor alto - substituído na primeira iteração
    menorD = 100000.0;
    
    //coordenadas das N bolas.
    for(i = 0; i < n; i++){
        scanf("%d %d", &x1, &y1);

        //distância entre as bolas
        d = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));

        //se distancia for menor que a menor distância já armazenada, substitua.
        if(d < menorD){
            menorD = d;
            //Numeração da menor bola.
            bola = i+1;
        }
    }  
    return bola;  
}
int main(){
    int c, n, x, y, bola, x1, y1, i;
    float d, menorD;

    scanf("%d", &c);
    while(c--){
        scanf("%d", &n);
        scanf("%d %d", &x, &y);

        bola = N1(n, x, y);
        
        printf("%d\n", bola);
    }

    return 0;
}


