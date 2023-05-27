// Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
// deverá ser impresso o maior e o menor elemento do vetor, seguidos da sua posição
// no mesmo.

#include <stdio.h>

int main(){
    
    int vetor[10];
    int i, maior = 0, menor = 0, posicaoMaior = 0, posicaoMenor = 0;

    for (i = 0; i < 10; i++){
        printf("Informe valores para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicaoMaior = i;
        } else if(vetor[i] < menor){
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    printf("Maior valor: %d na posicao %d ", maior, posicaoMaior);
    printf("Menor valor: %d na posicao %d ", menor, posicaoMenor);   
}