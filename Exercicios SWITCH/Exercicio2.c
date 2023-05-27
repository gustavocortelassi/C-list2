// Faça um programa que com base no número de lados de uma figura geométrica 
// informada, apresente o seu respectivo nome.
// Lados    Nome
// 3        Triângulo
// 4        Quadrado ou Retângulo
// 5        Pentágono
// 6        Hexágono

#include <stdio.h>

int main(){

    int figura;

    printf("Informe o numero de lados da figura: ");
    scanf("%i", &figura);

    switch (figura)
    {
    case 3:
        printf("Triangulo");
        break;
    case 4:
        printf("Quadrado ou retangulo");
        break;
    case 5:
        printf("Pentagono");
        break;
    case 6:
        printf("Hexagono");
        break;
    default:
        printf("Invalido!");
        break;
    }
}