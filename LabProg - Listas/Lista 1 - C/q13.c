#include <stdio.h>

int main()
{
    int a, b, troca;

    printf("Digite o valor de A = ");
    scanf("%d", &a);

    printf("Digite o valor de B = ");
    scanf("%d", &b);

    troca = a;
    a = b;
    b = troca;

    printf("\nA = %d\nB = %d\n", a, b);
}