#include <stdio.h>
int main(){
    int c1, c2, i, j, coordL=0, coordC=0;
    scanf("%d%d", &c1, &c2);

    int m[c1][c2];

    for(i = 0; i<c1; i++){

        for(j=0; j<c2;j++){
            scanf("%d", &m[i][j]);
        }
    }
    //desconsiderando bordas (comeca da segunda linha e vai até a penultima)
    for(i=1; i<c1-1; i++){
        //desconsiderando bordas (comeca da segunda coluna e vai até a penultuma)
        for(j=1; j<c2-1;j++){
            if(m[i][j]==42){
                if(m[i-1][j-1]==7 && m[i-1][j]==7 && m[i-1][j+1]==7){
                    if(m[i][j-1]==7 && m[i][j+1]==7){
                        if(m[i+1][j-1]==7 && m[i+1][j]==7 && m[i+1][j+1]==7){
                            coordL=i+1;
                            coordC=j+1;
                        }
                    }
                }
            }
        }
    }

    printf("%d %d\n", coordL, coordC);

    return 0;
}