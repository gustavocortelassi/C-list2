// Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C
// de mesmo tipo e tamanho, obedecendo as seguintes regras de formação:
// a. Ci deverá receber 1 quando Ai for maior que Bi;
// b. Ci deverá receber 0 quando Ai for igual a Bi;
// c. Ci deverá receber -1 quando Ai for menor que Bi.

#include <stdio.h>

int main(){

    int vetA[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetB[10] = {10, 9, 8, 7, 6, 5, 7, 3, 2, 1};
    int vetC[10];
    int i;

    // preenche vetor C
    for (i = 0; i < 10; i++){
        if(vetA[i] > vetB[i]){
            vetC[i] = 1;
        } else if(vetA[i] == vetB[i]){
            vetC[i] = 0;
        } else {
            vetC[i] = -1;
        }
    }
    
    //imprime vetC
    for (i = 0; i < 10; i++){
        printf("%d\n", vetC[i]);
    }
    
}