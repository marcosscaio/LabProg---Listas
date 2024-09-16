#include <stdio.h>

int main()
{
    int number = 4;

    printf("Pós incrementar:\n");
    while (number > 1)
    {
        printf("%d\n", number--);
    }

    number = 4;

    printf("\nPré incrementar:\n");
    while (number > 1)
    {
        printf("%d\n", --number);
    }
}
