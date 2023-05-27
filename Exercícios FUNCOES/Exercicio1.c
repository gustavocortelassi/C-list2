// Crie uma função que receba um valor por parâmetro e informe se ele é positivo ou não.

#include <stdio.h>

int verificaPositivo(int x){

    int positivo = 0;

    if(x > 0){
        positivo = x;
    }

    return positivo;
}

int main(){

    int x, resultado; 

    printf("Informe o valor para ser verificado: ");
    scanf("%i", &x);

    resultado = verificaPositivo(x);

    if(resultado > 0){
        printf("Positivo");
    } else {
        printf("Negativo");
    }
}



