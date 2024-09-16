#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char string1[TAM], string2[TAM];

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

 
    if (strcmp(string1, string2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
