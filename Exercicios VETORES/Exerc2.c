// Criar um vetor de 5 posições contendo números inteiros digitados pelo usuário, e
// apresentar na tela a soma de todos.

#include <stdio.h>

int main(){

    int soma = 0, i = 0;
    int vetor[5];

    while (i < 5){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
        i++;
    }
    
    printf("A soma dos valores do vetor eh: %d\n", soma);

}