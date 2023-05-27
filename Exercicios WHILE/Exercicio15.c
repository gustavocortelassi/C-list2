// Escreva um programa que receba como entrada o valor do saque 
// realizado pelo cliente de um banco e retorne quantas notas de cada valor 
// serão necessárias para atender ao saque com a menor quantidade de 
// notas possível. Serão utilizadas notas de 200, 100, 50, 20, 10, 5 e 2 real.

#include <stdio.h>

int main(){

    float valor;

    printf("Infome o valor do saque: ");
    scanf("%f", &valor);

    while(valor >= 200){
        printf("Nota de R$200,00\n");
        valor -= 200;
    } 

    while(valor >= 100){
        printf("Nota de R$100,00\n");
        valor -= 100;
    }

    while(valor >= 50){
        printf("Nota de R$50,00\n");
        valor -= 50;
    }

    while(valor >= 20){
        printf("Nota de R$20,00\n");
        valor -= 20;
    }

    while(valor >= 10){
        printf("Nota de R$10,00\n");
        valor -= 10;
    }

    while(valor >= 5){
        printf("Nota de R$5,00\n");
        valor -= 5;
    }

    while(valor >= 2){
        printf("Nota de R$2,00\n");
        valor -= 2;
    }

    while(valor < 2 && valor > 0){
        printf("Moeda de R$0,01\n");
        valor -= 0.01;
    }
    
}