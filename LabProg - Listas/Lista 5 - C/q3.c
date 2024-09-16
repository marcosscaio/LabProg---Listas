#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findValues(int *vetor, int n, int **values) {
    int *menor = vetor;
    int *maior = vetor;

    for (int i = 1; i < n; i++) {
        if (vetor[i] < *menor) {
            menor = &vetor[i];
        }
        if (vetor[i] > *maior) {
            maior = &vetor[i];
        }
    }

    values[0] = menor;
    values[1] = maior;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <número de elementos>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("O número de elementos deve ser um valor positivo.\n");
        return 1;
    }

    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    srand(time(NULL));

    printf("Vetor gerado:\n");
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100; // Valores aleatórios no intervalo [0, 99]
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int *extremos[2];
    findValues(vetor, n, extremos);

    printf("Endereço do menor elemento: %p\n", (void *)extremos[0]);
    printf("Valor do menor elemento: %d\n", *extremos[0]);

    printf("Endereço do maior elemento: %p\n", (void *)extremos[1]);
    printf("Valor do maior elemento: %d\n", *extremos[1]);

    free(vetor);

    return 0;
}
