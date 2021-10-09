#include <stdio.h>

int main(void){

    int p, r;
    scanf("%d", &p);
    scanf("%d", &r);

    if(p == 1 && r == 1){
        printf("A\n");
    }
    else if(p==1 && r==0){
        printf("B\n");
    }
    else{
        printf("C\n");
    }

    return 0;
}