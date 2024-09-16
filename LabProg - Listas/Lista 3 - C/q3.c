#include <stdio.h>
#include <string.h>

#define TAM 100

int main()
{
    char palavra[TAM];
    int count = 0, i = 0;

    printf("Digite a palavra: ");
    fgets(palavra, TAM, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; 


    while (palavra[i] != '\0')
    { 
        count++;
        i++;
    }

    printf("A palavra tem %d letras\n", count);
   
    

    return 0;
}
