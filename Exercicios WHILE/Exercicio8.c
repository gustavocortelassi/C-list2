// Dada uma sequência de números, obter a soma dos positivos e a 
// quantidade dos negativos. O ponto de parada ocorrerá quando o número 
// for zero.

#include <stdio.h>

int main(){

    int numero, soma_pos = 0, qt_neg = 0;

    do{
        printf("Entre com um numero para: \n");
        printf("1. Obter a soma dos positivos: \n");
        printf("2. Obter a quantidade dos negativos: \n");
        scanf("%i", &numero);

        if(numero > 0){
            soma_pos = soma_pos + numero;
        } else if (numero < 0){
            qt_neg = qt_neg + 1;
        }
    }while(numero != 0);

    printf("A soma dos numeros positivos eh: %i\n", soma_pos);
    printf("A quantidade de numeros negativos eh: %i\n", qt_neg);

}