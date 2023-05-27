// .Criar um programa que calcule e imprima o valor de b^n
// . O valor de n deverá ser 
// maior do que 1 e inteiro e o valor de b maior ou igual a 2 e inteiro.

#include <stdio.h>
#include <math.h>

int main(){

    int i, b, n, resultado = 1;

    printf("Informe o valor da base: ");
    scanf("%i", &b);

    printf("Informe o valor do expoente: ");
    scanf("%i", &n);

    if(b > 1 && n >= 2){
        for(i = 0; i < n; i++){
            resultado *= b;
        }

        printf("%i elevado a %i = %i\n", b, n, resultado);
    }
}