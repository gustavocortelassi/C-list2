// Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo feminino e tiver 
// menos que 25 anos, imprimir nome e a mensagem: ACEITA. Caso contrário imprimir 
// nome e a mensagem: NÃO ACEITA. 

#include <stdio.h>

int main(){

    char nome, sexo;
    int idade;

    printf("Entre com seu nome: ");
    scanf("%s", &nome);

    printf("Entre com sua idade: ");
    scanf("%i", &idade);

    printf("Entre com seu sexo: F - feminino, M - masculino: ");
    scanf("%s", &sexo);

    
    if(sexo == 'F'){
        if(idade < 25){
            printf("ACEITA");
        } else {
            printf("NAO ACEITA");
        }
    }
}