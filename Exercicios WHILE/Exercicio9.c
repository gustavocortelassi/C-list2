// Faça um programa que leia a renda mensal de uma pessoa e calcule 
// quanto ela tem que pagar de imposto de renda. Este imposto é cobrado 
// como uma porcentagem da renda da pessoa de acordo com a tabela 
// abaixo. O programa deve dar a possibilidade de várias consultas 
// conforme opção do usuário.
// Renda mensal / Alíquota
// Até R$1637.11 Isento
// De R$1637.12 até R$2453.50 7.5%
// De R$2453.51 até R$3271.38 15.0%
// De R$3271.39 até R$4087.65 22.5%
// A partir de R$4087.66 27.5%

#include <stdio.h>

int main(){

    int opcao;
    float renda, imposto;

    do{
        printf("---Calculadora de imposto de renda---\n");
        printf("Informe sua renda mensal: \n");
        scanf("%f", &renda);

    if(renda <= 1637.11){
        printf("Isento\n");
    } else if(renda >= 1637.12 && renda <= 2453.50){
        imposto = (7.5 / 100) * renda;
        renda = renda - imposto;
        printf("Imposto de 7.5 porcento, seu salario eh: R$ %.2f\n", renda);
        } else if(renda >= 2453.51 && renda <= 3271.38){
            imposto = (15.0 / 100) * renda;
            renda = renda - imposto;
            printf("Imposto de 15.0 porcento, seu salario eh: R$ %.2f\n", renda);
        } else if(renda >= 3271.39 && renda <= 4087.65){
            imposto = (22.5 / 100) * renda;
            renda = renda - imposto;
            printf("Imposto de 22.5 porcento, seu salario eh: R$ %.2f\n", renda);
        } else {
            imposto = (27.5 / 100) * renda;
            renda = renda - imposto;
            printf("Imposto de 27.5 porcento, seu salario eh: R$ %.2f\n", renda);
        }  

        printf("Deseja calcular novamente? 1 para sim, 2 para nao\n");
        scanf("%i", &opcao);
        
    }while(opcao == 1);
}