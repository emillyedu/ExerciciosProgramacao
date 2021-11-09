#include <stdio.h>

/*
* DescCinco() : multiplica valor total por 0.95
* Parêmetros :
*       valor(entrada) = valor total da compra
*       produtos(entrada) = quantidade de produtos comprados
* Retorno: retorna a expressão que resulta no valor de compra com desconto de 5%
* Observação: é multiplicado o valor total por 0.95, já que 100% - 5% (valor do desconto)
* resulta em 95%, a quantidade do valor total que deverá ser paga. Assim, a porcentagem
* é convertida em decimal para facilitar o cálculo.
*/
double DescCinco(double valor, double produtos){
    return valor * 0.95;
}

/*
* DescDez() : multiplica valor total por 0.90
* Parêmteros :
*       valor(entrada) = valor total da compra
*       produtos(entrada) = quantidade de produtos comprados
* Retorno: retorna a expressão que resulta no valor de compra com desconto de 10%
* Observação: é multiplicado o valor total por 0.90, já que 100% - 10% (valor do desconto)
* resulta em 90%, a quantidade do valor total que deverá ser paga. Assim, a porcentagem
* é convertida em decimal para facilitar o cálculo.
*/
double DescDez(double valor, double produtos){
    return valor * 0.90;
}

/*
* DescCinco() : multiplica valor total por 0.80
* Parêmetros :
*       valor(entrada) = valor total da compra
*       produtos(entrada) = quantidade de produtos comprados
* Retorno: retorna a expressão que resulta no valor de compra com desconto de 20%
* Observação: é multiplicado o valor total por 0.80, já que 100% - 20% (valor do desconto)
* resulta em 80%, a quantidade do valor total que deverá ser paga. Assim, a porcentagem
* é convertida em decimal para facilitar o cálculo.
*/
double DescVinte(double valor, double produtos){
    return valor * 0.80;
}

/*
* DescCinco() : multiplica valor total por 0.70
* Parêmetros :
*       valor(entrada) = valor total da compra
*       produtos(entrada) = quantidade de produtos comprados
* Retorno: retorna a expressão que resulta no valor de compra com desconto de 30%
* Observação: é multiplicado o valor total por 0.70, já que 100% - 30% (valor do desconto)
* resulta em 70%, a quantidade do valor total que deverá ser paga. Assim, a porcentagem
* é convertida em decimal para facilitar o cálculo.
*/
double DescTrinta(double valor, double produtos){
    return valor * 0.70;
}
int main(){
    //definindo variáveis como tipo double
    // v é o valor total da compra e q é a quantidade de produtos comprados
    double v, q;
    //variaveis em double que guardarão posteriormente os valores totais das compras com desconto
    double cinco, dez, vinte, trinta; 

    //usando o scanf para solicitar o valor da compra total e a quantidade de produtos
    scanf("%lf %lf", &v, &q);

    //os desvios condicionais if e else if foram usados para criar condições em relação a quantidade de produtos comprados e o desconto
    //se a quantidade de produtos comprados for 1
    if(q == 1){
        //imprima o valor total da compra, pois não há desconto quando apenas um produto é comprado
        printf("%.2lf\n", v);
    }
    //se a qauntidade de produtos for 2
    else if(q == 2){
        //chamando função double DescCinco, criada para quando o desconto for de 5%, passando como parâmetros de entrada v e q
        //e atribuindo essa função a variável cinco
        cinco = DescCinco(v, q);
        //printando o valor que foi retornado pela função DescCinco
        printf("%.2lf\n", cinco);
    }
    //se a qauntidade de produtos for 3 ou 4
    else if(q == 3 || q == 4){
        //chamando função double DescDez, criada para quando o desconto for de 10%, passando como parâmetros de entrada v e q
        //e atribuindo essa função a variável dez 
        dez = DescDez(v, q);
        //printando o valor que foi retornado pela função DescDez
        printf("%.2lf\n", dez);
    }
    //se a qauntidade de produtos for 5 ou 7
    else if(q == 5 || q == 6){
        //chamando função double DescVinte, criada para quando o desconto for de 20%, passando como parâmetros de entrada v e q
        //e atribuindo essa função a variável vinte
        vinte = DescVinte(v, q);
        //printando o valor que foi retornado pela função DescVinte
        printf("%.2lf\n", vinte);
    }
    //se a qauntidade de produtos for de 7 a mais
    else if(q >= 7 ){
        //chamando função double DescTrinta, criada para quando o desconto for de 30%, passando como parâmetros de entrada v e q
        //e atribuindo essa função a variável trinta
        trinta = DescTrinta(v, q);
        //printando o valor que foi retornado pela função Desctrinta
        printf("%.2lf\n", trinta);
    }

    return 0;
}