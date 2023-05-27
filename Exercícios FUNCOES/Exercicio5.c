// Fazer um programa que pergunta um valor em metros, e passe essa informação por
// parâmetro a uma função secundária e imprime o correspondente em decímetros,
// centímetros e milímetros.

float converteValor(float x){

    float decimetros, centimetros, milimetros;

    decimetros = x / 10;
    printf("O valor em decimetros eh: %.2f", decimetros);

    centimetros = x / 100;
    printf("O valor em centimetros eh: %.2f", centimetros);

    milimetros = x / 1000;
    printf("O valor em milimetros eh: %.3f", milimetros);
}

int main(){

    float numero;

    printf("Infome o valor em metros a ser convertido: ");
    scanf("%f", &numero);

    converteValor(numero);
}