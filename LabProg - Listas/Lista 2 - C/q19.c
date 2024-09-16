#include <stdio.h>

int main()
{

    float aritimetica, a, b, soma;

    printf("Digite valor de começo e fim:");
    scanf("%f,%f", &a, &b);

    for (a; a <= b; a++)
    {
        soma += a;
    }

    aritimetica = soma / b;

    printf("Média aritimética: %.1f\n", aritimetica);
}