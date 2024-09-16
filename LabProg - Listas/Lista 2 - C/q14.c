#include <stdio.h>

int main()
{
    int a, b, cont;
    printf("Digite valor de começo e fim:");
    scanf("%d,%d", &a, &b);

    if (a > b)
    {
        for (b; b <= a; b++)
        {
            if (b % 3 == 0)
            {
                cont++;
            }
        }
    }
    else
    {
        for (a; a <= b; a++)
        {
            if (a % 3 == 0)
            {
                cont++;
            }
        }
    }

    printf("Existe %d números divisíveis por 3\n", cont);
}
