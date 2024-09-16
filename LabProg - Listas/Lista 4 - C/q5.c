#include <stdio.h>

int main() {
    char str[100];   
    char *p = str;   
    int tamanho = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Calcula o comprimento da string
    while (*p != '\0') {
        if (*p == '\n') { // Remove o caractere de nova linha se presente
            *p = '\0';
            break;
        }
        tamanho++;
        p++;
    }

    // Imprime o comprimento da string
    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}
