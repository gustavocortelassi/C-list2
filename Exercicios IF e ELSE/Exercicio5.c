// Escreva um programa que identifique se um número é par ou impar. Se par apresentar 
// a sua raiz quadrada, se impar apresentar sua metade. 

#include <stdio.h>
#include <math.h>

int main(){

    int numero;

    printf("Entre com o numero: ");
    scanf("%i", &numero);

    if(numero % 2){
        printf("Seu numero eh impar\n");
    } else {
        printf("Seu numero eh par\n");
    }
}