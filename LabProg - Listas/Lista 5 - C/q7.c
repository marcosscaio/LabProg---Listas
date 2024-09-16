#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 100

// Função para calcular o erro médio quadrático
double calcularErroMedioQuadratico(int *A, int *B, int n) {
    double somaQuadrados = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = (double)A[i] - (double)B[i];
        somaQuadrados += diff * diff;
    }
    return somaQuadrados / n;
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

    int *A = (int *)malloc(n * sizeof(int));
    int *B = (int *)malloc(n * sizeof(int));
    if (A == NULL || B == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    srand(time(NULL));

    printf("Vetor A:\n");
    for (int i = 0; i < n; i++) {
        A[i] = rand() % RG; 
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Vetor B:\n");
    for (int i = 0; i < n; i++) {
        B[i] = rand() % RG; 
        printf("%d ", B[i]);
    }
    printf("\n");

    double emq = calcularErroMedioQuadratico(A, B, n);
    printf("Erro Médio Quadrático: %.2f\n", emq);

    free(A);
    free(B);

    return 0;
}
