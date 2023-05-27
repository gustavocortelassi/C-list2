// Imprima na tela o menu:
// ● C – área de um círculo
// ● R – área de um retângulo
// ● Q – área de um quadrado
// De acordo com a escolha do usuário o programa deve pedir os elementos 
// necessários ao cálculo e impressão da área desejada:
// ● Área Círculo = 3.14 * (raio * raio)
// ● Área Retângulo = base . altura
// ● Área quadrado = lado * lado

#include <stdio.h>
#include <math.h>

int main(){

    float raio, area, base, altura, lado;
    char opcao;

    printf("C - área de um circulo\n");
    printf("R - área de um retangulo\n");
    printf("Q - área de um quadrado\n");
    scanf("%c", &opcao);

    switch (opcao){
    case 'c':    
    case 'C':
        printf("Informe o raio do circulo: ");
        scanf("%f", &raio);

        area = 3.14 * pow(raio, 2); 

        printf("A area do circulo eh: %.f", area);

        break;
    case 'r':
    case 'R':
        printf("Informe a base do retangulo: ");
        scanf("%f", &base);
        printf("Informe a altura do retangulo: ");
        scanf("%f", &altura);

        area = base * altura;

        printf("A area do retangulo eh: %.2f", area);

        break;
    case 'q':
    case 'Q':
        printf("Informe o lado do quadrado: ");
        scanf("%f", &lado);

        area = pow(lado, 2);

        printf("A area do quadrado eh: %.2f", area);
        break;
    default:
        printf("\nComando invalido!");
        break;
    }
}