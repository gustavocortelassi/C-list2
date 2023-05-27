// As Organizações Tabajara resolveram dar um aumento de salário aos seus 
// colaboradores e lhe contratou para desenvolver o programa que calculará os e ajustes. 
// Faça um programa que recebe o salário de um colaborador e o calcule o reajuste 
// segundo os critérios abaixo:
// salários até R$ 280,00 (incluindo) : aumento de 20%
// salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
// salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
// salários de R$ 1500,00 em diante : aumento de 5%
// Após os cálculos informe na tela:
// o salário antes do reajuste;
// o percentual de aumento aplicado;
// o valor do aumento;

#include <stdio.h>

int main(){

    float salario;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if(salario <= 280.00){
        printf("Seu salario atualmente eh: %.2f\n", salario);
        salario = salario * 1.2;
        printf("Com reajuste de 20 porcento, seu salario eh: %.2f\n", salario);
    } else if(salario > 280.00 && salario <= 700.00) {
        printf("Seu salario atualmente eh: %.2f\n", salario);
        salario = salario * 1.15;
        printf("Com reajuste de 15 porcento, seu salario eh: %.2f\n", salario);
    } else if(salario > 700.00 && salario <= 1500.00){
        printf("Seu salario atualmente eh: %.2f\n", salario);
        salario = salario * 1.10;
        printf("Com reajuste de 10 porcento, seu salario eh: %.2f\n", salario);
    } else if(salario > 1500.00){
        printf("Seu salario atualmente eh: %.2f\n", salario);
        salario = salario * 1.05;
        printf("Com reajuste de 5 porcento, seu salario eh: %.2f\n", salario);
    }
}