//  Solicitar ao usuário que escolha um número para que seja exibida a sua 
// tabuada na tela. 

#include <stdio.h>

int main(){

    float numero, cont = 1;

    printf("Entre com um numero para que sua tabuada de 1 a 10 seja exibida: ");
    scanf("%f", &numero);

    while(cont <= 10){
        printf("%.2f x %.2f = %.2f\n", numero, cont, numero * cont);
        cont += 1;
    }
}