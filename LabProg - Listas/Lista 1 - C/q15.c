#include <stdio.h>

int main()
{
    float gratificacao, liquido, bruto;
    const float diaria = 50.25;
    int dias;

    printf("Digite a quantidade de dias trabalhadas:");
    scanf("%d", &dias);

    if (dias <= 10)
    {
        bruto = dias * diaria;
        liquido = bruto - (bruto * 0.1);
        printf("O salário líquido é de: R$%.2f\n", liquido);
    }
    else if (dias > 10 && dias <= 20)
    {
        bruto = dias * diaria;
        gratificacao = bruto + (bruto * 0.2);
        liquido = gratificacao - (gratificacao * 0.1);

        printf("O salário líquido é de: R$%.2f\n", liquido);
    }
    else
    {
        bruto = dias * diaria;
        gratificacao = bruto + (bruto * 0.3);
        liquido = gratificacao - (gratificacao * 0.1);
        printf("O salário líquido é de: R$%.2f\n", liquido);
    }
}