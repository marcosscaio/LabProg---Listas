#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3


int countValue(int matriz[][COLS], int rows, int cols, int valor) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matriz[i][j] == valor) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int matriz[ROWS][COLS];
    int x;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Matriz gerada:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    printf("\nDigite um valor inteiro x: ");
    scanf("%d", &x);

    int count = countValue(matriz, ROWS, COLS, x);
    printf("O valor %d aparece %d vezes na matriz.\n", x, count);

    return 0;
}
