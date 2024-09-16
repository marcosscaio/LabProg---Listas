#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char string1[TAM], string2[TAM];

 
    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

   
    strcat(string1, string2);

    printf("As strings concatenadas são: %s\n", string1);

    return 0;
}
