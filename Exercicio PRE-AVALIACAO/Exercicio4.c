#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char ultimoSobrenome[100];
    int i, j, inicioPalavra = -1;

    printf("Informe seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Removendo o caractere de nova linha '\n' ao final da string lida
    nome[strcspn(nome, "\n")] = '\0';

    // strlen calcula o tamanho da string
    for (i = strlen(nome) - 1; i >= 0; i--) {
        if (nome[i] != ' ' && inicioPalavra == -1) {
            inicioPalavra = i;
        }

        if (nome[i] == ' ' && inicioPalavra != -1) {
            // Copia o último sobrenome encontrado
            j = 0;
            for (int k = i + 1; k <= inicioPalavra; k++) {
                ultimoSobrenome[j] = nome[k];
                j++;
            }
            ultimoSobrenome[j] = '\0';
            break;
        }
    }

    printf("Ultimo sobrenome: %s\n", ultimoSobrenome);

    return 0;
}
