#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 3

int randInt() {
    return rand() % 20;
}

float mediaAritmetica(int vetor[], int size) {
    int soma = 0;
    for (int i = 0; i < size; i++) {
        soma += vetor[i];
    }
    return (float)soma / size;
}


float mediaGeometrica(int vetor[], int size) {
    float produto = 1.0;
    for (int i = 0; i < size; i++) {
        produto *= vetor[i];
    }
    return pow(produto, 1.0 / size);
}

int main() {
    int vetor[SIZE];

   
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = randInt();
    }

    printf("Vetor gerado: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Média Aritmética: %.2f\n", mediaAritmetica(vetor, SIZE));
    printf("Média Geométrica: %.2f\n", mediaGeometrica(vetor, SIZE));

    return 0;
}
