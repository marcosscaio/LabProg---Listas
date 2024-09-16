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
    int f;

    printf("Escreva um número:");
    scanf("%d", &f);

    printf("A fatorial deste número é %d\n", fatorial(f));

    return 0;
}