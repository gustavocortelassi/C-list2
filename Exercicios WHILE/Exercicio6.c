// Tem-se um conjunto de dados contendo a altura e o sexo (m ou f) de 10 
// pessoas. Faça um algoritmo que calcule e mostre:
// a. A média de altura das mulheres
// b. A média de altura dos homens.

#include <stdio.h>

int main(){

    float altura, soma_altura_h = 0, soma_altura_m = 0, media_h, media_m;
    char sexo;
    int i = 0;
    int quantidade_mulheres = 0, quantidade_homens = 0;

    while(i < 10){
        printf("Entre com o sexo da pessoa: \n");
        scanf(" %c", &sexo);

        printf("Entre com a altura da pessoa: \n");
        scanf("%f", &altura);

        if(sexo == 'M'){
            quantidade_homens++;
            soma_altura_h += altura;
        }

        if(sexo == 'F'){
            quantidade_mulheres++;
            soma_altura_m += altura;
        }
        i++;
    }

    media_h = soma_altura_h / quantidade_homens;
    media_m = soma_altura_m / quantidade_mulheres;
    
    printf("A quantidade de homens eh: %i, e sua media de altura eh: %.2f\n", quantidade_homens, media_h);
    printf("A quantidade de mulheres eh: %i, e sua media de altura eh: %.2f\n", quantidade_mulheres, media_m);

}