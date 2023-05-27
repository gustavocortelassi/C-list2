// Faça um programa que leia seu peso na Terra e o numero de um planeta e calcule 
// qual será seu peso neste planeta. A relação de planetas é:
// Nº Planeta Gravidade Relativa
// 1 Mercúrio 0,37
// 2 Vênus 0,88
// 3 Marte 0,38
// 4 Júpiter 2,64
// 5 Saturno 1,15
// 6 Urano 1,17
// A fórmula para o cálculo do peso em outro planeta, considerando a gravidade 
// relativa de cada um deles é;

#include <stdio.h>

int main(){

    float peso, peso_planeta;
    int planeta;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Selecione o planeta para calcular seu peso nele: \n");
    printf("1 - Mercurio\n");
    printf("2 - Venus\n");
    printf("3 - Marte\n");
    printf("4 - Jupiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    scanf("%i", &planeta);

    switch (planeta){
        case 1:
            peso_planeta = peso * 0.37;
            printf("Seu peso em Mercurio eh: %.2fkg", peso_planeta);
            break;

        case 2:
            peso_planeta = peso * 0.88;
            printf("Seu peso em Venus eh: %.2fkg", peso_planeta);
            break;

        case 3:
            peso_planeta = peso * 0.38;
            printf("Seu peso em Marte eh: %.2fkg", peso_planeta);
            break;

        case 4: 
            peso_planeta = peso * 2.64;
            printf("Seu peso em Jupiter eh: %.2fkg", peso_planeta);
            break;

        case 5:
            peso_planeta = peso * 1.15;
            printf("Seu peso em Saturno eh: %.2fkg", peso_planeta);
            break;

        case 6:
            peso_planeta = peso * 1.17;
            printf("Seu peso em Urano eh: %.2fkg", peso_planeta);
            break;
        
        default:
            printf("Opcao invalida.");
            break;
        }
}