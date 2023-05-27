// Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma
// equação do segundo grau e retorne ao programa principal o valor do delta, que é dado
// por: b² - 4ac

#include <stdio.h>

int resolveDelta(int a, int b, int c){

    int delta;

    delta = (b * b) - (4 * a * c);

    return delta;
}

int main(){

    int a, b, c;

    printf("Informe A, B e C, para ser calculado seu delta: ");
    scanf("%i %i %i", &a, &b, &c);

    printf("O valor de delta eh: %i", resolveDelta(a, b, c));
}