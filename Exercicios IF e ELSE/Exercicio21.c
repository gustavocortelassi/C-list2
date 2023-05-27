// Ler três valores inteiro (variáveis A, B, e C) e efetuar o calculo da equação de segundo 
// grau, apresentando: se para os valores informados for possível fazer os cálculos (delta 
// positivo ou zero) apresentar mensagem “O valor de Delta é ...”; a mensagem “Não há 
// raízes reais”, se não for possível fazer o calculo (delta negativo); e a mensagem “Não é 
// equação de segundo grau”, se o valor de A for igual à zero

#include <stdio.h>
#include <math.h>

int main(){

    int A, B, C;
    float delta, raiz_positiva, raiz_negativa;

    printf("Entre com o valor de A: ");
    scanf("%i", &A);
    
    printf("Entre com o valor de B: ");
    scanf("%i", &B);

    printf("Entre com o valor de C: ");
    scanf("%i", &C);

    delta = pow(B, 2) - (4 * A * C);    // calculo do Delta
    printf("O valor de Delta eh: %.2f\n", delta);

    if(A == 0){
        printf("Nao eh equacao de segundo grau!\n");
    } else if(delta > 0){
        raiz_positiva = ((B * -1) + sqrt(delta)) / (2 * A);
        raiz_negativa = ((B * -1) + sqrt(-delta)) / (2 * A);
        printf("Os possiveis resultados podem ser X1: %.2f e X2: %.2f\n", raiz_positiva, raiz_negativa);
    } else if(delta == 0){
        printf("Impossivel fazer o calculo, delta eh negativo, nao ha raizes reais!\n");
    }
}