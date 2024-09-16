#include <stdio.h>
#include <string.h>

#define TAM 100

int main()
{
    char palavra1[TAM], palavra2[TAM];
    int iguais = 0, i = 0;

    printf("Digite a palavra: ");
    fgets(palavra1, TAM, stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';

    printf("Digite a outra palavra: ");
    fgets(palavra2, TAM, stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';

    while (palavra1[i] != '\0' && palavra2[i] != '\0')
    {
        if (palavra1[i] != palavra2[i])
        {
            iguais = 0;
            break;
        }
        else
        {
            iguais = 1;
        }

        i++;
    }

    if (iguais == 1)
    {
        printf("As duas palavras são iguais\n");
    }
    else
    {
        printf("As palavras são diferentes\n");
    }

    return 0;
}
