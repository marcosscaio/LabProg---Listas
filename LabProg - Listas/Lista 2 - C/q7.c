#include <stdio.h>

int main()
{
    int num1, num2;
    float res;

    do
    {
        printf("Digite o primeiro e segundo número:\n");
        scanf("%d,%d", &num1, &num2);

    } while (num2 == 0);

    res = (float)num1 / num2;

    printf("O valor de %d por %d é %.1f\n", num1, num2, res);

    return 0;
}