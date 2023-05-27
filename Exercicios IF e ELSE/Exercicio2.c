// Faça um programa que receba a idade de uma pessoa identifique se ela pode retirar o 
// título de eleitor votar neste ano. Sabendo que:
// a. 16 e 17 anos tem o voto facultativo;
// b. 18 a 70 anos voto obrigatório;
// c. Acima de 70 anos tem voto facultativo.

#include <stdio.h>

int main(){

    int idade;

    printf("Entre com sua idade: \n");
    scanf("%i", &idade);

    if(idade == 16 || idade == 17){
        printf("Voto facultativo");
    } else if (idade >= 18 && idade <= 70){
        printf("Voto obrigatorio");
    } else if (idade > 70){
        printf("Voto facultativo");
    } else if (idade < 16){
        printf("Nao vota");
    }
}