#include <stdio.h>

struct aluno {
    float n1;
    float n2;
    float media;
};

void calcularMedia(struct aluno *) ;

int main() {
    struct aluno alunos[3];

    // Lê as notas dos alunos
    for (int i = 0; i < 3; i++) {
        printf("Informe as duas notas do aluno %d: \n", i + 1);
        scanf("%f %f", &alunos[i].n1, &alunos[i].n2);
        calcularMedia(&alunos[i]); 
    }

    printf("\n--- Médias dos Alunos ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Média do aluno %d = %.2f\n", i + 1, alunos[i].media);
    }

    return 0;
}

void calcularMedia(struct aluno *alu) {
    alu->media = (alu->n1 + alu->n2) / 2;
}
