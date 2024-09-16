#include <stdio.h>

int main() {
    int num1, num2, soma;
    int *p1, *p2, *pSoma = NULL;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    p1 = &num1;
    p2 = &num2;
    pSoma = &soma;

    *pSoma = *p1 + *p2;

    printf("Soma: %d\n", *pSoma);
    printf("Endereço de memória da soma: %p\n", (void*)pSoma);

    return 0;
}
