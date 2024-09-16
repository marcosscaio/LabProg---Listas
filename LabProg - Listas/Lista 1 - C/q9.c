#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Seu antecessor é %d, e o seu sucessor é %d\n",num-1,num+1);
}