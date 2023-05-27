// Fazer um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe 
// o consumo estimado de combustível, sabendo-se que um carro tipo A faz 12km 
// com um litro de gasolina, um tipo B faz 9km e o tipo C, 8km por litro.

#include <stdio.h>

int main(){

    char tipo_carro;
    float km, consumo;

    printf("Informe a quantidade de KM percorrida: ");
    scanf("%f", &km);

    printf("Informe o modelo do carro:\n");
    printf("A - Sedan\n");
    printf("B - Picape\n");
    printf("C - SUV\n");
    scanf(" %c", &tipo_carro);

    switch(tipo_carro){
    case 'a':
    case 'A':
        consumo = km / 12;
        printf("O consumo estimado eh de: %.2f litros", consumo);
    break;

    case 'b':
    case 'B':
        consumo = km / 9;
        printf("O consumo estimado eh de: %.2f litros", consumo);
    break;

    case 'c':
    case 'C':
        consumo = km / 8;
        printf("O consumo estimado eh de: %.2f litros", consumo);
    break;
    
    default:
        printf("Opcao invaldia.");
        break;
    }
}