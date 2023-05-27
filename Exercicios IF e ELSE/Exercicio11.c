// Sabendo que somente os municípios que possuem mais de 20.000 eleitores aptos tem 
// segundo turno nas eleições para prefeito caso o primeiro colocado não tenha mais que 
// 50% dos votos, fazer um algoritmo que leia o nome do município, a quantidade de 
// eleitores aptos, o numero de votos do candidato mais votado e informar se ele terá ou 
// não segundo turno em sua eleição municipal.

#include <stdio.h>

int main(){

    float eleitores_aptos, mais_votado;
    char nome_municipio;

    printf("Entre com o nome do municipio: ");
    scanf("%s", &nome_municipio);

    printf("Entre com a quantidade de eleitores aptos: ");
    scanf("%f", &eleitores_aptos);

    printf("Entre com o numero de votos do candidato mais votado: ");
    scanf("%f", &mais_votado);

    if(eleitores_aptos > 20.000){
        if(mais_votado <= eleitores_aptos/2){
            printf("Tera segundo turno!");
        } else {
            printf("Nao tera segundo turno!");
        }
    } else {
        printf("Nao tera segundo turno!");
    }
}