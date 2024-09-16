#include <stdio.h>

int main()
{
    int num, digito, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 0)
    {

        digito = num % 10;

        if (digito == 7)
        {
            contador++;
        }

        num /= 10;
    }

    printf("O numero de digitos 7 no numero digitado é: %d\n", contador);

    return 0;
}
