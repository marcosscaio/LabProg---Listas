#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 1000

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

    float *vetor = (float *)malloc(n * sizeof(float));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    srand(time(NULL));

    printf("Vetor gerado:\n");
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        vetor[i] = (float)(rand() % RG) / 10.0; 
        printf("%.1f ", vetor[i]);
        soma += vetor[i];
    }
    printf("\n");

    printf("Soma dos elementos: %.2f\n", soma);

    free(vetor);

    return 0;
}
