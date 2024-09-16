#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&vetor[i], &vetor[minIndex]);
        }
    }
}


void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                swap(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    int tamanho, limite_inferior, limite_superior;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite o limite inferior do intervalo: ");
    scanf("%d", &limite_inferior);

    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &limite_superior);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % (limite_superior - limite_inferior + 1) + limite_inferior;
    }

    int vetor_selecao[tamanho];
    int vetor_bubble[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor_selecao[i] = vetor[i];
        vetor_bubble[i] = vetor[i];
    }

    selectionSort(vetor_selecao, tamanho);
    bubbleSort(vetor_bubble, tamanho);

    printf("\nVetor Ordenado (Seleção):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor_selecao[i]);
    }
    printf("\n");

    printf("\nVetor Ordenado (Bubble Sort):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor_bubble[i]);
    }
    printf("\n");

    return 0;
}
