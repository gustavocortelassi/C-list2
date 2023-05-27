// Um posto está vendendo combustíveis com a seguinte tabela de descontos:
// Etanol - até 20 litros, desconto de 3% por litro
//  acima de 20 litros, desconto de 5% por litro
// Gasolina - até 20 litros, desconto de 4% por litro
//  acima de 20 litros, desconto de 6% por litro
// Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
// (codificado da seguinte forma: E-Etanol, G-gasolina), calcule e imprima o valor a ser pago 
// pelo cliente sabendo-se que o preço do litro da gasolina é R$ 4,40 e o preço do litro do 
// etanol é R$ 2,90.

#include <stdio.h>

int main(){

    char combustivel;
    float litros, valor;

    printf("Qual o tipo de combustivel? G - Gasolina(4,40 litro), E - Etanol(2,90 litro): ");
    scanf("%s", &combustivel);

    printf("Quantos litros deseja abastecer? ");
    scanf("%f", &litros);

    if(combustivel == 'G'){
        if(litros > 0 && litros <= 20){
            valor = (4.40 * 0.96) * litros;
            printf("%.2f litros de gasolina custam %.2f reais.\n", litros, valor);
        } else if(litros > 20){
            valor = (4.40 * 0.94) * litros;
            printf("%.2f litros de gasolina custam %.2f reais.\n", litros, valor);
        }
    } else if(combustivel == 'E'){
        if(litros > 0 && litros <= 20){
            valor = (4.40 * 0.97) * litros;
            printf("%.2f litros de etanol custam %.2f reais.\n", litros, valor);
        } else if(litros > 20){
            valor = (4.40 * 0.95) * litros;
            printf("%.2f litros de etanol custam %.2f reais.\n", litros, valor);
        }
    }
}