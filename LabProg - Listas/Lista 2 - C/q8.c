#include <stdio.h>

int main()
{
    float valor, entrada, parcelas;
    int prestacoes;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    parcelas = valor / 3;
    prestacoes = (int)parcelas;

    while (prestacoes % 10 != 0)
    {
        prestacoes--;
    }

    entrada = valor - (2 * prestacoes);

    printf("Valor de entrada: R$ %.2f\nValor das prestações: R$ %d\n", entrada, prestacoes);

    return 0;
}
