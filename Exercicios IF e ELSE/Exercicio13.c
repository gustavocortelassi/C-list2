// A prefeitura de Cascavel abriu uma linha de crédito para os funcionários estatutários. O 
// valor máximo da prestação não poderá ultrapassar 30% do salario bruto. Fazer um 
// algoritmo que permita entrar com o salario bruto e o valor da prestação e informar se o 
// empréstimo pode ou não ser concedido

#include <stdio.h>

int main(){

    float salario, prestacao;

    printf("Entre com o seu salario: ");
    scanf("%f", &salario);

    printf("Entre com o valor da prestacao: ");
    scanf("%f", &prestacao);

    if(prestacao <= salario * 0.3){
        printf("O emprestimo pode ser concedido!");
    } else {
        printf("O emprestimo nao pode ser concedido!");
    }

}