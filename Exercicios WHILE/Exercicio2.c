#include <stdio.h>

int main(){

    float numero;

    do{
        printf("Digite um numero. Se for negativo, encerra.\n");
        scanf("%f", &numero);
    }while (numero >= 0);
    
}