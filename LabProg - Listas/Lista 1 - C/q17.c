#include <stdio.h>

int main()
{
    int num, mod;

    printf("Digite o número: ");
    scanf("%d", &num);

    mod = (num < 0) ? -1 * num : num;

    printf("O módulo de %d é %d\n", num, mod);
    return 0;
}