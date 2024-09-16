#include <stdio.h>

int main()
{
    int renata = 0, paulo = 0, voto = 0, nulo = 0, branco = 0;
    char confirmar;

    while (voto >= 0)
    {
        puts("Digite para votar\n[5]Paulo\n[7]Renata\n[0]Nulo:\n");
        scanf("%d", &voto);

        if (voto == 5)
        {
            puts("Você tem certeza do voto?:");
            scanf(" %c", &confirmar);

            if (confirmar == 's')
            {
                paulo++;
            }
            else
            {
                continue;
            }
        }
        else if (voto == 7)
        {
            puts("Você tem certeza do voto?:");
            scanf(" %c", &confirmar);

            if (confirmar == 's')
            {
                renata++;
            }
            else
            {
                continue;
            }
        }
        else if (voto > 0 && voto != 5 && voto != 7)
        {
            puts("Você tem certeza do voto?:");
            scanf(" %c", &confirmar);

            if (confirmar == 's')
            {
                branco++;
            }
            else
            {
                continue;
            }
        }
        else if (voto == 0)
        {
            puts("Você tem certeza do voto?:");
            scanf(" %c", &confirmar);

            if (confirmar == 's')
            {
                nulo++;
            }
            else
            {
                continue;
            }
        }
    }

    printf("\n=======Resultados=======\nPaulo: %d votos\nRenata: %d votos\nNulo: %d votos\nBranco: %d votos\n", paulo, renata, nulo, branco);
}