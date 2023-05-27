// Criar um programa que leia a quantidade de números que se deseja digitar para 
// que possa ser impresso o maior e o menor número digitados. Não suponha que 
// todos os números lidos serão positivos.

#include <stdio.h>

int main(){

    int i, lim_sup, numero, aux = 0, maior = 0;

    printf("Informe a quantidade de numeros que deseja digitar: ");
    scanf("%i", &lim_sup);

    for(i = 0; i < lim_sup; i++){
        printf("Informe o numero: ");
        scanf("%i", &numero);

        if(numero > aux){
            maior = numero;
            aux = numero;
        }
    }
    printf("O maior numero eh: %i", maior);
}