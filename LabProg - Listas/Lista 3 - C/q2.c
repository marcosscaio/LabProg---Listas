#include <stdio.h>
#include <string.h>

#define TAM 100

int main()
{
    char palavra[TAM], letra;
    int encontrado = 0, i = 0;

    printf("Digite a palavra: ");
    fgets(palavra, TAM, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; 

    printf("Digite a letra: ");
    scanf(" %c", &letra);


    while (palavra[i] != '\0')
    { 
        if (palavra[i] == letra)
        {
            encontrado = 1;
            break;
        }

        i++;
    }

    if (encontrado == 1)
    {
        printf("A letra %c está na palavra.\n", letra);
    }
    else
    {
        printf("A letra %c não está na palavra.\n", letra);
    }

    return 0;
}
