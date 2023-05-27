// Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à 
// soma de seus divisores positivos diferentes de n. Construa um programa em C 
// que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6. 

#include <stdio.h>

int main(){

    int numero, soma = 0;
    int i;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    for (i = 0; i < numero; i++){
        soma = soma + 1;
        printf("\n %i", soma);
    }
    
}