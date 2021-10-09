//senha fixa, enquanto nao acertar, tente de novo

#include <stdio.h>

int main(void){
    int senhaFixa;
    
    /*do{
        scanf("%d", &senhaFixa);
        if(senhaFixa == 2002){
            printf("Acesso Permitido\n");
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    while (senhaFixa != 2002);*/

    while (1){
        scanf("%d", &senhaFixa);
        if(senhaFixa==2002){
            break;
        }
        puts("Senha invalida");
    }
    puts("Senha correta");
    
    return 0;
}