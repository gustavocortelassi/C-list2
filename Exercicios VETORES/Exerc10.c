// .Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em
// cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado
// na posição anterior. Imprima o vetor N

#include <stdio.h>

int main(){

    float vetor[100];
    int i;

    printf("Informe um valor para a primeira posicao do vetor: \n");
    scanf("%f", &vetor[0]);

    for (i = 1; i < 99; i++){
        vetor[i] = vetor[i - 1] / 2; // i - 1 pega a posicao anterior para fazer o calculo da metade
    }
    
    for (i = 1; i < 100; i++){
        printf("\n%.2f", vetor[i]);
    }
    
}