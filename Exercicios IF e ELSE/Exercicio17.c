// A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que 
// trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular 
// com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas 
// trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que 
// deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o 
// mês possua 4 semanas exatas)

#include <stdio.h>

int main(){
    float horas_trabalhadas, salario_hora, salario_total;
    float hora_extra, salario_extra, final_extra;

    printf("Entre com a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Entre com seu salario por hora: ");
    scanf("%f", &salario_hora);

    if(horas_trabalhadas > 0 && horas_trabalhadas < 160){
        salario_total = horas_trabalhadas * salario_hora;
        printf("Voce nao tem horas a receber, seu salario eh: %.2f", salario_total);
    } else if(horas_trabalhadas > 160){
        hora_extra = horas_trabalhadas - 160;  //acha o nº de horas extra
        salario_extra = salario_hora * 1.5;     // calcula o valor das horas extras
        final_extra = hora_extra * salario_extra;   // calcula o valor final do salario extra
        salario_total = final_extra + (horas_trabalhadas * salario_hora);   // calcula o valor final

        printf("Voce tem %.2f horas extras esse mes\n", hora_extra);
        printf("Suas hora extra contabiliza o valor de: %.2f reais\n", salario_extra);
        printf("O salario extra final eh: %.2f\n", final_extra);
        printf("Seu salario final esse mes eh de: %.2f = %.2f + %.2f\n", salario_total, salario_total - final_extra, final_extra);
    }
}