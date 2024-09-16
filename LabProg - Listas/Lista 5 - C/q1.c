#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <valor1> <valor2> <operação>\n", argv[0]);
        printf("Operação: 1 para soma, 2 para multiplicação\n");
        return 1;
    }

    double valor1 = atof(argv[1]);
    double valor2 = atof(argv[2]);
    int op = atoi(argv[3]);
    double resultado;

    switch (op) {
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = valor1 * valor2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        default:
            printf("Código de operação inválido. Use 1 para soma ou 2 para multiplicação.\n");
            return 1;
    }

    return 0;
}
