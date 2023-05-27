#include <stdio.h> // exemplo de função sem retorno e sem parametro

void soma(){
    
    int a, b, soma;

    printf("Infome o primeiro numero a ser somado: ");
    scanf("%i", &a);

    printf("Infome o segundo numero a ser somado: ");
    scanf("%i", &b);

    soma = a + b;
    
    printf("O resultado eh: %i", soma);
}

int main(){

    soma();
    
    return 0;
}



