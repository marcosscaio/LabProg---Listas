#include <stdio.h>

int main()
{
    float comprimento, volume, largura, altura;

    printf("Digite o valor do comprimento, altura e largura, respectivamente: ");
    scanf("%f,%f,%f", &comprimento, &altura, &largura); // Formato de entrada --> c,a,l (sendo c,a e l ∈ IR)

    volume = comprimento*altura*largura;

    printf("Volume: %.2f\n", volume);
}