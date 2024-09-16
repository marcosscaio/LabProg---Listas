#include <stdio.h>

int main()
{
    int base = 3;

    for (int i = 0; i <= 7; i++)
    {
        int res = 1;

        if (i == 0)
        {
            res = 1;
        }
        else if (i == 1)
        {
            res = base;
        }
        else if (i != 0 && i != 1)
        {
            for (int j = 0; j < i; j++)
            {
                res *= base;
            }
        }
        printf("%d^%d = %d\n", base, i, res);
    }
}
