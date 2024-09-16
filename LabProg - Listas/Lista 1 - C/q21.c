#include <stdio.h>

int main()
{
    int num1,num2;

    printf("Digite os números: ");
    scanf("%d,%d", &num1,&num2);// Formato de entrada: a,b

    num2%num1 == 0 ?printf("É Múltiplo\n"):printf("Não é\n");
}