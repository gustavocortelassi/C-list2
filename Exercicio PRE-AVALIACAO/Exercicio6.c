#include <stdio.h>

struct Pessoa {
    char nome[20];
    int sexo;
    float altura;
    float pesoIdeal;
} pessoa[3];

int main() {
    int i;

    for (i = 0; i < 3; i++) {
        printf("Informe o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoa[i].nome);

        printf("Informe o sexo da pessoa %d (1 - masculino, 2 - feminino): ", i + 1);
        scanf("%d", &pessoa[i].sexo);

        printf("Informe a altura da pessoa %d: ", i + 1);
        scanf("%f", &pessoa[i].altura);

        if (pessoa[i].sexo == 1) {
            pessoa[i].pesoIdeal = (72.7 * pessoa[i].altura) - 58;
        } else if (pessoa[i].sexo == 2) {
            pessoa[i].pesoIdeal = (62.1 * pessoa[i].altura) - 44.7;
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Sexo: %s\n", pessoa[i].sexo == 1 ? "Masculino" : "Feminino");
        printf("Altura: %.2f\n", pessoa[i].altura);
        printf("Peso ideal: %.2f\n", pessoa[i].pesoIdeal);
        printf("\n");
    }

    return 0;
}
