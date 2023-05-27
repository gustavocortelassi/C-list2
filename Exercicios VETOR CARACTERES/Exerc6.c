// Crie uma função que recebe uma string e um caractere, e retorne o número de vezes 
// que esse caractere aparece na string.

#include <stdio.h>

int main(){

    char palavra[30];
    char letra;
    int i, cont = 0;

    printf("Informe a palavra escolhida: ");
    gets(palavra);

    printf("Qual letra deseja procurar? ");
    scanf("%c", &letra);

    for (i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == letra){
            cont++;
        }
    }

    printf("Quantidade de letras %c presentes na palavra: %i\n", letra, cont);
        
}