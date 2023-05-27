#include <stdio.h>

int main(){

    int rodando = 1, numero_habitantes, cont_hab = 1, cod_consumidor, cont_residencial = 0, cont_comercial = 0, cont_industrial = 0;
    float kw_hora, consumo_mensal, soma_residencial = 0, soma_comercial = 0, soma_industrial = 0, media_residencial, media_comercial, media_industrial, media_total;
    float maior_consumo = -1, menor_consumo = -1;

    printf("Entre com o numero de habitantes da cidade: \n");
    scanf("%i", &numero_habitantes);

    printf("Entre com o valor do kwh: \n");
    scanf("%f", &kw_hora);

    while(rodando == 1){
        if (cont_hab > numero_habitantes) {
            rodando = 0;
            break;
        }

        printf("Informe o codigo do consumidor %i: 1 - Residencial, 2 - Comercial, 3 - Industrial: \n", cont_hab);
        printf("Para encerrar, pressione 0\n");
        scanf("%i", &cod_consumidor);
        
        if (cod_consumidor == 0) {
            printf("Encerrando...\n");
            break;
        }
        
        printf("Entre com o consumo mensal em kwh do habitante numero %i\n", cont_hab);
        scanf("%f", &consumo_mensal);

        if (maior_consumo == -1 || consumo_mensal > maior_consumo) {
            maior_consumo = consumo_mensal;
        }
        if (menor_consumo == -1 || consumo_mensal < menor_consumo) {
            menor_consumo = consumo_mensal;
        }

        switch (cod_consumidor){
            case 1:
                cont_residencial++;
                soma_residencial += consumo_mensal;
                break;
            
            case 2:
                cont_comercial++;
                soma_comercial += consumo_mensal;
                break;
            
            case 3:
                cont_industrial++;
                soma_industrial += consumo_mensal;
                break;
        }

        cont_hab++;
    }

    media_residencial = soma_residencial / cont_residencial; 
    media_comercial = soma_comercial / cont_comercial;
    media_industrial = soma_industrial / cont_industrial;
    media_total = (soma_residencial + soma_comercial + soma_industrial) / cont_hab;

    printf("Maior consumo: %.2f kw/h\n", maior_consumo);
    printf("Menor consumo: %.2f kw/h\n", menor_consumo);
    printf("Média de consumo dos habitantes: %.2f kw/h\n", media_total);
    printf("Total do consumo residencial: %.2f kw/h\n", soma_residencial);
    printf("Total do consumo comercial: %.2f kw/h\n", soma_comercial);
    printf("Total do consumo industrial: %.2f kw/h\n", soma_industrial);
}
