// . Criar um programa que leia os limites inferior e superior e apresentar na tela todos 
// os números naturais presentes no intervalo.

#include <stdio.h>

int main(){

    int i, lim_inf, lim_sup;

    printf("Informe o limite inferior da contagem: ");
    scanf("%i", &lim_inf);

    printf("Informe o limite superior da contagem: ");
    scanf("%i", &lim_sup);

    for(i = lim_inf + 1; i < lim_sup; i++){
        printf("%i\n", i);
    }
}