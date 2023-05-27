// Tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa, calcule 
// e mostre seu peso ideal, utilizando as seguintes fórmulas:
// a. para sexo masculino: peso ideal = (72.7 * altura) - 58
// b. para sexo feminino: peso ideal = (62.1 * altura) - 44.7

#include <stdio.h>

int main(){

    char nome[50], sexo;
    float altura, peso_ideal;

    printf("Entre com seu nome: ");
    scanf("%s", &nome);

    printf("Entre com seu sexo: M - masculino, F - feminino: ");
    scanf(" %c", &sexo);

    printf("Digite sua altura. Ex: 185cm - 1.85 ");
    scanf("%f", &altura);

    if(sexo == 'F'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal eh: %.2f", peso_ideal);
    } else {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal eh: %.2f", peso_ideal);
    }
    
}