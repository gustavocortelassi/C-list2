// Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor 
// da compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o 
// valor do produto e imprimir o valor da venda.

#include <stdio.h>

int main(){

    float valor_produto, valor_final;

    printf("Entre com o valor do produto: ");
    scanf("%f", &valor_produto);

    if(valor_produto <= 20.00){
        valor_final = valor_produto * 1.45;
        printf("O valor com lucro de 45 porcento eh: %.2f", valor_final);
    } else {
        valor_final = valor_produto * 1.30;
        printf("O valor com lucro de 30 porcento eh: %.2f", valor_final);
    }
}