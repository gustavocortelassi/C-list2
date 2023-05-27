// Faça um programa que leia um vetor de 10 posições e verifique se existem valores
// iguais e os escreva na tela.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int vetor[10];
    int i, j;

    srand(time(NULL));

    printf("Vetor: \n");

    for (i = 0; i < 10; i++){
        vetor[i] = 1 + rand() % 10;
    }
    
    for (i = 0; i < 10; i++){
        printf("%5d", vetor[i]);
    }

    for (i = 0; i < 9; i++){
        for (j = i + 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                printf("\nSao iguais: %d e %d", vetor[i], vetor[j]);
            }
        }
    }       
}