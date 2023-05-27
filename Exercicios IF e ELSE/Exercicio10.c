// Entrar com o salario de uma pessoa e imprimir o desconto do INSS segundo a tabela a 
// seguir:
// Menor ou igual a R$ 600,00 Isento
// Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
// Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
// Maior que R$ 2000,00 30%

#include <stdio.h>

int main(){

    float salario, ajuste;

    printf("Entre com o salario: ");
    scanf("%f", &salario);

    if(salario <= 600.00){
        printf("Isento de imposto de renda\n");
    } else if(salario > 600.00 && salario <= 1200.00){
        ajuste = salario * 0.2;
        printf("Voce deve %.2f em impostos ", ajuste);
    } else if(salario > 1200.00 && salario <= 2000.00){
        ajuste = salario * 0.25;
        printf("Voce deve %.2f em impostos ", ajuste);
    } else if(salario > 2000.00){
        ajuste = salario * 0.3;
        printf("Voce deve %.2f em impostos ", ajuste);
    }
}