// Criar 2 vetores de 5 posições cada, e colocar a soma destas posições em um
// terceiro vetor

#include <stdio.h>

int main() {
    int vet1[5] = {1, 2, 3, 4, 5}; // inicializa vet1 com os valores de 1 a 5
    int vet2[5] = {10, 11, 12, 13, 14}; // inicializa vet2 com os valores de 10 a 14
    int vet3[5]; // declara o vetor de soma

    int i, soma = 0;

    // calcula a soma dos elementos de vet1 e vet2 e armazena em vet3
    for (i = 0; i < 5; i++) {
        vet3[i] = vet1[i] + vet2[i];
        soma += vet3[i];
    }

    // imprime os valores de vet3
    printf("Vetor de soma: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet3[i]);
    }
    printf("\n");

    // imprime o valor da soma
    printf("Soma dos elementos de vet3: %d\n", soma);

    return 0;
}
