// .Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento
// com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º.
// Mostre o vetor modificado.

#include <stdio.h>

int main(){

    int vet[20];
    int i, aux;

    for(i = 0; i < 20; i++){
        vet[i] = i + 1;
    }
    
    for (i = 0; i < 20; i++){
        aux = vet[i];
        vet[i] = vet[20 - 1];
        vet[20 - 1] = aux;
    }
    
    
    for (i = 0; i < 20; i++){
        printf("%3d", vet[i]);
    }

    
}