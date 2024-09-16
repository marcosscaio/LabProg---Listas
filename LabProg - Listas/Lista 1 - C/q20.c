#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

   num%2 == 0 ? printf("Par\n") : printf("ímpar\n");
}