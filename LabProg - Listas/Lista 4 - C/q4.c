#include <stdio.h>

int main() {
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetInt[n];
    int *pInt = vetInt;

    printf("Digite %d números inteiros:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", pInt + i);
    }

    printf("Valores e endereços do vetor de inteiros:\n");
    for (i = 0; i < n; i++) {
        printf("%d, Endereço: %p\n", *(pInt + i), (pInt + i));
    }

    float vetFloat[n];
    float *pFloat = vetFloat;

    printf("\nDigite %d números em ponto flutuante:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", pFloat + i);
    }

    printf("Valores e endereços do vetor de floats:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f, Endereço: %p\n", *(pFloat + i), (pFloat + i));
    }

    char vetChar[n];
    char *pChar = vetChar;

    printf("\nDigite %d caracteres:\n", n);
    for (i = 0; i < n; i++) {
        scanf(" %c", pChar + i);
    }

    printf("Valores e endereços do vetor de caracteres:\n");
    for (i = 0; i < n; i++) {
        printf("%c, Endereço: %p\n", *(pChar + i), (pChar + i));
    }

    return 0;

    // Os endereços são contíguos e possuem formatos diferentes
}

