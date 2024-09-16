#include <stdio.h>

int main()
{
    float raio, diametro, circuferencia, area;
    const float pi = 3.14159;

    printf("Digite o valor da raio: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circuferencia = diametro * pi;
    area = pi * (raio*raio);

    printf("\nDiâmetro: %.2f\nCircuferência: %.2f\nÁrea: %.2f\n", diametro,circuferencia,area);
}