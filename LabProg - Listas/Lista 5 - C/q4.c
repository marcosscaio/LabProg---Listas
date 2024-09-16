#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void normalVetor(int *vetor, int n, double *vetorNormal) {
    int i;
    int min = vetor[0];
    int max = vetor[0];

    for (i = 1; i < n; i++) {
        if (vetor[i] < min) {
            min = vetor[i];
        }
        if (vetor[i] > max) {
            max = vetor[i];
        }
    }

    for (i = 0; i < n; i++) {
        vetorNormal[i] = (double)(vetor[i] - min) / (max - min);
    }
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
    double *vetorNormalizado = (double *)malloc(n * sizeof(double));
    if (vetor == NULL || vetorNormalizado == NULL) {
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

    normalVetor(vetor, n, vetorNormalizado);

    printf("Vetor normalizado:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetorNormalizado[i]);
    }
    printf("\n");

    free(vetor);
    free(vetorNormalizado);

    return 0;
}
