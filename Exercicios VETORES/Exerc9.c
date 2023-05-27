// Faça um programa que leia um vetor de 5 posições para números reais e, depois,
// um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor
// na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for
// diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.

#include <stdio.h>

int main(){

    float vetor[5];
    int codigo, i;

    for (i = 0; i < 5; i++){
        vetor[i] = i;
    }
    
    for (i = 0; i < 5; i++){
        printf("%.2f\n", vetor[i]);
    }

    printf("Informe um codigo - 0, 1 ou 2:\n");
    scanf("%d", &codigo);

    if(codigo == 1){
        for (i = 0; i < 5; i++){
            printf("\n%.2f", vetor[i]);
        }
    } else if(codigo == 2){
        for (i = 4; i >= 0; i--){
            printf("\n%.2f", vetor[i]);
        }
    } else if (codigo == 0){
        printf("Fim :D");
    }
}