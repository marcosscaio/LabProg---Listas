#include <stdio.h>
#include <stdlib.h>

struct usuario {
    char nome[50];
    char email[50];
};

int main() {
    FILE *arquivo;
    struct usuario user;
    int numUsuarios, i;

    arquivo = fopen("usuarios.csv", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "Nome,Email\n");

    printf("Quantos usuários deseja cadastrar? ");
    scanf("%d", &numUsuarios);
    getchar();

    for (i = 0; i < numUsuarios; i++) {
        printf("Informe o nome do usuário %d: ", i + 1);
        fgets(user.nome, sizeof(user.nome), stdin);

        printf("Informe o email do usuário %d: ", i + 1);
        fgets(user.email, sizeof(user.email), stdin);

        fprintf(arquivo, "%s,%d,%s\n", user.nome, user.email);
    }

    // Fecha o arquivo
    fclose(arquivo);
}
