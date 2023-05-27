// Faça um programa que leia dois vetores de 10 posições e calcule outro vetor
// contendo, nas posições pares os valores do primeiro e nas posições impares os
// valores do segundo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int vet1[10], vet2[10], vet3[20];
    int i;

    //preenche vet 1
    for(i = 0; i < 10; i++){
        vet1[i] = 1 + rand() % 100;
    }

     //preenche vet 2
    for(i = 0; i < 10; i++){
        vet2[i] = 1 + rand() % 100;
    }   

    //vet3
    for(i = 0; i < 20; i++){
        if(i % 2 == 0){
            vet3[i] = vet1[i/2];
        } else {
            vet3[i] = vet2[i/2];
        }
    }
    
    printf("Vetor 1 (posicoes pares):\n");
    for (i = 0; i < 10; i++){
        printf("%5d", vet1[i]);
    }
    
    printf("\nVetor 2 (posicoes impares):\n");
    for (i = 0; i < 10; i++){
        printf("%5d", vet2[i]);
    }

    printf("\nVetor 3 (intercalado):\n");
    for (i = 0; i < 20; i++){
        printf("%5d", vet3[i]);
    }
}
