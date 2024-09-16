#include <stdio.h>

int main()
{
    int jose, pedro, anos;

    jose = 150;
    pedro = 110;

    while (pedro < jose)
    {
        pedro += 3;
        jose += 2;
        anos ++;
    }

    printf("Vai demorar %d anos até Pedro ultrapssar José\n",anos);
}