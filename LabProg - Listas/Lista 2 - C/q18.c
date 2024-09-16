#include <stdio.h>

int main()
{
    unsigned long long int res = 0;
    unsigned long long int multiplo = 1;
    for (int i = 0; i < 64; i++)
    {
        res += multiplo;
        multiplo *= 2;
    }
    printf("Total de grãos: %llu\n", res);
    return 0;
}