#include <stdio.h> // exemplo com parametro e sem retorno

int soma(int a, int b){
    
    int resultado;

    resultado = a + b;

    printf("O resultado eh: %i", resultado);
}

int main(){

    int a, b;

    printf("Infome o primeiro numero a ser somado: ");
    scanf("%i", &a);

    printf("Infome o segundo numero a ser somado: ");
    scanf("%i", &b);

    soma(a, b);
}

