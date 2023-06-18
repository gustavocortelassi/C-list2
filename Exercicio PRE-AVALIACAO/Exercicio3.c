#include <stdio.h>

int main(){

    int valores[20];
    int i, maior = 0;

    for (i = 0; i < 20; i++) {
        printf("Informe um valor para ser armazenado: ");
        scanf("%i", &valores[i]);
    }

    for (i = 0; i < 20; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    printf("O maior valor eh: %i", maior);
    
    
}