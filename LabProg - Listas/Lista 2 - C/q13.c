#include <stdio.h>

int main()
{
    int a, b, res;
    printf("Digite valor de começo e fim:");
    scanf("%d,%d", &a, &b);

    if (a > b)
    {
        for (b; b <= a; b++)
        {
            if (b % 2 == 0)
            {
                res += b;
            }
        }
    }
    else
    {
        for (a; a <= b; a++)
        {
            if (a % 2 == 0)
            {
                res += a;
            }
        }
    }

    printf("Resultado da soma é %d\n", res);
}