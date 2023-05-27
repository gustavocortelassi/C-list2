//  O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. 
// Fazer um programa para obter todos os números de 4 algarismos com a mesma 
// característica do número 3025

#include <stdio.h>

int main() {
    
    int inteiro, resto, numero;

    // deve estar entre 1000 e 9999, pois deve ter duas duplas de algarismos

    inteiro = numero / 100; // acha a parte inteira, no caso 30
    resto = numero % 100; // acha a parte resto, no caso 25

    (inteiro + resto)^2; // soma 30 + 25 = 55, depois, ao elevar a raiz (55*55) = 3025
}


