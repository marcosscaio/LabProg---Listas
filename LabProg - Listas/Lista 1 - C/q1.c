#include <stdio.h>

int main()
{

    int x, y, z;

    x = 7 + 3 * 6 / 2 - 1;             
    y = 2 % 2 + 2 * 2 - 2 / 2;
    z = (3 * 9 * (3 + (9 * 3 / (3)))); // Seguindo a ordem dos parênteses, faz o produto mais interno, divide por 3, soma mais 3 e multiplica os demais.

    printf("x = %d\ny = %d\nz = %d", x, y, z);

    return 0;
}