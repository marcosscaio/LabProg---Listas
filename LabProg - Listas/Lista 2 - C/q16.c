#include <stdio.h>

int main()
{
    int sum3, sum5, c;

    while (c <= 200)
    {
        if (c % 3 == 0 && c <= 100)
        {
            sum3 += c;
        }
        else if (c % 5 == 0 && c >= 100)
        {
            sum5 += c;
        }

        c++;
    }

    printf("A soma dos números divisíveis por 3:%d\nA soma dos números divisíveis por 5:%d\n", sum3, sum5);
}
