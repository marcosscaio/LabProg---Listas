#include <stdio.h>

int main()
{

    float altura, peso;
    char sexo;

    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("Digite seu sexo:");
    scanf(" %c", &sexo);

    if (sexo == 'M')
    {
        peso = 72.7 * altura - 58;
        printf("Seu peso ideal é : %.2f\n", peso);
    }
    else
    {
        peso = 62.1 * altura - 44.7;
        printf("Seu peso ideal é : %.2f\n", peso);
    }

    return 0;
}