// Elabore um programa que realize 5 perguntas para uma pessoa sobre um determinado 
// crime. As perguntas são:
// a. "Telefonou para a vítima?"
// b. "Esteve no local do crime?"
// c. "Mora perto da vítima?"
// d. "Devia para a vítima?"
// e. "Já trabalhou com a vítima?"
// O programa deve no final emitir uma classificação sobre a participação da pessoa no 
// crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como 
// "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será 
// classificado como "Inocente".

#include <stdio.h>

int main(){

    float resposta, count = 0;

    printf("a. Telefonou para a vitima? 1 para sim, 0 para nao.\n");
    scanf("%f", &resposta);
    if(resposta == 1){
        count = count + 1;
    }

    printf("b. Esteve no local do crime? 1 para sim, 0 para nao.\n");
    scanf("%f", &resposta);
    if(resposta == 1){
        count = count + 1;
    }

    printf("c. Mora perto da vitima? 1 para sim, 0 para nao.\n");
    scanf("%f", &resposta);
    if(resposta == 1){
        count = count + 1;
    }

    printf("d. Devia para a vitima? 1 para sim, 0 para nao.\n");
    scanf("%f", &resposta);
    if(resposta == 1){
        count = count + 1;
    }

    printf("e. Ja trabalhou com a vitima? 1 para sim, 0 para nao.\n");
    scanf("%f", &resposta);
    if(resposta == 1){
        count = count + 1;
    }
    
    if(count == 2){
        printf("Suspeito!\n");
    } else if(count > 2 && count <= 4){
        printf("Cumplice!\n");
    } else if(count == 5){
        printf("Assassino!");
    } else {
        printf("Inocente!\n");
    }
}