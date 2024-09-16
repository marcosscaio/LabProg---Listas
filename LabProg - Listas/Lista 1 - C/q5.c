#include <stdio.h>

int main()
{
    float conta, total;

    printf("Digite o valor da conta: ");
    scanf("%f", &conta);

    total = conta + (conta * 0.1);

    printf("O valor total da conta é: %.2f\n", total);
}