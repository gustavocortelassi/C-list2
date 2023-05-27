// Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
// valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
// programa deverá escrever a soma dos valores encontrados nas respectivas
// posições X e Y.

#include <stdio.h>

int main(){

    int vet[8], x, y, i, soma = 0;

    for (i = 0; i < 8; i++){
        printf("Informe um numero: ");
        scanf("%d", &vet[i]);
    }
    
    printf("Informe o valor para X: ");
    scanf("%d", &x);

    printf("Informe o valor para Y: ");
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    printf("A soma dos valores de X posicao: %d = %d e Y posicao: %d = %d eh: %d", x, x+1, y, y+1, soma);

}