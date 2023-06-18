#include <stdio.h>

int main() {
    int pinos, i, j, valor, pinosSobrando;

    printf("Informe a quantidade de pinos (entre 0 e 28): ");
    scanf("%i", &pinos);

    if (pinos > 0 && pinos <= 28) {
        valor = 1;
        for (i = 1; i <= pinos; i++) {
            for (j = 1; j <= i; j++) {
                printf(" * ");
                valor++;
            }
            printf("\n");
            pinos = pinos - i;
        }
        pinosSobrando = pinos;
        printf("Pinos sobrando para fechar uma fila: %d\n", pinosSobrando);
    } else {
        printf("Quantidade de pinos inválida.\n");
    }

    return 0;
}
