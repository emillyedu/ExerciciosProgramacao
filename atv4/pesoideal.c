#include <stdio.h>

int main(void){
    //int sexo;
    char sexo;
    float altura, pesoIdeal; 

   /* printf("qual o seu sexo? Feminino, digite 1, masculino, digite 0:");
    scanf("%d", &sexo);*/
    printf("qual o seu sexo? Feminino, digite f, masculino, digite m:");
    scanf("%c", &sexo);
    printf("altura:");
    scanf("%f", &altura);
    
    /*if(sexo == 1){
        pesoIdeal= (62.1*altura) - 44.7;
        printf("seu peso ideal eh: %.2f", pesoIdeal);
    }*/
    if(sexo == 'f'){
        pesoIdeal= (62.1*altura) - 44.7;
        printf("seu peso ideal eh: %.2f", pesoIdeal);
    }
    else{
        pesoIdeal = (72.7*altura) - 58;
        printf("seu peso ideal eh: %.2f", pesoIdeal);
    }
    
    return 0;
}