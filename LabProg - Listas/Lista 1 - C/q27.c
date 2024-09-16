#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2,num3,MA,MG;

    printf("Digite os três números:");
    scanf("%f,%f,%f", &num1, &num2,&num3);

    MA = (num1+num2+num3)/3;

    MG = pow(num1*num2*num3,1.0/3.0) ;

    printf("Média aritimética: %.2f\nMédia Geométrica: %.2f\n",MA,MG);
}