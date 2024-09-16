#include <stdio.h>

double valor_pi(int n)
{
    double pi = 0.0;
    for (int i = 0; i < n; i++)
    {
        pi += (i % 2 == 0 ? 1 : -1) * 4.0 / (2 * i + 1);
    }
    return pi;
}

int main()
{
    int i = 0;
    // loop infinito
    while (!(0))
    {
        i++;
        printf("Valor de pi para o %d° termo: %.20f\n", i, valor_pi(i));
    }
    return 0;
}
