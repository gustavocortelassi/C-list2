// Crie uma função que receba um valor por parâmetro e diga se é par ou impar

#include <stdio.h>

void verificaParImpar(int x){
    if(x % 2 == 1){
        printf("Eh impar!");
    } else {
        printf("Eh par!");
    }
} 

int main(){

    int valor;

    printf("Informe um valor: ");
    scanf("%i", &valor);

    verificaParImpar(valor);
}