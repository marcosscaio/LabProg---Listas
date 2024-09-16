#include <stdio.h>

int main() {
    char str1[100]; 
    char str2[100];  
    char *src = str1; 
    char *dst = str2; 

    printf("Digite uma string (max 99 caracteres): ");
    fgets(str1, sizeof(str1), stdin);

    while (*src != '\0') {
        if (*src == '\n') {
            *src = '\0';
            break;
        }
        src++;
    }

    src = str1;

    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }

    *dst = '\0';

    printf("String copiada: %s\n", str2);

    return 0;
}
