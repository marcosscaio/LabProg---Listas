#include <stdio.h>

int main()
{
    int cateto_a, cateto_b, hipotenusa;

    for (cateto_a = 1; cateto_a <= 500; cateto_a++)
    {
        for (cateto_b = 1; cateto_b <= 500; cateto_b++)
        {
            for (hipotenusa = 1; hipotenusa <= 500; hipotenusa++)
            {
                if ((cateto_a * cateto_a) + (cateto_b * cateto_b) == (hipotenusa * hipotenusa))
                {
                    printf("cateto1 = %d, cateto2 = %d, hipotenusa = %d\n", cateto_a, cateto_b, hipotenusa);
                }
            }
        }
    };
}
