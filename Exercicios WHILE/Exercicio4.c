// Escreva um programa que leia 10 números e escreva o maior valor lido

#include <stdio.h>

int main(){

    int cont = 0;
    float numero, maior = 0;

    do{
        printf("Entre com um numero: ");
        scanf("%f", &numero);

        if(numero > maior){
            maior = numero;
        }

        cont += 1;
    }while(cont < 10);

    printf("O maior numero eh: %.2f", maior);
}