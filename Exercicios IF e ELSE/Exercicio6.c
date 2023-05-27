// As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se 
// forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs 
// compradas, calcule e escreva o custo total da compra.

#include <stdio.h>

int main(){

    int quantidade;
    float valor;

    printf("Entre com a quantidade de macas: ");
    scanf("%i", &quantidade);

    if(quantidade < 12){
        valor = quantidade * 1.3;
        printf("O custo total eh %.2f", valor);
    } else if(quantidade >= 12) {
        valor = quantidade * 1;
        printf("O custo total eh %.2f", valor);
    }
}