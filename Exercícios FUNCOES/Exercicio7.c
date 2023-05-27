// Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções 
// de pagamento, solicita a opção desejada e imprime o valor total das prestações (se 
// houverem).
// a) Opção: a vista com 10% de desconto
// b) Opção: em duas vezes (preço da etiqueta)
// c) Opção: até 10 vezes com 3% de juros ao mês (somente para compras acima de 200)

#include <stdio.h>

calculoOpcao1(float valor){
    float resultado;

    resultado = valor * 0.9;

    return resultado;
}

calculoOpcao2(float valor){
    float resultado;

    resultado = valor / 2;

    return resultado;
}

calculoOpcao3(float valor){
    float resultado, juros;

    if(valor > 200){
        juros = valor * 0.03;
        resultado = (valor + juros) / 10;
    } 

    return resultado;
}

int main(){

    float valor;
    int opcao;

    printf("Informe o total gasto na loja: ");
    scanf("%f", &valor);

    printf("Informe a opcao de pagamento: \n");
    printf("1 - a vista com 10 porcento de desconto");
    printf("2 - em duas vezes (preço da etiqueta)");
    printf("3 - ate 10 vezes com 3 porcento de juros ao mes (somente para compras acima de 200)");
    scanf("%i", &opcao);

    switch (opcao){
        case 1:
            printf("Opcao 1: %.2f", calculoOpcao1(valor));
        break;

        case 2:
            printf("Opcao 2: %.2f", calculoOpcao2(valor));
        break;

        case 3:
            printf("Opcao 3: %.2f", calculoOpcao3(valor));
        break;
    
        default:
            printf("Valor invalido!");
        break;
        }
}