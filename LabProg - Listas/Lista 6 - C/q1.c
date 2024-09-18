#include <stdio.h>
#include <stdlib.h>

struct aluno{
    float n1;
    float n2;
    float media;
};

int main(){
    struct aluno alu;

    printf("Informe as duas notas: \n");
    scanf("%f %f", &alu.n1, &alu.n2);

    alu.media = (alu.n1 + alu.n2) / 2;
    printf("Média = %f" ,alu.media);
}