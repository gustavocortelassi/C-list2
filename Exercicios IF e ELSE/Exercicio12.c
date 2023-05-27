// Faça um programa que leia os lados de um triângulo retângulo e exiba sua hipotenusa 
// se e a hipotenusa for maior que 100 apresente na tela, “hipotenusa excede o tamanho 
// permitido para área”, caso contrário exiba “hipotenusa aceita

#include <stdio.h>
#include <math.h>

int main(){

    float cateto_adj, cateto_op, hipotenusa;

    printf("Entre com o cateto adjascente: ");
    scanf("%f", &cateto_adj);

    printf("Entre com o cateto oposto: ");
    scanf("%f", &cateto_op);

    pow(hipotenusa, 2);
    hipotenusa = pow(cateto_adj, 2) + pow(cateto_op, 2);

    if(hipotenusa > 100){
        printf("Hipotenusa excede o tamanho permitido para area!");
    } else {
        printf("Hipotenusa aceita: %.2f", hipotenusa);
    }
}