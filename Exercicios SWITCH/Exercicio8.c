// Crie um algoritmo que execute as funcionalidades da conta corrente de uma 
// pessoa. Toda a conta tem um número, uma pessoa vinculada e um saldo. O saldo 
// é atualizado conforme o tipo de movimentação bancária: depósito ou retirada. Se 
// for um depósito, o dinheiro é creditado ao saldo; se for retirada, o dinheiro é 
// debitado do saldo

#include <stdio.h>

int main(){
    
    char nome[50];
    int numero_conta, condicao, opcao;
    float saldo, valor;

    printf("Digite o numero da conta: ");
    scanf("%i", &numero_conta);

    printf("Digite o nome do titular da conta: ");
    scanf("%s", nome);

    printf("Informe seu saldo: ");
    scanf("%f", &saldo);

    condicao = 1;

    while(condicao == 1){
        printf("\nEscolha a opcao desejada:\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Realizar deposito\n");
        printf("3 - Realizar retirada\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 0:
                printf("Saindo...");
                condicao = 0;
            break;

            case 1:
                printf("O saldo atual eh de: R$%.2f", saldo);
            break;

            case 2:
                printf("Informe o valor a ser depositado: ");
                scanf("%f", &valor);

                saldo += valor;
                printf("Deposito realizado com sucesso!\n");
            break;

            case 3:
                printf("Informe o valor a ser retirado: ");
                scanf("%f", &valor);

                saldo -= valor;
                printf("Retirada realizada com sucesso!\n");
            break;
        
            default:
                printf("Operacao invalida, encerrando...");
                condicao = 0;
            break;
        }
    }
}