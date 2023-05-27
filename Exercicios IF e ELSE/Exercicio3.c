// Faça um programa que solicite ao usuário três números e os apresente na tela em ordem 
// crescente.

#include <stdio.h>

int main(){

    int numero1, numero2, numero3;

    printf("Entre com o primeiro numero: \n");
    scanf("%i", &numero1);

    printf("Entre com o segundo numero: \n");
    scanf("%i", &numero2);

    printf("Entre com o terceiro numero: \n");
    scanf("%i", &numero3);

    if(numero1 < numero2){
        if(numero2 < numero3){
            printf("A ordem crescente eh: %i, %i, %i\n", numero1, numero2, numero3);
        } else { 
            printf("A ordem crescente eh: %i, %i, %i\n", numero1, numero3, numero2);
        }
    }

    if(numero2 < numero3){
        if(numero3 < numero1){
            printf("A ordem crescente eh: %i, %i, %i\n", numero2, numero3, numero1);
        } else {
            printf("A ordem crescente eh: %i, %i, %i\n", numero2, numero1, numero3);
        }
    }

    if(numero3 < numero1){
        if(numero1 < numero2){
            printf("A ordem crescente eh: %i, %i, %i\n", numero3, numero1, numero2);
        } else {
            printf("A ordem crescente eh: %i, %i, %i\n", numero3, numero2, numero1);
        }
    }
    
}