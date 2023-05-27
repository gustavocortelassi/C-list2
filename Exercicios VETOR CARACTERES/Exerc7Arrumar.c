// Escreva um subprograma que receba um texto e devolva o mesmo texto com todas as 
// suas letras duplicadas. Exemplo: 
// texto recebido:
// INSTITUTO DE INFORMATICA 
// texto devolvido:
// IINNSSTTIITTUUTTOO DDEE IINNFFOORRMMAATTIICCAA

#include <stdio.h>
#include <string.h>

int main(){

    char frase[50];
    int i, tamanho = 0, x, j = 0;

    printf("Informe a frase a ser duplicada: ");
    gets(frase);
    fflush(stdin); //limpar o buffer de entrada do console, descartando qualquer caractere pendente após uma entrada de dados

    for (i = 0; frase[i] != '\0'; i++){ // descobre o tamanho do novo vetor para armazenar as letras duplicadas
        tamanho++; 
    }

    tamanho = strlen(frase);
    x = (2 * tamanho) + 1; // calcular o tamanho do vetor que vai ter as duplicatas

    // char novaFrase[x];

    for (i = 0; frase[i] != '\0'; i++){
        novaFrase[i] = frase[i];
        novaFrase[j + 1] = frase[i];
        j = j + 2;
    }

    printf("%s\n", novaFrase);
    
    return 0;
}