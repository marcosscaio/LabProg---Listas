#include <stdio.h>

int main()
{
    int number;
    printf("Digite um número:");
    scanf("%d", &number);

    for (int i=0;i<11;i++)
    {
        printf("%d x %d = %d\n",number,i,number*i);
    }
}