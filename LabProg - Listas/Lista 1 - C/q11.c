#include <stdio.h>

int main()
{
    float dolar, real, total;

    printf("Digite o valor da cota atual do dólar e quantos reais deseja converter: ");
    scanf("%f,%f", &dolar, &real); // Formato de entrada --> d,r (sendo d e r ∈ IR)

    total = real / dolar;

    printf("Valor total: $%.2f\n", total);
}