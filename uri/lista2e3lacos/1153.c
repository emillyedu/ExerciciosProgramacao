//FATORIAL SIMPLES

#include <stdio.h>
int main()
{
    int i, n, fat;

    scanf("%d", &n);
    
    fat=1;
    // for(i=n; i>=1; i--)
    for (i=1; i<=n; i++){
        fat *=i;
    }
    printf ("%d\n",fat);
    return 0;
}