// . Crie um programa que crie e leia uma matriz de inteiros positivos com tamanho
// 5x5 e, na sequencia substitua seus elementos de valor ímpar por -1 e os pares
// por +1. Apresentando ao final a nova matriz formada.

#include <stdio.h>

int main(){

    int matriz[5][5];
    int i, j;

    for ( i = 0; i < 5; i++){
       for (j = 0; j < 5; j++) {
         matriz[i][j] = j;
       }
    }
        
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("------------------------\n");
    for ( i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(matriz[i][j] % 2 == 0){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = -1;
            }
        }
    }
    printf("------------------------\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
}