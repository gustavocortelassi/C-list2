// Escreva um programa que solicita 10 números ao usuário, e ao final mostre o 
// maior número digitado pelo usuário

#include <stdio.h>

int main(){

    int i, numero, aux = 0, maior = 0;

    for(i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%i", &numero);

        if(numero > aux){
            maior = numero;
            aux = numero;
        }
    }
    printf("O maior numero eh: %i", maior);
}