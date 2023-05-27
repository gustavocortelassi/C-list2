// Fazer uma função que calcula a enésima potência de uma variável real x:
//                              f(x, n) = x^n

#include <stdio.h>
#include <math.h>

float calculaFuncao(float x, int y){
    float resultado;

    resultado = pow(x, y);

    return resultado;
}

int main(){

    float x;
    int y;

    printf("Informe o valor de X: ");
    scanf("%f", &x);

    printf("Informe o valor de Y: ");
    scanf("%i", &y);

    printf("O resultado da funcao eh: %.3f", calculaFuncao(x, y));
}