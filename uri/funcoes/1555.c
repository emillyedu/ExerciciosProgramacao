#include <stdio.h>
#include <math.h>

int Rafael (int x, int y){
    return (pow(3*x, 2)) + pow(y, 2);
}

int Beto(int x, int y){
    return  2 * (pow(x, 2)) + pow(5*y, 2);
}
int Carlos(int x, int y){
    return  -100*x + pow(y, 3);
}

int main (){
    int n, x, y, i;
    int rafael, beto, carlos;

    printf("n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("x e y: ");
        scanf("%d %d", &x, &y);

        rafael = Rafael(x, y);
        beto = Beto(x, y);
        carlos = Carlos(x, y);

        if(rafael>beto && rafael>carlos){
            printf("Rafael ganhou\n");
        }
        else if(beto>rafael && beto>carlos){
            printf("Beto ganhou\n");
        }
        else{
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}