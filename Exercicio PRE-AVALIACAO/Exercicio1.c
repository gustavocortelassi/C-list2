#include <stdio.h>

int main(){

    float salario;

    printf("Informe o salario a calcular o reajuste: ");
    scanf("%f", &salario);

    if (salario > 0 && salario < 280.00) {
        salario = salario * 1.2;
        printf("Com aumento de 20 porcento, seu salario eh de: %.2f", salario);
    } else if (salario > 280.00 && salario < 700.00) {
        salario = salario * 1.15;
        printf("Com aumento de 15 porcento, seu salario eh de: %.2f", salario);
    } else if (salario > 700.00 && salario < 1500.00) {
        salario = salario * 1.10;
        printf("Com aumento de 10 porcento, seu salario eh de: %.2f", salario);
    } else if (salario > 1500.00) {
        salario = salario * 1.05;
        printf("Com aumento de 5 porcento, seu salario eh de: %.2f", salario);
    } else {
        printf("Invalido\n");
    }
}