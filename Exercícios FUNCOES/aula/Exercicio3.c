#include <stdio.h> // exemplo com parametro e com retorno

int main(){

    int a, b, total;

    printf("Infome o primeiro numero a ser somado: ");
    scanf("%i", &a);

    printf("Infome o segundo numero a ser somado: ");
    scanf("%i", &b);

    total = soma(a, b);

    printf("O resultado eh: %i", total);
}

int soma(int a, int b){
    
    int resultado;

    resultado = a + b;

    return resultado;
}

