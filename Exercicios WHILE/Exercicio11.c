// Faça um programa que leia um inteiro n e imprima um triângulo 
// retângulo formado por asteriscos. Ex: n = 6
// ******
// *****
// ****
// ***
// **
// *

#include <stdio.h>

int main(){

    int n, aux;

    printf("Entre com o numero para o triangulo: ");
    scanf("%i", &n);

    aux = 1;
   
    while(n >= 1){
        aux = 1;
        while(aux <= n){
            printf("*");
            aux++;
        }
        printf("\n");
        n = n - 1;
    }
}