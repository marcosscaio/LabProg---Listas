#include <stdio.h>

int main()
{

    int num;

    printf("Digite um número:");
    scanf("%d", &num);

    printf("Triplo = %d\nQuadrado = %d\nMeio = %d", num * 3, num * num, num / 2);

    return 0;
}