// Fazer um algoritmo que efetue a soma dos números ímpares e que são 
// múltiplos de 3 que se encontram no conjunto dos números de 1 a 500.

#include <stdio.h>

int main(){

    int numero = 0, cont = 0, soma = 0;
    
    while(cont < 500){
        if(numero % 2 == 1){    //verifica se eh impar
            if(numero % 3 == 0){    //verifica se eh multiplo
                soma = soma + numero;
            }
        }
        numero++;
        cont++;
    }
    printf("A soma dos numeros impares, multiplos de 3, entre 1 e 500 eh: %i", soma);
}