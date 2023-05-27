// Crie uma função que receba 2 números e retorne ao programa principal o maior valor.

#include <stdio.h>

int calculaMaior(int x, int y){

    int maior;

    if(x > y){
        maior = x;
    } else {
        maior = y;
    }

    return maior;
}

int main(){

    int x, y;

    printf("Informe o numero A: ");
    scanf("%i", &x);

    printf("Informe o numero B: ");
    scanf("%i", &y);

    printf("O maior numero eh: %i", calculaMaior(x, y));
}