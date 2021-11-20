#include <stdio.h>
#include <string.h>

#define MAX 1010

void OrdenaArrayStrings(char str[][MAX], int t){
    int i, trocou;
    char aux[MAX];

    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < t-1; i++){
            if (strcmp(str[i], str[i+1]) > 0){
                strcpy(aux, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], aux);
                trocou = 1;
            }
        }
    }
}

int main() {
    
    unsigned int n, i, r = 1;
    char pomekon[MAX][MAX];

    scanf("%u", &n);
    for (i = 0; i < n; i++)
        scanf("%s", pomekon[i]);
    
    OrdenaArrayStrings(pomekon, n);
    
    for (i = 1; i < n; i++) {
        if (strcmp(pomekon[i-1], pomekon[i]))
            r++;
    }
    
    printf("Falta(m) %u pomekon(s).\n", 151 - r);

    return 0;
}