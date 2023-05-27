//  Escreva um programa que leia números inteiros no intervalo [0, 50] e os armazene
// em um vetor com 10 posições. Preencha um segundo vetor apenas com os números
// ímpares do primeiro vetor. Imprima os dois vetores.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int vetor[10], vet2[10] = {0,0,0,0,0,0,0,0,0,0};
    int i;

    for (i = 0; i < 10; i++){
        vetor[i] = 1 + rand() % 50;
    }

    for (i = 0; i < 10; i++){
        if(vetor[i] % 2 == 1){
            vet2[i] = vetor[i];
        }
    }

    printf("\nVetor 1: ");
    for (i = 0; i < 10; i++){
        printf("\n%d", vetor[i]);
    }
    
    printf("\nVetor 2: ");
    for (i = 0; i < 10; i++){
        printf("\n%d", vet2[i]);
    }
    
}