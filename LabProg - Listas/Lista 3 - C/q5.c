#include <stdio.h>

#define TAM 100

int main() {
    char string1[TAM], string2[TAM];
    int i = 0, j = 0;

  
    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);


    while (string1[i] != '\0') {
        i++;
    }

    while (string2[j] != '\0') {
        string1[i] = string2[j];
        i++;
        j++;
    }
    
    string1[i] = '\0'; 

    printf("As strings concatenadas são: %s\n", string1);

    return 0;
}
