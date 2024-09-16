#include <stdio.h>

int main()
{
    unsigned char horas, minutos, segundos;
    int total_segundos;

    printf("Digite o valor das horas, minutos e segundos, respectivamente: ");
    scanf("%hhu:%hhu:%hhu", &horas, &minutos, &segundos); // Formato de entrada --> 00:00:00

    total_segundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("Total Segundos: %d\n", total_segundos);
}