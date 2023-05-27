// Faça um programa que simule uma calculadora, onde o usuário informa 2 
// números e a operação desejada. (+ - * /).

#include <stdio.h>

int main(){

    int numero_um, numero_dois, operacao, resultado;

    printf("--Calculadora--\n");

    printf("Informe o primeiro numero: ");
    scanf("%i", &numero_um);

    printf("Informe a operacao que deseja realizar:\n");
    printf("1 -> Adicao\n");
    printf("2 -> Subtracao\n");
    printf("3 -> Multiplicacao\n");
    printf("4 -> Divisao\n");
    scanf("%i", &operacao);

    printf("Informe o segundo numero: ");
    scanf("%i", &numero_dois);

    switch (operacao){
    case 1:
        resultado = numero_um + numero_dois;
        printf("O resultado de %i + %i eh: %i.\n", numero_um, numero_dois, resultado);
        break;
    case 2:
        resultado = numero_um - numero_dois;
        printf("O resultado de %i - %i eh: %i.\n", numero_um, numero_dois, resultado);
        break;
    case 3:
        resultado = numero_um * numero_dois;
        printf("O resultado de %i * %i eh: %i.\n", numero_um, numero_dois, resultado);
        break;
    case 4:
        resultado = numero_um / numero_dois;
        printf("O resultado de %i / %i eh: %i.\n", numero_um, numero_dois, resultado);
        break;
    }
}