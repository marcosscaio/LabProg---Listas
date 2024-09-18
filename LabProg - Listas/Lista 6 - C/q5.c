#include <stdio.h>
#define TAM 100

struct professor {
    char nome[TAM];
};

struct disciplina {
    char nome[TAM];
    struct professor prof;
};

int main() {
    struct disciplina materia;

    printf("Informe o nome da disciplina: ");
    scanf(" %[^\n]", materia.nome);

    printf("Informe o nome do professor: ");
    scanf(" %[^\n]", materia.prof.nome);

    printf("\n--- Dados da Disciplina ---\n");
    printf("Nome da Disciplina: %s\n", materia.nome);
    printf("Nome do Professor: %s\n", materia.prof.nome);

    return 0;
}
