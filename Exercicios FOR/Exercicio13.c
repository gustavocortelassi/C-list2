// Escrever um programa que lê um valor N inteiro e positivo e que calcula e escreve 
// o valor de E.
// E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!

#include <stdio.h>

int main(){

    int N;
    int i;
    float fat = 1, dominador = 0;

    printf("Informe um valor para N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        fat = fat * i;
        dominador = dominador + 1.0 / fat;
    }

    printf("Resultado: %.2f", dominador);

}
