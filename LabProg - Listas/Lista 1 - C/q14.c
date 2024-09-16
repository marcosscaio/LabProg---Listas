#include <stdio.h>
int main()
{
    float celsius, farenheit;

    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);

    farenheit = (9 * celsius + 160) / 5;

    printf("Em Farenheit:%.2f°\n", farenheit);
}