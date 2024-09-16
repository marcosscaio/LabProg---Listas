#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char string1[TAM];

  
    printf("Digite a string: ");
    scanf("%s", string1);

    int comprimento = strlen(string1);

    for(int i = comprimento - 1; i >= 0; i--){
        printf("%c",string1[i]);
    }
       printf("\n");

    return 0;
}
