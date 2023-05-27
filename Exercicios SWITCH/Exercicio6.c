// Criar um algoritmo que leia o destino do passageiro, se a viagem inclui retorno 
// (ida e volta) e informar o preço da passagem conforme a tabela a seguir:
// Destino Ida                      Ida e Volta
// Região Norte R$ 500,00           R$ 900,00
// Região Nordeste R$ 350,00        R$ 650,00
// Região Centro-Oeste R$ 350,00    R$ 600,00
// Região Sul R$ 300,00             R$ 550,00

#include <stdio.h>

int main() {
    int opcao;
    char opcao2;

    printf("--Tabela Rodoviaria--\n");
    printf("Selecione seu destino:\n");
    printf("    Destino:\n");
    printf("1 - Regiao Norte\n");
    printf("2 - Regiao Nordeste\n");
    printf("3 - Regiao Centro-Oeste\n");
    printf("4 - Regiao Sul\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("A - Ida\n");
            printf("B - Ida e Volta\n");
            scanf(" %c", &opcao2);
            switch(opcao2){
                case 'a':
                case 'A':
                    printf("O valor da passagem eh de R$500,00\n");
                    break;
                case 'b':
                case 'B':
                    printf("O valor da passagem eh de R$900,00\n");
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
            break;

        case 2:
            printf("A - Ida\n");
            printf("B - Ida e Volta\n");
            scanf(" %c", &opcao2);
            switch(opcao2){
                case 'a':
                case 'A':
                    printf("O valor da passagem eh de R$350,00\n");
                    break;
                case 'b':
                case 'B':
                    printf("O valor da passagem eh de R$650,00\n");
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
            break;

        case 3:
            printf("A - Ida\n");
            printf("B - Ida e Volta\n");
            scanf(" %c", &opcao2);
            switch(opcao2){
                case 'a':
                case 'A':
                    printf("O valor da passagem eh de R$350,00\n");
                    break;
                case 'b':
                case 'B':
                    printf("O valor da passagem eh de R$600,00\n");
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
            break;

        case 4:
            printf("A - Ida\n");
            printf("B - Ida e Volta\n");
            scanf(" %c", &opcao2);
            switch(opcao2){
                case 'a':
                case 'A':
                    printf("O valor da passagem eh de R$300,00\n");
                    break;
                case 'b':
                case 'B':
                    printf("O valor da passagem eh de R$550,00\n");
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
            break;

        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
