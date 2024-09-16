#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Digite o valor dos numeros: ");
    scanf("%f,%f", &num1, &num2); // Formato de entrada: a,b

    float resto = num1 - (int)(num1 / num2) * num2;

    printf("\nSoma: %.1f\nProduto: %.1f\nDiferenca: %.1f\nQuociente: %.1f\nResto: %.1f\n",
           num1 + num2, num1 * num2, num1 - num2, num1 / num2, resto);

    return 0;
}