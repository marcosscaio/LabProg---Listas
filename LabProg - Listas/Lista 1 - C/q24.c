#include <stdio.h>

int potencia(int x, int n)
{
    int resultado = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            resultado *= x;
        }
        x *= x;
        n >>= 1;
    }

    return resultado;
}

int main()
{
    int x, n;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = potencia(x, n);

    printf("%d elevado a %d é igual a: %d\n", x, n, resultado);

    return 0;
}
