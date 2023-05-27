// Faça um programa que receba um número inteiro maior do que 1, e 
// verifique se o número fornecido é primo ou não

#include <stdio.h>

int main(){

    int numero;

    do{
        printf("Digite um numero, ou pressione 0 para encerrar: ");
        scanf("%i", &numero);

        if(numero % 2 == 1){
            printf("Primo!\n");
        } else if(numero == 0){
            printf("Encerrando...\n");
        } else {
            printf("Nao primo!\n");
        }

    }while(numero != 0);
}