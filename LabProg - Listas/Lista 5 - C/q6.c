#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

double calcMedia(int *vetor, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }
    return (double)soma / n;
}

double calcMediana(int *vetor, int n) {
    qsort(vetor, n, sizeof(int), comparar);
    if (n % 2 == 0) {
        return (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;
    } else {
        return vetor[n / 2];
    }
}

int calcularModa(int *vetor, int n) {
    qsort(vetor, n, sizeof(int), comparar);

    int maxCount = 0, count = 1, moda = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] == vetor[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > maxCount) {
            maxCount = count;
            moda = vetor[i];
        }
    }
    return moda;
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

    double media = calcMedia(vetor, n);
    double mediana = calcMediana(vetor, n);
    int moda = calcularModa(vetor, n);

    printf("Média: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    free(vetor);

    return 0;
}
