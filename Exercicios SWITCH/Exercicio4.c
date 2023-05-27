// Criar um programa para identificar o valor a ser pago por um plano de saúde dada 
// a idade do conveniado considerando que todos pagam R$ 100 mais um adicional 
// conforme a seguinte tabela:
// a. crianças com menos de 10 anos pagam R$80;
// b. conveniados com idade entre 10 e 30 anos pagam R$50;
// c. conveniados com idade entre 40 e 60 anos pagam R$ 95; e
// d. conveniados com mais de 60 anos pagam R$130.

#include <stdio.h>

int main(){

    int idade, valor;

    printf("Informe a idade do conveniado: \n");
    printf("1 - Criancas com menos de 10 anos\n");
    printf("2 - Conveniados com idade entre 10 e 30 anos\n");
    printf("3 - Conveniados com idade entre 40 e 60 anos\n");
    printf("4 - Conveniados com idade maior que 60 anos\n");
    scanf("%i", &idade);

    switch (idade){
    case 1:
        valor = 80 + 100;
        printf("O valor em reais a ser pago eh de: R$%i,00.\n", valor);
        break;
    case 2:
        valor = 50 + 100;
        printf("O valor em reais a ser pago eh de: R$%i,00.\n", valor);
        break;
    case 3:
        valor = 95 + 100;
        printf("O valor em reais a ser pago eh de: R$%i,00.\n", valor);
        break;
    case 4:
        valor = 130 + 100;
        printf("O valor em reais a ser pago eh de: R$%i,00.\n", valor);
        break;
    
    default:
        printf("Opcao invalida.");
        break;
    }
}