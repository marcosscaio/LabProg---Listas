#include <stdio.h>

int main()
{
    int number, m, c, d, u, dm;
    printf("Digite um núemro de 5 dígitos:");
    scanf("%d", &number);

    if (!(number <= 99999 && number >= 10000))
    {
        printf("Número inválido\n");
    }
    else
    {
        dm = (number - (number % 10000));
        m = number - (dm + (number % 1000));
        c = number - (dm + m + (number % 100));
        d = number - (c + dm + m + (number % 10));
        u = number - (dm + c + d + m);

        int m1, c1, d1, u1, dm1;
        dm1 = dm / 10000;
        m1 = m / 1000;
        c1 = c / 100;
        d1 = d / 10;

        if (dm1 == u && m1 == d1)
        {
            printf("Número palíndromo!\n");
        }
        else
        {
            printf("Não é palíndromo!\n");
        }
        }
}
