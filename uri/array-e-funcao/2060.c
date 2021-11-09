#include <stdio.h>

int main(){
    int n, i;
    //tem x multiplos de ...
    int dois=0, tres=0, quatro=0, cinco=0;

    scanf("%d", &n);

    int x[n];
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<n; i++){
        if(x[i] % 2 == 0){
            dois++;
        }
        if(x[i] % 3 == 0){
            tres++;
        }
        if(x[i] % 4 == 0){
            quatro++;
        }
        if(x[i] % 5 == 0){
            cinco++;
        }
    }
    printf("%d Multiplo(s) de 2\n", dois);
    printf("%d Multiplo(s) de 3\n", tres);
    printf("%d Multiplo(s) de 4\n", quatro);
    printf("%d Multiplo(s) de 5\n", cinco);
    return 0;
}