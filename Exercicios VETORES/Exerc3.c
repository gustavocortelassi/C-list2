// Criar um vetor de 8 posições contendo números inteiros digitados pelo usuário, e
// apresenta-los na tela de com ordem inversa da digitação.

#include <stdio.h>

int main(){

    int vetor[8];
    int i = 0;

    while (i < 8){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
        i++;
    }

    for (i = 7; i >= 0; i--){
        printf("Valor: %d\n", vetor[i]);
    }
   
}