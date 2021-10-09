//soma de raios para formar um só

#include <stdio.h>

int main (void){
    int i, t, r1, r2, r;

    scanf("%d", &t);
    
    for(i =1 ; i<=t; i++){
        scanf("%d %d", &r1, &r2);
        r=r1+r2;
        printf("%d\n", r);
    }

    return 0;
}