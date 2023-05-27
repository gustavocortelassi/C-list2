// Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e 
// diga se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os 
// meses tem 31 dias e que estejamos no ano de 2018.

#include <stdio.h>

int main(){

    int dia, mes, ano;

    printf("Entre com o dia: ");
    scanf("%i", &dia);

    printf("Entre com o mes: ");
    scanf("%i", &mes);

    printf("Entre com o ano: ");
    scanf("%i", &ano);

    if(ano != 2018){
        printf("Ano invalido!");
    } else if (mes < 0 || mes > 12){
        printf("Mes invalido!");
    } else if (dia < 1 || dia > 31){
        printf("Dia invalido!");
    } else {
        printf("Feliz aniversario!!");
    }
}