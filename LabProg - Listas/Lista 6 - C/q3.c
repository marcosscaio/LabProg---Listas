#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 100

struct matriz {
    float *numeros;   // Ponteiro para a matriz (vetor)
    int quantidade;   // Quantidade de elementos
    float media;      // Média dos elementos
};

void calcularMedia(struct matriz *);

int main() {
    struct matriz values;
    int n;

    // Lê a quantidade de elementos
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    values.numeros = (float *)malloc(n * sizeof(float));
    if (values.numeros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    values.quantidade = n;

    srand(time(NULL));
    printf("Números gerados:\n");
    for (int i = 0; i < values.quantidade; i++) {
        values.numeros[i] = (float)(rand() % RG); 
        printf("%.2f ", values.numeros[i]);
    }
    printf("\n");

    calcularMedia(&values);

    printf("Média: %.2f\n", values.media);

    return 0;
}

void calcularMedia(struct matriz *valores) {
    float soma = 0.0;
    for (int i = 0; i < valores->quantidade; i++) {
        soma += valores->numeros[i];
    }
    valores->media = soma / valores->quantidade;
}