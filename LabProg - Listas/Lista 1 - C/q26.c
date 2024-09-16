#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    float d;

    printf("Digite o valor das coordenas do Ponto 1:");
    scanf("%d,%d", &x1, &y1);

    printf("Digite o valor das coordenas do Ponto 2:");
    scanf("%d,%d", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos é: %.2f\n", d);
}