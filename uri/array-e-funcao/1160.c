//aumento da população
//quantos anos serao necessarios para que a city A tenha
//mais habitantes que a B? -- se A tier uma  texa de cresc maior.
#include <stdio.h>

int main(void){
    int i, n, contador, pa, pb;
    double g1, g2;

    scanf("%d", &n);
    for(i=1; i<=n; i++){
        contador = 0;
        //populacao de a e b e taxa de a e b 
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while(pa <= pb){
            //um pa/pb a mais por ter que passar da outra cidade, ou seja, um ano a mais
            //cresciemnto da pop vezes pop atual +1
            pa *= (g1 / 100.0) + 1.0;
            pb *= (g2 / 100.0) + 1.0;  

            //some cada ano
            contador++;
            
            //ao passar de 100, fale que é mais q um seculo, independente do valor
            //encerre while
            if (contador > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        //se a quant de anos for menor que 100:
        if (contador <= 100)
            printf("%d anos.\n", contador);
    }
    return 0;
}