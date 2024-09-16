#include <stdio.h>

int main()
{
    char caracteres[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};

    int tamanho = sizeof(caracteres) / sizeof(caracteres[0]);

    for (int i = 0; i < tamanho; ++i)
    {
        printf("O inteiro equivalente a '%c' é: %d\n", caracteres[i], caracteres[i]);
    }

    return 0;
}
