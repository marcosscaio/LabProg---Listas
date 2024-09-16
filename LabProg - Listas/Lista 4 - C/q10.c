#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, n;
    int *X, *F;
    int i;

    printf("Digite o número de elementos em X: ");
    scanf("%d", &n);

    printf("Digite o valor máximo N (intervalo [0, N-1]): ");
    scanf("%d", &N);

    X = (int *)malloc(n * sizeof(int));
    F = (int *)malloc(N * sizeof(int));

    for (i = 0; i < N; i++) {
        *(F + i) = 0;
    }

    srand(time(NULL));

    printf("Vetor X:\n");
    for (i = 0; i < n; i++) {
        *(X + i) = rand() % N;
        printf("%d ", *(X + i));
        (*(F + *(X + i)))++;
    }
    printf("\n");

    printf("Contagem de ocorrências (vetor F):\n");
    for (i = 0; i < N; i++) {
        printf("Número %d: %d ocorrência(s)\n", i, *(F + i));
    }

    free(X);
    free(F);

    return 0;
}
