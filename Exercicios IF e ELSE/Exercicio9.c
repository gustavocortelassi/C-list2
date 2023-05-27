// Fazer um programa para ler a duas notas, calcular e mostrar a média com a mensagem:
// Inferior a 5,0 – “Reprovado”
// De 5,1 a 6,9 – “Exame”
// De 7,0 a 10 – “Aprovado”

#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Entre com a primeira e a segunda nota: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if(media < 5.0){
        printf("Reprovado");
    } else if (media > 5.1 && media < 6.9){
        printf("Exame");
    } else if (media > 7.0 && media <= 10){
        printf("Aprovado");
    }
}