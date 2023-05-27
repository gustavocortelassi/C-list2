//  Solicitar ao usuário que escolha um número para que seja exibida a sua tabuada 
// na tela.

#include <stdio.h>

int main(){

    int i, numero;

    printf("Infome um numero para que seja calculada sua tabuada: ");
    scanf("%i", &numero);

    for(i = 0; i <= 10; i++){
        printf("%i x %i = %i\n", numero, i, numero * i);
    }
    
}