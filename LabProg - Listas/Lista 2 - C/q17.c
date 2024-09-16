#include <stdio.h>

int main()
{
    int farenheit;

    for (int c = 10; c <= 100; c += 10)
    {
        farenheit = (c * 1.8) + 32;
        printf("Celsius: %d°C\nFarenheit:%.d°F\n\n", c, farenheit);
        farenheit = (c * 1.8) + 32;
    }
}
