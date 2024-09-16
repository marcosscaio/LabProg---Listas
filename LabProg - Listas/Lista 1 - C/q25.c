#include <stdio.h>

int main()
{
    int horas, minutos, segundos, tempo;

    printf("Digite o valor em segundos:");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("Tempo: %d:%d:%d\n", horas, minutos, segundos);
}