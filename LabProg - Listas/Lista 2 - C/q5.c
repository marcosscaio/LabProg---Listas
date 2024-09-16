#include <stdio.h>

int main()
{
    int sair = 1;
    int maior_valor = 0;
    int menor_valor = 0;
    int valor = 1;

    while (valor != 0)
    {
        printf("Digite um valor:");
        scanf("%d", &valor);

        if (valor >= maior_valor)
        {
            maior_valor = valor;
        }
        if (valor <= menor_valor && valor != 0)
        {
            menor_valor = valor;
        }
    }

    printf("Menor valor:%d\nMaior Valor:%d\n", menor_valor, maior_valor);
}