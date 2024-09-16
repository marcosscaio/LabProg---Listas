#include <stdio.h>

const char *binario(unsigned n)
{

    static char bin[10];

    for (int i = 8; i >= 0; i--)
    {
        bin[i] = (n & 1) + '0';
        n >>= 1;
    }

    bin[9] = '\0';

    return bin;
}

int main()
{
    for (int i = 1; i <= 256; i++)
    {
        printf("\nNúmero: %d\nBinário: %s, Octal: %o, Hexadecimal: %x\n", i, binario(i), i, i);
    }

    return 0;
}
