#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define TAM 50

struct ferramenta {
    int registro;             
    char nome[TAM];     
    int quantidade;          
    float custo;             
};

void inicializarArquivo();
void inserirFerramenta();
void excluirFerramenta();
void listarFerramentas();
void atualizarFerramentas();
void excluirFerramenta();

int main() {
    int opcao;

    inicializarArquivo();

    do {
        printf("\n--- Menu ---\n");
        printf("1. Inserir ferramenta\n");
        printf("2. Listar ferramentas\n");
        printf("3. Excluir ferramenta\n");
        printf("4. Atualizar ferramenta\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirFerramenta();
                break;
            case 2:
                listarFerramentas();
                break;
            case 3:
                excluirFerramenta();
                break;
            case 4:
                atualizarFerramenta();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

void inicializarArquivo() {
    FILE *arquivo = fopen("hardware.dat", "wb");
    if (arquivo == NULL) {
        perror("Erro ao criar o arquivo");
        return 1;
    }

    struct ferramenta vazia = {0, "", 0, 0.0};
    for (int i = 0; i < MAX; i++) {
        fwrite(&vazia, sizeof(struct ferramenta), 1, arquivo);
    }

    fclose(arquivo);
}

void inserirFerramenta() {
    FILE *arquivo = fopen("hardware.dat", "r+b");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    struct ferramenta nova;
    printf("Digite o nome da ferramenta: ");
    scanf(" %[^\n]", nova.nome);
    printf("Digite a quantidade: ");
    scanf("%d", &nova.quantidade);
    printf("Digite o custo: ");
    scanf("%f", &nova.custo);

    for (int i = 0; i < MAX; i++) {
        struct ferramenta f;
        fseek(arquivo, i * sizeof(struct ferramenta), SEEK_SET);
        fread(&f, sizeof(struct ferramenta), 1, arquivo);
        if (f.registro == 0) { 
            nova.registro = i + 1;
            fseek(arquivo, i * sizeof(struct ferramenta), SEEK_SET);
            fwrite(&nova, sizeof(struct ferramenta), 1, arquivo);
            break;
        }
    }

    fclose(arquivo);
}

void listarFerramentas() {
    FILE *arquivo = fopen("hardware.dat", "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    printf("\n--- Lista de Ferramentas ---\n");
    printf("Registro | Nome            | Quantidade | Custo\n");
    printf("----------------------------------------------\n");

    struct ferramenta f;
    for (int i = 0; i < MAX; i++) {
        fread(&f, sizeof(struct ferramenta), 1, arquivo);
        if (f.registro != 0) {
            printf("%7d | %-15s | %10d | %.2f\n", f.registro, f.nome, f.quantidade, f.custo);
        }
    }

    fclose(arquivo);
}

void atualizarFerramenta() {
    FILE *arquivo = fopen("hardware.dat", "r+b");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int registro;
    printf("Digite o número do registro da ferramenta a ser atualizada: ");
    scanf("%d", &registro);

    struct ferramenta f;
    fseek(arquivo, (registro - 1) * sizeof(struct ferramenta), SEEK_SET);
    fread(&f, sizeof(struct ferramenta), 1, arquivo);

    if (f.registro != 0) {
        printf("Digite o novo nome da ferramenta (atual: %s): ", f.nome);
        scanf(" %[^\n]", f.nome);
        printf("Digite a nova quantidade (atual: %d): ", f.quantidade);
        scanf("%d", &f.quantidade);
        printf("Digite o novo custo (atual: %.2f): ", f.custo);
        scanf("%f", &f.custo);

        fseek(arquivo, (registro - 1) * sizeof(struct ferramenta), SEEK_SET);
        fwrite(&f, sizeof(struct ferramenta), 1, arquivo);
        printf("Ferramenta com registro %d atualizada com sucesso.\n", registro);
    } else {
        printf("Registro %d não encontrado.\n", registro);
    }

    fclose(arquivo);
}

void excluirFerramenta() {
    FILE *arquivo = fopen("hardware.dat", "r+b");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    int registro;
    printf("Digite o número do registro da ferramenta a ser excluída: ");
    scanf("%d", &registro);

    struct ferramenta f;
    fseek(arquivo, (registro - 1) * sizeof(struct ferramenta), SEEK_SET);
    fread(&f, sizeof(struct ferramenta), 1, arquivo);

    if (f.registro != 0) {
        struct ferramenta vazia = {0, "", 0, 0.0}; // Registro vazio
        fseek(arquivo, (registro - 1) * sizeof(struct ferramenta), SEEK_SET);
        fwrite(&vazia, sizeof(struct ferramenta), 1, arquivo);
        printf("Ferramenta com registro %d excluída com sucesso.\n", registro);
    } else {
        printf("Registro %d não encontrado.\n", registro);
    }

    fclose(arquivo);
}
