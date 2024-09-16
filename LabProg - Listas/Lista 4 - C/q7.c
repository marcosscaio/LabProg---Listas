#include <stdio.h>

int main() {
    char str1[100];  
    char str2[100];  
    char *p1 = str1; 
    char *p2 = str2; 
    char *pDest;    

    printf("Digite a primeira string (max 99 caracteres): ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string (max 99 caracteres): ");
    fgets(str2, sizeof(str2), stdin);

    while (*p1 != '\0') {
        if (*p1 == '\n') {
            *p1 = '\0';
            break;
        }
        p1++;
    }

    p1 = str1;

    while (*p2 != '\0') {
        if (*p2 == '\n') {
            *p2 = '\0';
            break;
        }
        p2++;
    }

    p2 = str2; 

    pDest = str1;
    while (*pDest != '\0') {
        pDest++;
    }

    while (*p2 != '\0') {
        *pDest = *p2;
        pDest++;
        p2++;
    }

    *pDest = '\0';

    printf("String concatenada: %s\n", str1);

    return 0;
}
