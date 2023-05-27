// Escreva um programa que leia um número inteiro e calcule a soma de 
// todos os divisores desse número, com exceção dele próprio. Ex: a soma 
// dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78

#include <stdio.h>

int main(){

    int numero;

    printf("Entre com um numero: ");
    scanf("%i", &numero);

    while(numero % 2 == 0){
        numero = numero - (numero/2);
        printf("%i", numero);
    }
}