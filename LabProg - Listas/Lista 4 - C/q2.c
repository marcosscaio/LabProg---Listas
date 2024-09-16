#include <stdio.h>

int main() {
    int num1, num2;
    int *p1 = &num1, *p2 = &num2;

    printf("Digite dois números: ");
    scanf("%d %d", p1, p2);

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("Após a troca:\n");
    printf("Num1: %d\nNum2: %d\n", *p1, *p2);

    return 0;
}
