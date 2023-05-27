// .Solicite ao usuário a digitação de um número e apresente o seu fatorial.

#include <stdio.h>

int main(){

    int i, numero, resultado = 1;

    printf("Infome um numero a ser calculado sua fatorial: ");
    scanf("%d", &numero);

    for (i = numero; i > 0; i--){
        resultado = resultado * i;
    }

    printf("Fatorial: %d", resultado);
    
}