#include <stdio.h>

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("Fatorial de %d: %d\n", i, fatorial(i));
        }
    }

    return 0;
}