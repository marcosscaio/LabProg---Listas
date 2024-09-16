#include <stdio.h>

int main()
{
    int x;

    puts("Entre com um número de três dígitos");
    scanf("%d", &x);

    int c, d, u;

    c = x / 100;
    d = (x % 100) / 10;
    u = (x % 100) % 10;

    int y;
    y = u * 100 + d * 10 + c;

    printf("Valor de x: %d\nValor de y: %d\n", x, y);

    return 0;
}