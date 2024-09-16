#include <stdio.h>

int main()
{
    float valor_hora, inss, bruto, liquido;
    int hora_aula, horas_mes;

    printf("Digite o valor da sua da sua hora por aula, horas trabalhadas no mês e o percentual do INSS:");
    scanf("%f,%d,%f", &valor_hora, &horas_mes, &inss); //Formato de entrada: a,b,c

    inss = inss / 100;

    bruto = valor_hora * horas_mes;
    liquido = bruto - (bruto * inss);

    printf("\nValor bruto: %.2f\nValor liquido: %.2f\n",bruto,liquido);
}