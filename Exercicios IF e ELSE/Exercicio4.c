// Para doar sangue é necessário ter idade entre 18 e 67 anos e peso superior a 50 Kg. 
// Faça um programa que pergunte a idade e peso de uma pessoa e diga se ela pode doar 
// sangue ou não.

#include <stdio.h>

int main(){

    int idade;
    float peso;

    printf("Entre com sua idade e peso: \n");
    scanf("%i %f", &idade, &peso);

    if(idade >= 18 && idade <= 67){
        if(peso > 50){
            printf("Voce pode doar sangue!\n");
        } else { 
            printf("Voce nao pode doar sangue!");
        }
    }
}