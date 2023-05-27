// Criar um programa que leia um número que será o limite superior de um intervalo 
// e imprimir todos os números impares menores que esse número.

#include <stdio.h>

int main(){

    int i, numero;

    printf("Informe o limite superior da contagem: ");
    scanf("%i", &numero);

    for(i = 0; i < numero; i++){
        if(i % 2 == 1){
            printf("%i\n", i);
        }
    }
}