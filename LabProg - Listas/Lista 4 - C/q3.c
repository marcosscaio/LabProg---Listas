#include <stdio.h>

int main() {
    int num1, menor;
    int *p1 = &num1, *pMenor = &menor;

    printf("Digite um número (número negativo para sair): ");
    scanf("%d", p1);

    *pMenor = *p1;

    while (*p1 >= 0) {
        if (*p1 < *pMenor) {
            *pMenor = *p1;
        }

        printf("Menor número até agora: %d\n", *pMenor);
        
        // Solicita outro número
        printf("Digite outro número (número negativo para sair): ");
        scanf("%d", p1);
    }

    printf("Programa encerrado. O menor número fornecido foi: %d\n", *pMenor);

    return 0;
}
