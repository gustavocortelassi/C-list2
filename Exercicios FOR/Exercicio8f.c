// A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros 
// termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são 
// formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir:
//                              0 1 1 2 3 5 8 13 21...
// Descubra a regra que gera a sequência da série de Fibonacci e escreva um 
// algoritmo que gere os primeiros n (informado pelo usuário) números termos desta 
// série e calcula e escreve a soma destes termos

#include <stdio.h>
#include <math.h>

int main(){

    int i, n, aux = 0, f1, f2;

    printf("Informe a quantidade numero que deseja a sequencia Fibonacci: ");
    scanf("%i", &n);

    for(i = 0; i < n; i++){

        aux = f1 + f2;
        f1 = f2;
        f2 = aux;

        printf("%i\n", aux);
        
    }
}