/*uniao: todos os membros ocupam o mesmo espaço da memoria

sempre vai ter espaço para o maior
só dá para usar um campo

*/

#include <stdio.h>
#include <string.h>
//qualquer variável desse tipo só contem unid ou peso(valores possiveis)
typedef enum {UNIDADES, PESO} tTipoDeQuantidade;

//sódá para usar um dos campos pois um se sobrepoe ao outro
typedef union {
    //ocupa metado do espaço (4)
    int unidades;
    //ocupa todo o espaço (8)
    double peso;
    } tQuantidade;

typedef struct {
    char descricao[21];
    double precoUnitario;
    //ou um ou outro
    tTipoDeQuantidade tipoDeQuantidade;
    tQuantidade quantidade;
    } tProduto;

double ImprimeCalcula(const tProduto *prod){
    double subTotal;

    if (prod->tipoDeQuantidade == UNIDADES){
        printf("%d", prod->quantidade.unidades);
        subTotal = prod->quantidade.unidades * prod->precoUnitario;
    }else{
        printf("%.3lf", prod->quantidade.peso);
        subTotal = prod->quantidade.peso * prod->precoUnitario;
    }
    printf("x \'%s\' R$ %.2lf: R$ %.2lf\n", prod->descricao, prod->precoUnitario, subTotal);

    return subTotal;
}

int main(void){
    tProduto produto[10];
    double total;
    int q = 0, i, tipo;

    while(q < 3){
        printf("Produto sendo comprado: ");
        fgets(produto[q].descricao, 21, stdin);
        //colocando \0 
        produto[q].descricao[strlen(produto[q].descricao)-1] = '\0';
        printf("Preco unitario: R$ ");
        scanf("%lf", &produto[q].precoUnitario);
        printf("Digite (1) para unidades ou (2) para peso: ");
        scanf("%d", &tipo);
        if (tipo == 1){
            produto[q].tipoDeQuantidade = UNIDADES;
            printf("Unidades: ");
            scanf("%d%*c", &produto[q].quantidade.unidades);
        }else{
            produto[q].tipoDeQuantidade = PESO;
            printf("Peso: ");
            scanf("%lf%*c", &produto[q].quantidade.peso);
        }
        q++;
    }

    puts("\n-------RESUMO DA COMPRA-------\n");
    total = 0;
    for(i = 0; i < 3; i++){
        total += ImprimeCalcula(&produto[i]);
    }
    printf("TOTAL: R$ %.2lf\n", total);

    return 0;
}