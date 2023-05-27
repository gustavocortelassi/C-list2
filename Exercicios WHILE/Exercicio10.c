// Faça um programa que leia dois números inteiros n e m e imprima um 
// retângulo formado por asteriscos com altura n e largura m.
// Ex: n = 3, m = 7
// *******
// *******
// *******

#include <stdio.h>

int main(){ 

    int n, m, i = 0, aux = 0;

    printf("Entre com a altura: ");
    scanf("%i", &n);

    printf("Entre com a largura: ");
    scanf("%i", &m);

    while(i < n){
        while(aux < m){
            printf("*");
            aux++;
        }
        printf("\n");
        aux = 0;
        i++;
    }

}