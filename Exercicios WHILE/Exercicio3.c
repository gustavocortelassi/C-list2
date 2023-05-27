#include <stdio.h>

int main(){

    float numero, soma = 0, media;
    int cont = 0;

    do{
        printf("Digite um numero a ser somado: ");
        scanf("%f", &numero);
        cont += 1;
        soma += numero;
    }while(cont < 10);

    media = soma / 10;
    printf("A media dos numeros eh: %.2f", media);
    
}