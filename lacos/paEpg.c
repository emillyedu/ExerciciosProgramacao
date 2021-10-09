#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char escolha;
    float t1, r, an, sn, q;
    int n;

    do{
        printf("\na - progressao aritmetica\n");
        printf("g - progressao geometrica\n");
        printf("s - sair\nEscolha: ");
        scanf("%c", &escolha);

        switch(escolha){
            case 'a':
                printf("progressao aritmetica\n");
                printf("primeiro termo: ");
                scanf("%f", &t1);

                printf("razao: ");
                do{
                    scanf("%f", &r);
                }
                while(r == 0);

                printf("numero de termos: ");
                do{
                    scanf("%i", &n);
                }
                while(n <= 0);

                an = (t1+(n-1)*r);
                sn = ((t1+an)*n)/2;
                printf("\ntermo da P.A.: %.2f\n", an);
                printf("soma dos termos da P.A.: %.2f\n", sn);
                break;

        case 'g':
                printf("progressao geometrica\n");
                printf("valor do primeiro termo: ");
                scanf("%f", &t1);

                printf("razao: ");
                do{
                    scanf("%f", &q);
                }
                while(q == 0);

                printf("numero de termos: ");
                do{
                    scanf("%i", &n);
                }
                while(n <= 0);

                an = (t1*pow(q,n-1));
                sn = ((t1*(pow(q,n)-1))/(q-1));
                printf("\ntermo da P.G.: %.2f\n\n", an);
                printf("soma dos termos da P.G.: %.2f\n\n", sn);
                break;
        }
    }
    while(escolha != 's'); 

    return 0;                 
}