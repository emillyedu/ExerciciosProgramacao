#include <stdio.h>

int main(void){
    float m, p, media;

    scanf("%f", &m);
    scanf("%f", &p);

    media=m/p;
    printf("%.2f\n", media);
    
    return 0;
}