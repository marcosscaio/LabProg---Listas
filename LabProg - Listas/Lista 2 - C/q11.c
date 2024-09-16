#include <stdio.h>

int main()
{
    int a, b, troca;
    printf("Digite valor de começo e fim:");
    scanf("%d,%d", &a, &b);

    if (a > b)
    {
        for (b; b < a; b++)
        {
            if (b % 4 == 0)
            {
                printf("%d ", b * b);
            }
        }
    }
    else
    {
        for (a; a < b; a++)
        {
            if (a % 4 == 0)
            {
                printf("%d ", a * a);
            }
        }
    }
}