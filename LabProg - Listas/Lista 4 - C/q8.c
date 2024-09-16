#include <stdio.h>

int main() {
    char str[100];   
    char ch;         
    char *p = str; 
    int found = 0;

    printf("Digite uma string (max 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &ch);

    p = str;

    while (*p != '\0') {
        if (*p == ch) {
            printf("Caractere '%c' encontrado na posição: %ld\n", ch, p - str);
            found = 1;
            break;
        }
        p++;
    }

    if (!found) {
        printf("Caractere '%c' não encontrado na string.\n", ch);
    }

    return 0;
}
