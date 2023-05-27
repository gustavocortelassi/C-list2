// Faça um programa que receba um número e identifique se ele é positivo ou negativo. Se 
// positivo apresente o triplo deste numero, se negativo apresente ele elevado ao quadrado.

#include <stdio.h>

int main(){
    
    int numero;

    printf("Entre com o numero: \n");
    scanf("%i", &numero);

    if(numero == 0){
        printf("Seu numero eh zero!\n");
    } else if (numero > 0){
        numero = numero * 3;
        printf("O triplo do seu numero eh: %i!\n", numero);
    } else if (numero < 0){
        numero = numero * numero;
        printf("O seu numero ao quadrado eh: %i!\n", numero);
    }
}