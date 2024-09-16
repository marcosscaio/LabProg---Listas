#include <stdio.h>

int fibonnaci(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {

        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
}

int main()
{

    for (int i; i < 20; i++)
    {
        printf("%d ", fibonnaci(i));
    }

    return 0;
}