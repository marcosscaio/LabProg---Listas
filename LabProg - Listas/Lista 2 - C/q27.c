#include <stdio.h>

int main()
{
    int maior_valor = 0;
    int menor_valor = 0;
    int valor = 1;

    while (!(valor < 0 && valor % 2 == 0))
    {
        printf("Digite um valor:");
        scanf("%d", &valor);

        if (valor >= maior_valor)
        {
            maior_valor = valor;
        }
        if (valor <= menor_valor && (!(valor < 0 && valor % 2 == 0)))
        {
            menor_valor = valor;
        }
    }

    printf("\nMenor valor:%d\nMaior Valor:%d\nProduto:%d\n", menor_valor, maior_valor, (menor_valor * maior_valor));
}