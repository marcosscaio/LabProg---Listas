#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int troca;
    int *p1, *p2;

    printf("Digite o número de elementos do array: ");
    scanf("%d", &n);

    printf("Digite %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            p1 = arr + j;     
            p2 = arr + j + 1; 
            if (*p1 > *p2) {
                troca = *p1;
                *p1 = *p2;
                *p2 = troca;
            }
        }
    }

    // Imprime o array ordenado
    printf("Array ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
