// Escreva uma função que receba 3 notas de um aluno e uma letra. Se a letra for A a função 
// retorna a média aritmética das notas do aluno, se for P a sua média ponderada (pesos: 
// 5,3 e 2)

#include <stdio.h>

    void calculaMediaAritmetica(float a, float b, float c){
        printf("Nota: %.2f", (a + b + c) / 3);
    }

    void calculaMediaPonderada(float a, float b, float c, int x, int y, int z){
        printf("Nota: %.2f", ((a * x) + (b * y) + (c + z)) / (x + y + z));
    }

int main(){

    float nota1, nota2, nota3; 
    int letra, p1, p2, p3;

    printf("Informe sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Informe sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Informe sua terceira nota: \n");
    scanf("%f", &nota3);

    printf("Informe uma letra: A = 1, P = 2\n");
    scanf("%i", &letra);

    switch (letra){
    case 1:
        calculaMediaAritmetica(nota1, nota2, nota3);
        break;
    case 2:
        printf("Informe o peso da 1a nota: ");
        scanf("%i", &p1);

        printf("Informe o peso da 2a nota: ");
        scanf("%i", &p2);

        printf("Informe o peso da 3a nota: ");
        scanf("%i", &p3);   

        calculaMediaPonderada(nota1, nota2, nota3, p1, p2, p3);    
        break;
    default:
        break;
    }

}