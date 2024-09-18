#include <stdio.h>

#define TAM 50

struct Estoque {
    char nomePeca[TAM];
    int numPeca;
    float preco;
    int numPedido;
};

int main() {
    struct Estoque item;

    printf("Digite o nome da peça: ");
    scanf("%49[^\n]", item.nomePeca); 

    printf("Digite o número da peça: ");
    scanf("%d", &item.numPeca);

    printf("Digite o preço da peça: ");
    scanf("%f", &item.preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &item.numPedido);

    printf("\n--- Dados da Peça ---\n");
    printf("Nome da Peça: %s\n", item.nomePeca);
    printf("Número da Peça: %d\n", item.numPeca);
    printf("Preço: R$ %.2f\n", item.preco);
    printf("Número do Pedido: %d\n", item.numPedido);

    return 0;
}

