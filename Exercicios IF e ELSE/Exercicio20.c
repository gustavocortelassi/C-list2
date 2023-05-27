// Fazer um programa que possa converter uma determinada quantia dada em reais para 
// uma das seguintes moedas:
// • F – franco suíço
// • L – libra esterlina
// • D – dólar
// • M – marco alemão
// (consultar na internet os valores atuais de cada moeda)

#include <stdio.h>

int main(){

    char moeda;
    float valor, valor_convertido;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Para qual moeda deseja converter:\n");
    printf("F - FRANCO SUICO - R$5,55,\n");
    printf("L - LIBRA ESTERLINA - R$6,25,\n");
    printf("D - DOLAR - R$5,20,\n");
    printf("E - EURO - R$5,53,\n");
    printf("seguindo a cotacao do dia 05/03/2023.\n");
    scanf("%c", &moeda);

    if (moeda == 'F') {
        valor_convertido = valor / 5.55;
        printf("Valor convertido: %.2f francos suíços\n", valor_convertido);
    } else if (moeda == 'L') {
        valor_convertido = valor / 6.25;
        printf("Valor convertido: %.2f libras esterlinas\n", valor_convertido);
    } else if (moeda == 'D') {
        valor_convertido = valor / 5.20;
        printf("Valor convertido: %.2f dólares\n", valor_convertido);
    } else if (moeda == 'E') {
        valor_convertido = valor / 5.53;
        printf("Valor convertido: %.2f euros\n", valor_convertido);
    } else {
        printf("Moeda inválida!\n");
    }
}