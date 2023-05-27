// Faça um programa que leia um número inteiro N e depois imprima os N 
// primeiros números naturais ímpares.

#include <stdio.h>

int main(){

    int N, i, num = 1;

    printf("Entre com um numero: ");
    scanf("%i", &N);

    i = 1;

    while(i <= N){  // verifica se i é menor ou igual a N
        printf("%i", num);  // printa o primeiro numero
        num += 2;   // soma 2, ja que inicia em 1, transformando assim em 3, 5, 7....
        i++; // incrementa i para que seja menor que N (quantidade de vezes que devera ser impresso algum numero)
    }
}

