#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, n;
    int *X, *Y;
    int **M;
    int i, j;

    printf("Digite o número de elementos em X e Y: ");
    scanf("%d", &n);

    printf("Digite o valor máximo N (intervalo [0, N-1]): ");
    scanf("%d", &N);

    X = (int *)malloc(n * sizeof(int));
    Y = (int *)malloc(n * sizeof(int));

    M = (int **)malloc(N * sizeof(int *));
    for (i = 0; i < N; i++) {
        M[i] = (int *)malloc(N * sizeof(int));
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            M[i][j] = 0;
        }
    }

    srand(time(NULL));

    printf("Vetor X:\n");
    for (i = 0; i < n; i++) {
        X[i] = rand() % N;
        printf("%d ", X[i]);
    }
    printf("\n");

    printf("Vetor Y:\n");
    for (i = 0; i < n; i++) {
        Y[i] = rand() % N;
        printf("%d ", Y[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        M[X[i]][Y[i]]++;
    }

    printf("Matriz de ocorrências:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
